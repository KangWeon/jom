/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of jom.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
****************************************************************************/

#ifndef JOBCLIENT_H
#define JOBCLIENT_H

#include "processenvironment.h"
#include <QObject>

QT_BEGIN_NAMESPACE
class QSystemSemaphore;
class QThread;
QT_END_NAMESPACE

namespace NMakeFile {

class JobClientAcquireHelper;

class JobClient : public QObject
{
    Q_OBJECT
public:
    explicit JobClient(ProcessEnvironment *environment, QObject *parent = 0);
    ~JobClient();

    bool start();
    void asyncAcquire();
    bool isAcquiring() const;
    void release();
    QString errorString() const;

signals:
    void startAcquisition();
    void acquired();

private slots:
    void onHelperAcquired();

private:
    void setError(const QString &errorMessage);

    ProcessEnvironment *m_environment;
    QString m_errorString;
    QSystemSemaphore *m_semaphore;
    QThread *m_acquireThread;
    JobClientAcquireHelper *m_acquireHelper;
    bool m_isAcquiring;
};

} // namespace NMakeFile

#endif // JOBCLIENT_H
