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

#include <QStringList>

namespace NMakeFile {

class MacroTable;

struct Options
{
    Options();
    bool readCommandLineArguments(QStringList arguments, QString& makefile,
                                  QStringList& targets, MacroTable& macroTable);

    bool buildAllTargets;
    bool buildIfTimeStampsAreEqual;
    bool showLogo;
    bool suppressOutputMessages;
    bool overrideEnvVarMacros;
    bool displayIncludeFileNames;
    bool dryRun;
    bool stopOnErrors;
    bool buildUnrelatedTargetsOnError;
    bool checkTimeStampsButDoNotBuild;
    bool changeTimeStampsButDoNotBuild;
    bool ignorePredefinedRulesAndMacros;
    bool suppressExecutedCommandsDisplay;
    bool batchModeEnabled;
    bool dumpInlineFiles;
    int maxNumberOfJobs;
    bool dumpDependencyGraph;
    bool dumpDependencyGraphDot;
    bool displayMakeInformation;
    bool showUsageAndExit;
    QString fullAppPath;
    QString stderrFile; // TODO: do something with this

private:
    bool handleCommandLineOption(QString arg, QStringList& arguments, QString& makefile, QString& makeflags);
};

extern Options g_options;

} // namespace NMakeFile
