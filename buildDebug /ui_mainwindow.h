/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionPrint;
    QAction *actionClose;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete_Line;
    QAction *actionDelete_Selected;
    QAction *actionSelect_All;
    QAction *actionFind;
    QAction *actionGoto_Line;
    QAction *actionDebuger;
    QAction *actionOptions;
    QAction *actionQuest_Creator;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuDelete;
    QMenu *menuTools;
    QMenu *menuOpen_Tibia_Tools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(543, 426);
        QIcon icon;
        icon.addFile(QStringLiteral(":/winicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/disk.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/diskall.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon4);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/printer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon5);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon6);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon7);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon8);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon9);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon10);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon11);
        actionDelete_Line = new QAction(MainWindow);
        actionDelete_Line->setObjectName(QStringLiteral("actionDelete_Line"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_Line->setIcon(icon12);
        actionDelete_Selected = new QAction(MainWindow);
        actionDelete_Selected->setObjectName(QStringLiteral("actionDelete_Selected"));
        actionDelete_Selected->setIcon(icon12);
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QStringLiteral("actionSelect_All"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/doc.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_All->setIcon(icon13);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QStringLiteral("actionFind"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon14);
        actionGoto_Line = new QAction(MainWindow);
        actionGoto_Line->setObjectName(QStringLiteral("actionGoto_Line"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGoto_Line->setIcon(icon15);
        actionDebuger = new QAction(MainWindow);
        actionDebuger->setObjectName(QStringLiteral("actionDebuger"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/warning2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDebuger->setIcon(icon16);
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/cog.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionOptions->setIcon(icon17);
        actionQuest_Creator = new QAction(MainWindow);
        actionQuest_Creator->setObjectName(QStringLiteral("actionQuest_Creator"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/font_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuest_Creator->setIcon(icon18);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 543, 27));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuDelete = new QMenu(menuEdit);
        menuDelete->setObjectName(QStringLiteral("menuDelete"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuOpen_Tibia_Tools = new QMenu(menuTools);
        menuOpen_Tibia_Tools->setObjectName(QStringLiteral("menuOpen_Tibia_Tools"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(menuDelete->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All);
        menuEdit->addSeparator();
        menuEdit->addAction(actionFind);
        menuEdit->addAction(actionGoto_Line);
        menuDelete->addAction(actionDelete_Line);
        menuDelete->addAction(actionDelete_Selected);
        menuTools->addAction(actionDebuger);
        menuTools->addAction(menuOpen_Tibia_Tools->menuAction());
        menuTools->addAction(actionOptions);
        menuOpen_Tibia_Tools->addAction(actionQuest_Creator);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0));
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As...", 0));
        actionPrint->setText(QApplication::translate("MainWindow", "Print", 0));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0));
        actionClose->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0));
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0));
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0));
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0));
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0));
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        actionDelete_Line->setText(QApplication::translate("MainWindow", "Delete Line", 0));
        actionDelete_Selected->setText(QApplication::translate("MainWindow", "Delete Selected", 0));
        actionDelete_Selected->setShortcut(QApplication::translate("MainWindow", "Ctrl+Del", 0));
        actionSelect_All->setText(QApplication::translate("MainWindow", "Select All", 0));
        actionSelect_All->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        actionFind->setText(QApplication::translate("MainWindow", "Find", 0));
        actionFind->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0));
        actionGoto_Line->setText(QApplication::translate("MainWindow", "Goto Line", 0));
#ifndef QT_NO_TOOLTIP
        actionGoto_Line->setToolTip(QApplication::translate("MainWindow", "Goto Line", 0));
#endif // QT_NO_TOOLTIP
        actionGoto_Line->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", 0));
        actionDebuger->setText(QApplication::translate("MainWindow", "Debuger", 0));
        actionDebuger->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0));
        actionOptions->setText(QApplication::translate("MainWindow", "Options", 0));
        actionOptions->setShortcut(QApplication::translate("MainWindow", "Shift+O", 0));
        actionQuest_Creator->setText(QApplication::translate("MainWindow", "Quest Creator", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuDelete->setTitle(QApplication::translate("MainWindow", "Delete", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0));
        menuOpen_Tibia_Tools->setTitle(QApplication::translate("MainWindow", "Open Tibia Tools", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
