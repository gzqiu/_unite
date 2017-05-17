/********************************************************************************
** Form generated from reading UI file 'kvs.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KVS_H
#define UI_KVS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kvs
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *kvs)
    {
        if (kvs->objectName().isEmpty())
            kvs->setObjectName(QStringLiteral("kvs"));
        kvs->resize(400, 300);
        menuBar = new QMenuBar(kvs);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        kvs->setMenuBar(menuBar);
        mainToolBar = new QToolBar(kvs);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        kvs->addToolBar(mainToolBar);
        centralWidget = new QWidget(kvs);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        kvs->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(kvs);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        kvs->setStatusBar(statusBar);

        retranslateUi(kvs);

        QMetaObject::connectSlotsByName(kvs);
    } // setupUi

    void retranslateUi(QMainWindow *kvs)
    {
        kvs->setWindowTitle(QApplication::translate("kvs", "kvs", 0));
    } // retranslateUi

};

namespace Ui {
    class kvs: public Ui_kvs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KVS_H
