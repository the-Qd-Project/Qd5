/****************************************************************************
**
** Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtSensors module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qsensor2gesture.h"
#include <qsensorgesture.h>
#include <qsensorgesturemanager.h>

QT_BEGIN_NAMESPACE

/*!
    \qmltype SensorGesture
    \instantiates QSensor2Gesture
    \inqmlmodule QtSensors 5.0
    \since QtSensors 5.0
    \brief Provides notifications when sensor-based gestures are detected.

    This type provides notification when sensor gestures are triggered.

    This type is part of the \b{QtSensors 5} module.

    The following QML code creates a "shake" and "SecondCounter" SensorGesture QML type, and
    displays the detected gesture in a text type.

    QtSensors.shake gesture is available with the Qt Sensors API, but the QtSensors.SecondCounter
    sensor gesture is provided as example code for the \l {Qt Sensors - SensorGesture QML Type example}

    \qml
    Item {
       SensorGesture {
           id: sensorGesture
           enabled: false
           gestures : ["QtSensors.shake", "QtSensors.SecondCounter"]
           onDetected:{
               detectedText.text = gesture
           }
       }
       Text {
           id: detectedText
           x:5
           y:160
           text: ""
       }
    }
    \endqml

    \l {Qt Sensor Gestures} contains a list of currently supported sensor gestures and their
    descriptions.


*/
QSensor2Gesture::QSensor2Gesture(QObject* parent)
    : QObject(parent)
    , isEnabled(false)
    , initDone(false)
    , sensorGesture(0)
    , sensorGestureManager(new QSensorGestureManager(this))
{
    connect(sensorGestureManager, SIGNAL(newSensorGestureAvailable()), SIGNAL(availableGesturesChanged()));
}

QSensor2Gesture::~QSensor2Gesture()
{
}

/*
  QQmlParserStatus interface implementation
*/
void QSensor2Gesture::classBegin()
{
}

void QSensor2Gesture::componentComplete()
{
    /*
      this is needed in the case the customer defines the type(s) and set it enabled = true
    */
    initDone = true;
    setEnabled(isEnabled);
}
/*
  End of QQmlParserStatus interface implementation
*/

/*!
    \qmlproperty stringlist QtSensors5::SensorGesture::availableGestures
    This property can be used to determine all available gestures on the system.
*/
QStringList QSensor2Gesture::availableGestures()
{
    return sensorGestureManager->gestureIds();
}

/*!
    \qmlproperty stringlist QtSensors5::SensorGesture::gestures
    Set this property to a list of the gestures that the application is interested in detecting.
    This property cannot be changed while the type is enabled.

    The properties validGestures and invalidGestures will be set as appropriate immediately.
    To determine all available getures on the system please use the
    \l {QtSensors5::SensorGesture::availableGestures} {availableGestures} property.

    \sa {QtSensorGestures Plugins}
*/
QStringList QSensor2Gesture::gestures() const
{
    return gestureList;
}

void QSensor2Gesture::setGestures(const QStringList& value)
{
    if (gestureList == value)
        return;

    if (initDone && enabled()) {
        qWarning() << "Cannot change gestures while running.";
        return;
    }
    gestureList.clear();
    gestureList = value;
    createGesture();
    Q_EMIT gesturesChanged();
}


/*!
    \qmlproperty stringlist QtSensors5::SensorGesture::validGestures
    This property holds the requested gestures that were found on the system.
*/
QStringList QSensor2Gesture::validGestures() const
{
    if (sensorGesture)
        return sensorGesture->validIds();
    return QStringList();
}

/*!
    \qmlproperty stringlist QtSensors5::SensorGesture::invalidGestures
    This property holds the requested gestures that were not found on the system.
*/
QStringList QSensor2Gesture::invalidGestures() const
{
    if (sensorGesture)
        return sensorGesture->invalidIds();
    return QStringList();
}

/*!
    \qmlproperty bool QtSensors5::SensorGesture::enabled
    This property can be used to activate or deactivate the sensor gesture.
    Default value is false;
    \sa {QtSensors5::SensorGesture::detected}, {detected}
*/
bool QSensor2Gesture::enabled() const
{
    return isEnabled;
}

void QSensor2Gesture::setEnabled(bool value)
{
    bool hasChanged = false;
    if (isEnabled != value) {
        isEnabled = value;
        hasChanged = true;
    }
    if (!initDone)
        return;

    if (sensorGesture) {
        if (value) {
            sensorGesture->startDetection();
        } else {
            sensorGesture->stopDetection();
        }
    }
    if (hasChanged)
        Q_EMIT enabledChanged();
}

/*!
    \qmlsignal QtSensors5::SensorGesture::detected(string gesture)
    This signal is emitted whenever a gesture is detected.
    The gesture parameter contains the gesture that was detected.
*/

/*
  private funtion implementation
*/
void QSensor2Gesture::deleteGesture()
{
    if (sensorGesture) {
        bool emitInvalidChange = !invalidGestures().isEmpty();
        bool emitValidChange = !validGestures().isEmpty();

        if (sensorGesture->isActive()) {
            sensorGesture->stopDetection();
        }
        delete sensorGesture;
        sensorGesture = 0;

        if (emitInvalidChange) {
            Q_EMIT invalidGesturesChanged();
        }
        if (emitValidChange) {
            Q_EMIT validGesturesChanged();
        }
    }
}

void QSensor2Gesture::createGesture()
{
    deleteGesture();
    sensorGesture = new QSensorGesture(gestureList, this);
    if (!validGestures().isEmpty()) {
        QObject::connect(sensorGesture
                         , SIGNAL(detected(QString))
                         , this
                         , SIGNAL(detected(QString)));
        Q_EMIT validGesturesChanged();
    }
    if (!invalidGestures().isEmpty())
        Q_EMIT invalidGesturesChanged();
}

/*
  End of private funtion implementation
*/

QT_END_NAMESPACE
