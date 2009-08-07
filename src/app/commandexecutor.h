/****************************************************************************
 **
 ** Copyright (C) 2008 Nokia Corporation and/or its subsidiary(-ies).
 ** Contact: Nokia Corporation (qt-info@nokia.com)
 **
 ** This file is part of the jom project on Trolltech Labs.
 **
 ** This file may be used under the terms of the GNU General Public
 ** License version 2.0 or 3.0 as published by the Free Software Foundation
 ** and appearing in the file LICENSE.GPL included in the packaging of
 ** this file.  Please review the following information to ensure GNU
 ** General Public Licensing requirements will be met:
 ** http://www.fsf.org/licensing/licenses/info/GPLv2.html and
 ** http://www.gnu.org/copyleft/gpl.html.
 **
 ** If you are unsure which license is appropriate for your use, please
 ** contact the sales department at qt-sales@nokia.com.
 **
 ** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 ** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 **
 ****************************************************************************/
#pragma once 

#include "makefile.h"
#include <QProcess>

class QFile;

namespace NMakeFile {

class CommandExecutor : public QObject
{
    Q_OBJECT
public:
    CommandExecutor(QObject* parent, const QStringList& environment);
    ~CommandExecutor();

    void start(DescriptionBlock* target);
    DescriptionBlock* target() { return m_pTarget; }
    void waitForFinished();
    void cleanupTempFiles();

signals:
    void started(CommandExecutor*);
    void finished(CommandExecutor* process, bool abortMakeProcess);

private slots:
    void processReadyReadStandardError();
    void processReadyReadStandardOutput();
    void onProcessError(QProcess::ProcessError error);
    void onProcessFinished(int exitCode, QProcess::ExitStatus exitStatus);

private:
    bool executeNextCommand();
    void createTempFiles();

private:
    static QString      m_tempPath;
    QProcess            m_process;
    DescriptionBlock*   m_pTarget;
    int                 m_nCommandIdx;
    Command*            m_pLastCommand;

    struct TempFile
    {
        QFile* file;
        bool   keep;
    };

    QList<TempFile>     m_tempFiles;
};

} // namespace NMakeFile
