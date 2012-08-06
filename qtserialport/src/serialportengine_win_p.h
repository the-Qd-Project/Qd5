/****************************************************************************
**
** Copyright (C) 2012 Denis Shienkov <scapig@yandex.ru>
** Copyright (C) 2012 Laszlo Papp <lpapp@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtSerialPort module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef SERIALPORTENGINE_WIN_P_H
#define SERIALPORTENGINE_WIN_P_H

#include "serialport.h"
#include "serialportengine_p.h"

#include <qt_windows.h>
#if (QT_VERSION >= QT_VERSION_CHECK(5, 0, 0))
#include <QtCore/qwineventnotifier.h>
#else
#include "qt4support/qwineventnotifier_p.h"
#endif

QT_BEGIN_NAMESPACE_SERIALPORT

class WinSerialPortEngine : public QWinEventNotifier, public SerialPortEngine
{
    Q_OBJECT
public:
    WinSerialPortEngine(SerialPortPrivate *d);
    virtual ~WinSerialPortEngine();

    virtual bool open(const QString &location, QIODevice::OpenMode mode);
    virtual void close(const QString &location);

    virtual SerialPort::Lines lines() const;

    virtual bool setDtr(bool set);
    virtual bool setRts(bool set);

    virtual bool flush();
    virtual bool reset();

    virtual bool sendBreak(int duration);
    virtual bool setBreak(bool set);

    virtual qint64 bytesAvailable() const;
    virtual qint64 bytesToWrite() const;

    virtual qint64 read(char *data, qint64 len);
    virtual qint64 write(const char *data, qint64 len);
    virtual bool select(int timeout,
                        bool checkRead, bool checkWrite,
                        bool *selectForRead, bool *selectForWrite);

    virtual bool setRate(qint32 rate, SerialPort::Directions dir);
    virtual bool setDataBits(SerialPort::DataBits dataBits);
    virtual bool setParity(SerialPort::Parity parity);
    virtual bool setStopBits(SerialPort::StopBits stopBits);
    virtual bool setFlowControl(SerialPort::FlowControl flowControl);

    virtual bool setDataErrorPolicy(SerialPort::DataErrorPolicy policy);

    virtual bool isReadNotificationEnabled() const;
    virtual void setReadNotificationEnabled(bool enable);
    virtual bool isWriteNotificationEnabled() const;
    virtual void setWriteNotificationEnabled(bool enable);
    virtual bool isErrorNotificationEnabled() const;
    virtual void setErrorNotificationEnabled(bool enable);

    virtual bool processIOErrors();

protected:
    virtual void detectDefaultSettings();
    virtual SerialPort::PortError decodeSystemError() const;
    virtual bool event(QEvent *e);

private:
    bool createEvents(bool rx, bool tx);
    void closeEvents();

    bool isNotificationEnabled(DWORD mask) const;
    void setNotificationEnabled(bool enable, DWORD mask);

    bool updateDcb();
    bool updateCommTimeouts();

private:
    DCB m_currentDcb;
    DCB m_restoredDcb;
    COMMTIMEOUTS m_currentCommTimeouts;
    COMMTIMEOUTS m_restoredCommTimeouts;
    HANDLE m_descriptor;
    bool m_flagErrorFromCommEvent;
    DWORD m_currentMask;
    DWORD m_desiredMask;

    OVERLAPPED m_readOverlapped;
    OVERLAPPED m_writeOverlapped;
    OVERLAPPED m_selectOverlapped;
    OVERLAPPED m_notifyOverlapped;
};

QT_END_NAMESPACE_SERIALPORT

#endif // SERIALPORTENGINE_WIN_P_H
