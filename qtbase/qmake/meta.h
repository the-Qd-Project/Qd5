/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the qmake application of the Qt Toolkit.
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

#ifndef META_H
#define META_H

#include "project.h"

#include <qhash.h>
#include <qstringlist.h>
#include <qstring.h>

QT_BEGIN_NAMESPACE

class QMakeProject;

class QMakeMetaInfo
{
    bool readLibtoolFile(const QString &f);
    bool readPkgCfgFile(const QString &f);
    QMakeProject *conf;
    ProValueMap vars;
    QString meta_type;
    static QHash<QString, ProValueMap> cache_vars;
    void clear();
public:
    QMakeMetaInfo(QMakeProject *_conf);

    bool readLib(QString lib);
    static QString findLib(QString lib);
    static bool libExists(QString lib);
    QString type() const;

    bool isEmpty(const ProKey &v);
    ProStringList &values(const ProKey &v);
    ProString first(const ProKey &v);
    ProValueMap &variables();
};

inline bool QMakeMetaInfo::isEmpty(const ProKey &v)
{ return !vars.contains(v) || vars[v].isEmpty(); }

inline QString QMakeMetaInfo::type() const
{ return meta_type; }

inline ProStringList &QMakeMetaInfo::values(const ProKey &v)
{ return vars[v]; }

inline ProString QMakeMetaInfo::first(const ProKey &v)
{
#if defined(Q_CC_SUN) && (__SUNPRO_CC == 0x500) || defined(Q_CC_HP)
    // workaround for Sun WorkShop 5.0 bug fixed in Forte 6
    if (isEmpty(v))
        return ProString("");
    else
        return vars[v].first();
#else
    return isEmpty(v) ? ProString("") : vars[v].first();
#endif
}

inline ProValueMap &QMakeMetaInfo::variables()
{ return vars; }

inline bool QMakeMetaInfo::libExists(QString lib)
{ return !findLib(lib).isNull(); }

QT_END_NAMESPACE

#endif // META_H
