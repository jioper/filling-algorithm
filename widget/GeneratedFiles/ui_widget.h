/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

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

class Ui_widgetClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *widgetClass)
    {
        if (widgetClass->objectName().isEmpty())
            widgetClass->setObjectName(QStringLiteral("widgetClass"));
        widgetClass->resize(600, 400);
        menuBar = new QMenuBar(widgetClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        widgetClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(widgetClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        widgetClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(widgetClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widgetClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(widgetClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        widgetClass->setStatusBar(statusBar);

        retranslateUi(widgetClass);

        QMetaObject::connectSlotsByName(widgetClass);
    } // setupUi

    void retranslateUi(QMainWindow *widgetClass)
    {
        widgetClass->setWindowTitle(QApplication::translate("widgetClass", "widget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class widgetClass: public Ui_widgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
