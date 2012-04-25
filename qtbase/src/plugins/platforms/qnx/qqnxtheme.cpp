/***************************************************************************
**
** Copyright (C) 2012 Research In Motion
** Contact: http://www.qt-project.org/
**
** This file is part of the plugins of the Qt Toolkit.
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

#include "qqnxtheme.h"

#include "qqnxfiledialoghelper.h"
#include "qqnxsystemsettings.h"

QT_BEGIN_NAMESPACE

QQnxTheme::QQnxTheme(QPlatformFontDatabase *fontDatabase,
                     QQnxBpsEventFilter *eventFilter)
    : m_fontDatabase(fontDatabase),
      m_eventFilter(eventFilter)
{
}

QQnxTheme::~QQnxTheme()
{
    qDeleteAll(m_fonts);
}

bool QQnxTheme::usePlatformNativeDialog(DialogType type) const
{
    if (type == QPlatformTheme::FileDialog)
        return true;
#if !defined(QT_NO_COLORDIALOG)
    if (type == QPlatformTheme::ColorDialog)
        return false;
#endif
#if !defined(QT_NO_FONTDIALOG)
    if (type == QPlatformTheme::FontDialog)
        return false;
#endif
    return false;
}

QPlatformDialogHelper *QQnxTheme::createPlatformDialogHelper(DialogType type) const
{
    switch (type) {
    case QPlatformTheme::FileDialog:
        return new QQnxFileDialogHelper(m_eventFilter);
#ifndef QT_NO_COLORDIALOG
    case QPlatformTheme::ColorDialog:
#endif
#ifndef QT_NO_FONTDIALOG
    case QPlatformTheme::FontDialog:
#endif
    default:
        return 0;
    }
}

const QFont *QQnxTheme::font(Font type) const
{
    if (m_fonts.isEmpty() && m_fontDatabase)
        m_fonts = qt_qnx_createRoleFonts(m_fontDatabase);
    return m_fonts.value(type, 0);
}

QT_END_NAMESPACE
