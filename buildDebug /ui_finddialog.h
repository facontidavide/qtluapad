/********************************************************************************
** Form generated from reading UI file 'finddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_FindDialog
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLabel *label;
    QRadioButton *rdUp;
    QCheckBox *cbWholeWords;
    QFrame *line;
    QLineEdit *txtFind;
    QRadioButton *rdDown;
    QCheckBox *cbCaseSensitive;
    QPushButton *findNext;
    QGroupBox *groupBox_2;
    QPushButton *replaceAll;
    QPushButton *goReplace;
    QLabel *label_2;
    QLineEdit *txtReplaceWith;
    QLabel *label_3;
    QLineEdit *txtReplace;

    void setupUi(QDialog *FindDialog)
    {
        if (FindDialog->objectName().isEmpty())
            FindDialog->setObjectName(QStringLiteral("FindDialog"));
        FindDialog->setWindowModality(Qt::WindowModal);
        FindDialog->resize(450, 206);
        groupBox = new QGroupBox(FindDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(8, 5, 441, 101));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 60, 111, 23));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 23, 81, 16));
        rdUp = new QRadioButton(groupBox);
        rdUp->setObjectName(QStringLiteral("rdUp"));
        rdUp->setGeometry(QRect(10, 73, 121, 17));
        cbWholeWords = new QCheckBox(groupBox);
        cbWholeWords->setObjectName(QStringLiteral("cbWholeWords"));
        cbWholeWords->setGeometry(QRect(190, 71, 141, 17));
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(160, 45, 41, 51));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        txtFind = new QLineEdit(groupBox);
        txtFind->setObjectName(QStringLiteral("txtFind"));
        txtFind->setGeometry(QRect(90, 20, 211, 20));
        rdDown = new QRadioButton(groupBox);
        rdDown->setObjectName(QStringLiteral("rdDown"));
        rdDown->setGeometry(QRect(10, 52, 131, 17));
        cbCaseSensitive = new QCheckBox(groupBox);
        cbCaseSensitive->setObjectName(QStringLiteral("cbCaseSensitive"));
        cbCaseSensitive->setGeometry(QRect(190, 50, 141, 17));
        findNext = new QPushButton(groupBox);
        findNext->setObjectName(QStringLiteral("findNext"));
        findNext->setGeometry(QRect(320, 30, 111, 23));
        groupBox_2 = new QGroupBox(FindDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(8, 120, 358, 80));
        groupBox_2->setCheckable(true);
        replaceAll = new QPushButton(groupBox_2);
        replaceAll->setObjectName(QStringLiteral("replaceAll"));
        replaceAll->setEnabled(false);
        replaceAll->setGeometry(QRect(280, 50, 71, 23));
        goReplace = new QPushButton(groupBox_2);
        goReplace->setObjectName(QStringLiteral("goReplace"));
        goReplace->setEnabled(false);
        goReplace->setGeometry(QRect(210, 50, 60, 23));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(10, 50, 32, 16));
        txtReplaceWith = new QLineEdit(groupBox_2);
        txtReplaceWith->setObjectName(QStringLiteral("txtReplaceWith"));
        txtReplaceWith->setEnabled(false);
        txtReplaceWith->setGeometry(QRect(40, 50, 161, 20));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(false);
        label_3->setGeometry(QRect(10, 20, 46, 13));
        txtReplace = new QLineEdit(groupBox_2);
        txtReplace->setObjectName(QStringLiteral("txtReplace"));
        txtReplace->setEnabled(false);
        txtReplace->setGeometry(QRect(59, 18, 291, 20));

        retranslateUi(FindDialog);

        QMetaObject::connectSlotsByName(FindDialog);
    } // setupUi

    void retranslateUi(QDialog *FindDialog)
    {
        FindDialog->setWindowTitle(QApplication::translate("FindDialog", "Find Text", 0));
        groupBox->setTitle(QApplication::translate("FindDialog", "Text Search", 0));
        pushButton->setText(QApplication::translate("FindDialog", "Cancel", 0));
        label->setText(QApplication::translate("FindDialog", "Text to Find:", 0));
        rdUp->setText(QApplication::translate("FindDialog", "Search Up", 0));
        cbWholeWords->setText(QApplication::translate("FindDialog", "Whole Words", 0));
        rdDown->setText(QApplication::translate("FindDialog", "Search Down", 0));
        cbCaseSensitive->setText(QApplication::translate("FindDialog", "Case Sensitive", 0));
        findNext->setText(QApplication::translate("FindDialog", "Find Next", 0));
        groupBox_2->setTitle(QApplication::translate("FindDialog", "Search && Replace", 0));
        replaceAll->setText(QApplication::translate("FindDialog", "Replace All", 0));
        goReplace->setText(QApplication::translate("FindDialog", "Replace", 0));
        label_2->setText(QApplication::translate("FindDialog", "With:", 0));
        label_3->setText(QApplication::translate("FindDialog", "Replace:", 0));
    } // retranslateUi

};

namespace Ui {
    class FindDialog: public Ui_FindDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDIALOG_H
