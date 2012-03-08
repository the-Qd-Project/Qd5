/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the QtQml module of the Qt Toolkit.
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

#ifndef QQMLBINDING_P_H
#define QQMLBINDING_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include "qqml.h"
#include "qqmlpropertyvaluesource.h"
#include "qqmlexpression.h"
#include "qqmlproperty.h"
#include "qqmlproperty_p.h"

#include <QtCore/QObject>
#include <QtCore/QMetaProperty>

#include <private/qpointervaluepair_p.h>
#include <private/qqmlabstractbinding_p.h>

QT_BEGIN_NAMESPACE

class QQmlContext;
class QQmlBindingPrivate;
class Q_QML_PRIVATE_EXPORT QQmlBinding : public QQmlExpression, public QQmlAbstractBinding
{
Q_OBJECT
public:
    enum EvaluateFlag { None = 0x00, RequiresThisObject = 0x01 };
    Q_DECLARE_FLAGS(EvaluateFlags, EvaluateFlag)

    QQmlBinding(const QString &, QObject *, QQmlContext *, QObject *parent=0);
    QQmlBinding(const QString &, QObject *, QQmlContextData *, QObject *parent=0);
    QQmlBinding(const QString &, bool isRewritten, QObject *, QQmlContextData *, 
                        const QString &url, int lineNumber, int columnNumber = 0, QObject *parent=0);
    QQmlBinding(void *, QObject *, QQmlContextData *, QObject *parent=0);

    void setTarget(const QQmlProperty &);
    void setTarget(QObject *, const QQmlPropertyData &, QQmlContextData *);
    QQmlProperty property() const;

    void setEvaluateFlags(EvaluateFlags flags);
    EvaluateFlags evaluateFlags() const;

    bool enabled() const;

    // Inherited from  QQmlAbstractBinding
    virtual void setEnabled(bool, QQmlPropertyPrivate::WriteFlags flags);
    virtual void update(QQmlPropertyPrivate::WriteFlags flags);
    virtual QString expression() const;
    virtual int propertyIndex() const;
    virtual QObject *object() const;
    virtual void retargetBinding(QObject *, int);

    typedef int Identifier;
    static Identifier Invalid;
    static QQmlBinding *createBinding(Identifier, QObject *, QQmlContext *,
                                              const QString &, int, QObject *parent=0);


public Q_SLOTS:
    void update() { update(QQmlPropertyPrivate::DontRemoveBinding); }

protected:
    ~QQmlBinding();

private:
    Q_DECLARE_PRIVATE(QQmlBinding)
};

Q_DECLARE_OPERATORS_FOR_FLAGS(QQmlBinding::EvaluateFlags)

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QQmlBinding*)

#endif // QQMLBINDING_P_H
