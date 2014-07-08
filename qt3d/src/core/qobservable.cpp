/****************************************************************************
**
** Copyright (C) 2014 Klaralvdalens Datakonsult AB (KDAB).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt3D module of the Qt Toolkit.
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

#include "qobservable.h"
#include <Qt3DCore/qobserverinterface.h>
#include <private/qobservable_p.h>

QT_BEGIN_NAMESPACE

namespace Qt3D {

QObservablePrivate::QObservablePrivate(QObservable *qq)
    : q_ptr(qq)
    , m_lock(QReadWriteLock::NonRecursive)
{
}

QObservable::QObservable()
    : d_ptr(new QObservablePrivate(this))
{
}

QObservable::QObservable(QObservablePrivate &dd)
    : d_ptr(&dd)
{
}

void QObservable::registerObserver(QObserverInterface *observer)
{
    Q_D(QObservable);
    QWriteLocker locker(&d->m_lock);
    if (!d->m_observers.contains(observer))
        d->m_observers.append(observer);
}

void QObservable::unregisterObserver(QObserverInterface *observer)
{
    Q_D(QObservable);
    QWriteLocker locker(&d->m_lock);
    d->m_observers.removeOne(observer);
}

// This calls sceneChangeEvent on the QChangeArbiter
void QObservable::notifyObservers(const QSceneChangePtr &e)
{
    Q_D(QObservable);
    QReadLocker locker(&d->m_lock);
    Q_FOREACH (QObserverInterface *observer, d->m_observers)
        observer->sceneChangeEvent(e);
}

const QList<QObserverInterface *> &QObservable::observers() const
{
    Q_D(const QObservable);
    return d->m_observers;
}

} // namespace Qt3D

QT_END_NAMESPACE
