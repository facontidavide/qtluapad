/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Options
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QRadioButton *rdTabbedView;
    QRadioButton *rdWindowedView;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_2;
    QLineEdit *programmer;
    QCheckBox *cbWrap;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *label_3;
    QSpinBox *spinTab;
    QFrame *line_5;
    QCheckBox *cbBraceMatch;
    QFrame *line_6;
    QCheckBox *cbCodeFolding;
    QFrame *line_7;
    QLabel *label_4;
    QComboBox *comboStyle;
    QLabel *label_5;
    QLineEdit *funcFile;
    QToolButton *browseBtn;
    QCheckBox *cbAutoComplete;

    void setupUi(QDialog *Options)
    {
        if (Options->objectName().isEmpty())
            Options->setObjectName(QStringLiteral("Options"));
        Options->resize(468, 214);
        QIcon icon;
        icon.addFile(QStringLiteral(":/winicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Options->setWindowIcon(icon);
        pushButton = new QPushButton(Options);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 180, 75, 23));
        pushButton_2 = new QPushButton(Options);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 180, 75, 23));
        label = new QLabel(Options);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(8, 62, 101, 16));
        rdTabbedView = new QRadioButton(Options);
        rdTabbedView->setObjectName(QStringLiteral("rdTabbedView"));
        rdTabbedView->setGeometry(QRect(120, 50, 131, 17));
        rdWindowedView = new QRadioButton(Options);
        rdWindowedView->setObjectName(QStringLiteral("rdWindowedView"));
        rdWindowedView->setGeometry(QRect(120, 70, 131, 17));
        line = new QFrame(Options);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(40, 98, 211, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Options);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(40, 42, 211, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(Options);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(8, 12, 81, 16));
        programmer = new QLineEdit(Options);
        programmer->setObjectName(QStringLiteral("programmer"));
        programmer->setGeometry(QRect(100, 10, 151, 20));
        cbWrap = new QCheckBox(Options);
        cbWrap->setObjectName(QStringLiteral("cbWrap"));
        cbWrap->setGeometry(QRect(10, 112, 221, 20));
        line_3 = new QFrame(Options);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(40, 142, 211, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(Options);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(261, 12, 16, 161));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(Options);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 153, 61, 16));
        spinTab = new QSpinBox(Options);
        spinTab->setObjectName(QStringLiteral("spinTab"));
        spinTab->setGeometry(QRect(100, 150, 42, 22));
        spinTab->setMaximum(20);
        line_5 = new QFrame(Options);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(282, 80, 118, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        cbBraceMatch = new QCheckBox(Options);
        cbBraceMatch->setObjectName(QStringLiteral("cbBraceMatch"));
        cbBraceMatch->setGeometry(QRect(282, 90, 181, 17));
        line_6 = new QFrame(Options);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(285, 113, 118, 3));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        cbCodeFolding = new QCheckBox(Options);
        cbCodeFolding->setObjectName(QStringLiteral("cbCodeFolding"));
        cbCodeFolding->setGeometry(QRect(282, 123, 161, 17));
        line_7 = new QFrame(Options);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(282, 150, 118, 3));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(Options);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(295, 160, 131, 16));
        comboStyle = new QComboBox(Options);
        comboStyle->setObjectName(QStringLiteral("comboStyle"));
        comboStyle->setGeometry(QRect(284, 180, 121, 22));
        label_5 = new QLabel(Options);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(280, 30, 91, 16));
        funcFile = new QLineEdit(Options);
        funcFile->setObjectName(QStringLiteral("funcFile"));
        funcFile->setGeometry(QRect(280, 50, 141, 20));
        browseBtn = new QToolButton(Options);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));
        browseBtn->setGeometry(QRect(430, 50, 25, 19));
        cbAutoComplete = new QCheckBox(Options);
        cbAutoComplete->setObjectName(QStringLiteral("cbAutoComplete"));
        cbAutoComplete->setGeometry(QRect(280, 10, 191, 17));

        retranslateUi(Options);

        QMetaObject::connectSlotsByName(Options);
    } // setupUi

    void retranslateUi(QDialog *Options)
    {
        Options->setWindowTitle(QApplication::translate("Options", "Options", 0));
        pushButton->setText(QApplication::translate("Options", "Okay", 0));
        pushButton_2->setText(QApplication::translate("Options", "Cancel", 0));
        label->setText(QApplication::translate("Options", "MDI View Type:", 0));
        rdTabbedView->setText(QApplication::translate("Options", "Tabbed View", 0));
        rdWindowedView->setText(QApplication::translate("Options", "Windowed View", 0));
        label_2->setText(QApplication::translate("Options", "Programmer:", 0));
        cbWrap->setText(QApplication::translate("Options", "Enable Word-Wrap Code", 0));
        label_3->setText(QApplication::translate("Options", "Tab Width:", 0));
        cbBraceMatch->setText(QApplication::translate("Options", "Enable Brace Match", 0));
        cbCodeFolding->setText(QApplication::translate("Options", "Enable Code Folding", 0));
        label_4->setText(QApplication::translate("Options", "Application Style:", 0));
        comboStyle->clear();
        comboStyle->insertItems(0, QStringList()
         << QApplication::translate("Options", "Windows", 0)
         << QApplication::translate("Options", "WindowsXP", 0)
         << QApplication::translate("Options", "WindowsVista", 0)
         << QApplication::translate("Options", "Plastique", 0)
         << QApplication::translate("Options", "Cleanlooks", 0)
         << QApplication::translate("Options", "Motif", 0)
        );
        label_5->setText(QApplication::translate("Options", "Functions File:", 0));
        browseBtn->setText(QApplication::translate("Options", "...", 0));
        cbAutoComplete->setText(QApplication::translate("Options", "Enable Auto-Completion", 0));
    } // retranslateUi

};

namespace Ui {
    class Options: public Ui_Options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
