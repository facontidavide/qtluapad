/********************************************************************************
** Form generated from reading UI file 'questcreator.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTCREATOR_H
#define UI_QUESTCREATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_QuestCreator
{
public:
    QGroupBox *XMLSetupGroup;
    QLabel *ItemIDLabel;
    QLabel *UIDLabel;
    QLabel *AIDLabel;
    QSpinBox *ItemIDSpin;
    QSpinBox *UIDSpin;
    QSpinBox *AIDSpin;
    QLabel *FileNameLabel;
    QLabel *SavePathLabel;
    QLineEdit *FileNameEdit;
    QLineEdit *SavePathEdit;
    QPushButton *BrowsePathButton;
    QLabel *AssignMethodLabel;
    QComboBox *AssignMethodCombo;
    QGroupBox *QuestSetupGroup;
    QLabel *StorageKeyLabel;
    QLabel *SuccessMessageLabel;
    QLabel *FailureMessageLabel;
    QCheckBox *ItemsInContainer;
    QLabel *ContainerIDLabel;
    QLineEdit *ContainerIDEdit;
    QGroupBox *ItemsListGroup;
    QTreeWidget *ItemsList;
    QPushButton *ItemsClearList;
    QPushButton *ItemsRemoveItem;
    QPushButton *ItemsAddItem;
    QLineEdit *ItemsAddIDEdit;
    QLabel *ItemsAddID;
    QLabel *ItemsAddCount;
    QLineEdit *ItemsAddCountEdit;
    QLineEdit *StorageKeyEdit;
    QLineEdit *SuccessMessageEdit;
    QLineEdit *FailureMessageEdit;
    QPushButton *SaveQuestButton;
    QPushButton *CloseWindowButton;

    void setupUi(QDialog *QuestCreator)
    {
        if (QuestCreator->objectName().isEmpty())
            QuestCreator->setObjectName(QStringLiteral("QuestCreator"));
        QuestCreator->resize(521, 480);
        XMLSetupGroup = new QGroupBox(QuestCreator);
        XMLSetupGroup->setObjectName(QStringLiteral("XMLSetupGroup"));
        XMLSetupGroup->setGeometry(QRect(10, 5, 501, 111));
        ItemIDLabel = new QLabel(XMLSetupGroup);
        ItemIDLabel->setObjectName(QStringLiteral("ItemIDLabel"));
        ItemIDLabel->setGeometry(QRect(10, 22, 61, 16));
        UIDLabel = new QLabel(XMLSetupGroup);
        UIDLabel->setObjectName(QStringLiteral("UIDLabel"));
        UIDLabel->setGeometry(QRect(10, 52, 61, 16));
        AIDLabel = new QLabel(XMLSetupGroup);
        AIDLabel->setObjectName(QStringLiteral("AIDLabel"));
        AIDLabel->setGeometry(QRect(10, 82, 61, 16));
        ItemIDSpin = new QSpinBox(XMLSetupGroup);
        ItemIDSpin->setObjectName(QStringLiteral("ItemIDSpin"));
        ItemIDSpin->setGeometry(QRect(80, 20, 101, 22));
        ItemIDSpin->setMinimum(100);
        ItemIDSpin->setMaximum(13000);
        UIDSpin = new QSpinBox(XMLSetupGroup);
        UIDSpin->setObjectName(QStringLiteral("UIDSpin"));
        UIDSpin->setGeometry(QRect(80, 50, 101, 22));
        UIDSpin->setMinimum(1000);
        UIDSpin->setMaximum(65535);
        AIDSpin = new QSpinBox(XMLSetupGroup);
        AIDSpin->setObjectName(QStringLiteral("AIDSpin"));
        AIDSpin->setGeometry(QRect(80, 80, 101, 22));
        AIDSpin->setMinimum(100);
        AIDSpin->setMaximum(65535);
        FileNameLabel = new QLabel(XMLSetupGroup);
        FileNameLabel->setObjectName(QStringLiteral("FileNameLabel"));
        FileNameLabel->setGeometry(QRect(200, 22, 81, 16));
        SavePathLabel = new QLabel(XMLSetupGroup);
        SavePathLabel->setObjectName(QStringLiteral("SavePathLabel"));
        SavePathLabel->setGeometry(QRect(200, 52, 81, 16));
        FileNameEdit = new QLineEdit(XMLSetupGroup);
        FileNameEdit->setObjectName(QStringLiteral("FileNameEdit"));
        FileNameEdit->setGeometry(QRect(290, 20, 201, 20));
        SavePathEdit = new QLineEdit(XMLSetupGroup);
        SavePathEdit->setObjectName(QStringLiteral("SavePathEdit"));
        SavePathEdit->setEnabled(false);
        SavePathEdit->setGeometry(QRect(290, 50, 121, 20));
        BrowsePathButton = new QPushButton(XMLSetupGroup);
        BrowsePathButton->setObjectName(QStringLiteral("BrowsePathButton"));
        BrowsePathButton->setGeometry(QRect(420, 48, 75, 23));
        AssignMethodLabel = new QLabel(XMLSetupGroup);
        AssignMethodLabel->setObjectName(QStringLiteral("AssignMethodLabel"));
        AssignMethodLabel->setGeometry(QRect(200, 82, 111, 16));
        AssignMethodCombo = new QComboBox(XMLSetupGroup);
        AssignMethodCombo->setObjectName(QStringLiteral("AssignMethodCombo"));
        AssignMethodCombo->setGeometry(QRect(300, 80, 191, 22));
        QuestSetupGroup = new QGroupBox(QuestCreator);
        QuestSetupGroup->setObjectName(QStringLiteral("QuestSetupGroup"));
        QuestSetupGroup->setGeometry(QRect(10, 120, 501, 291));
        StorageKeyLabel = new QLabel(QuestSetupGroup);
        StorageKeyLabel->setObjectName(QStringLiteral("StorageKeyLabel"));
        StorageKeyLabel->setGeometry(QRect(10, 20, 121, 16));
        SuccessMessageLabel = new QLabel(QuestSetupGroup);
        SuccessMessageLabel->setObjectName(QStringLiteral("SuccessMessageLabel"));
        SuccessMessageLabel->setGeometry(QRect(10, 50, 121, 16));
        FailureMessageLabel = new QLabel(QuestSetupGroup);
        FailureMessageLabel->setObjectName(QStringLiteral("FailureMessageLabel"));
        FailureMessageLabel->setGeometry(QRect(10, 80, 121, 16));
        ItemsInContainer = new QCheckBox(QuestSetupGroup);
        ItemsInContainer->setObjectName(QStringLiteral("ItemsInContainer"));
        ItemsInContainer->setGeometry(QRect(10, 112, 131, 18));
        ContainerIDLabel = new QLabel(QuestSetupGroup);
        ContainerIDLabel->setObjectName(QStringLiteral("ContainerIDLabel"));
        ContainerIDLabel->setGeometry(QRect(170, 110, 81, 16));
        ContainerIDEdit = new QLineEdit(QuestSetupGroup);
        ContainerIDEdit->setObjectName(QStringLiteral("ContainerIDEdit"));
        ContainerIDEdit->setEnabled(false);
        ContainerIDEdit->setGeometry(QRect(260, 110, 231, 20));
        ItemsListGroup = new QGroupBox(QuestSetupGroup);
        ItemsListGroup->setObjectName(QStringLiteral("ItemsListGroup"));
        ItemsListGroup->setGeometry(QRect(10, 140, 481, 141));
        ItemsList = new QTreeWidget(ItemsListGroup);
        ItemsList->setObjectName(QStringLiteral("ItemsList"));
        ItemsList->setGeometry(QRect(10, 20, 251, 111));
        ItemsClearList = new QPushButton(ItemsListGroup);
        ItemsClearList->setObjectName(QStringLiteral("ItemsClearList"));
        ItemsClearList->setGeometry(QRect(270, 110, 201, 23));
        ItemsRemoveItem = new QPushButton(ItemsListGroup);
        ItemsRemoveItem->setObjectName(QStringLiteral("ItemsRemoveItem"));
        ItemsRemoveItem->setGeometry(QRect(270, 80, 201, 23));
        ItemsAddItem = new QPushButton(ItemsListGroup);
        ItemsAddItem->setObjectName(QStringLiteral("ItemsAddItem"));
        ItemsAddItem->setGeometry(QRect(270, 50, 201, 23));
        ItemsAddIDEdit = new QLineEdit(ItemsListGroup);
        ItemsAddIDEdit->setObjectName(QStringLiteral("ItemsAddIDEdit"));
        ItemsAddIDEdit->setGeometry(QRect(290, 20, 61, 20));
        ItemsAddID = new QLabel(ItemsListGroup);
        ItemsAddID->setObjectName(QStringLiteral("ItemsAddID"));
        ItemsAddID->setGeometry(QRect(270, 22, 21, 16));
        ItemsAddCount = new QLabel(ItemsListGroup);
        ItemsAddCount->setObjectName(QStringLiteral("ItemsAddCount"));
        ItemsAddCount->setGeometry(QRect(360, 22, 41, 16));
        ItemsAddCountEdit = new QLineEdit(ItemsListGroup);
        ItemsAddCountEdit->setObjectName(QStringLiteral("ItemsAddCountEdit"));
        ItemsAddCountEdit->setGeometry(QRect(400, 20, 71, 20));
        StorageKeyEdit = new QLineEdit(QuestSetupGroup);
        StorageKeyEdit->setObjectName(QStringLiteral("StorageKeyEdit"));
        StorageKeyEdit->setGeometry(QRect(150, 20, 341, 20));
        SuccessMessageEdit = new QLineEdit(QuestSetupGroup);
        SuccessMessageEdit->setObjectName(QStringLiteral("SuccessMessageEdit"));
        SuccessMessageEdit->setGeometry(QRect(150, 50, 341, 20));
        FailureMessageEdit = new QLineEdit(QuestSetupGroup);
        FailureMessageEdit->setObjectName(QStringLiteral("FailureMessageEdit"));
        FailureMessageEdit->setGeometry(QRect(150, 80, 341, 20));
        SaveQuestButton = new QPushButton(QuestCreator);
        SaveQuestButton->setObjectName(QStringLiteral("SaveQuestButton"));
        SaveQuestButton->setGeometry(QRect(10, 420, 501, 23));
        CloseWindowButton = new QPushButton(QuestCreator);
        CloseWindowButton->setObjectName(QStringLiteral("CloseWindowButton"));
        CloseWindowButton->setGeometry(QRect(10, 450, 501, 23));

        retranslateUi(QuestCreator);

        QMetaObject::connectSlotsByName(QuestCreator);
    } // setupUi

    void retranslateUi(QDialog *QuestCreator)
    {
        QuestCreator->setWindowTitle(QApplication::translate("QuestCreator", "Quest Creator", 0));
        XMLSetupGroup->setTitle(QApplication::translate("QuestCreator", "XML Setup", 0));
        ItemIDLabel->setText(QApplication::translate("QuestCreator", "Item ID:", 0));
        UIDLabel->setText(QApplication::translate("QuestCreator", "Unique ID:", 0));
        AIDLabel->setText(QApplication::translate("QuestCreator", "Action ID:", 0));
        FileNameLabel->setText(QApplication::translate("QuestCreator", "File name:", 0));
        SavePathLabel->setText(QApplication::translate("QuestCreator", "Save path:", 0));
        BrowsePathButton->setText(QApplication::translate("QuestCreator", "Browse...", 0));
        AssignMethodLabel->setText(QApplication::translate("QuestCreator", "Assign method:", 0));
        AssignMethodCombo->clear();
        AssignMethodCombo->insertItems(0, QStringList()
         << QApplication::translate("QuestCreator", "Item ID", 0)
         << QApplication::translate("QuestCreator", "Action ID", 0)
         << QApplication::translate("QuestCreator", "Unique ID", 0)
        );
        QuestSetupGroup->setTitle(QApplication::translate("QuestCreator", "Quest Setup", 0));
        StorageKeyLabel->setText(QApplication::translate("QuestCreator", "Storage key:", 0));
        SuccessMessageLabel->setText(QApplication::translate("QuestCreator", "Message on success:", 0));
        FailureMessageLabel->setText(QApplication::translate("QuestCreator", "Message on failure:", 0));
        ItemsInContainer->setText(QApplication::translate("QuestCreator", "Items in container?", 0));
        ContainerIDLabel->setText(QApplication::translate("QuestCreator", "Container ID:", 0));
        ContainerIDEdit->setText(QApplication::translate("QuestCreator", "1988", 0));
        ItemsListGroup->setTitle(QApplication::translate("QuestCreator", "Items", 0));
        QTreeWidgetItem *___qtreewidgetitem = ItemsList->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("QuestCreator", "Count", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("QuestCreator", "ID", 0));
        ItemsClearList->setText(QApplication::translate("QuestCreator", "Clear List", 0));
        ItemsRemoveItem->setText(QApplication::translate("QuestCreator", "Remove Item", 0));
        ItemsAddItem->setText(QApplication::translate("QuestCreator", "Add Item", 0));
        ItemsAddID->setText(QApplication::translate("QuestCreator", "ID:", 0));
        ItemsAddCount->setText(QApplication::translate("QuestCreator", "Count:", 0));
        StorageKeyEdit->setText(QApplication::translate("QuestCreator", "1000", 0));
        SuccessMessageEdit->setText(QApplication::translate("QuestCreator", "You have found a secret reward.", 0));
        FailureMessageEdit->setText(QApplication::translate("QuestCreator", "It is empty.", 0));
        SaveQuestButton->setText(QApplication::translate("QuestCreator", "Save Quest", 0));
        CloseWindowButton->setText(QApplication::translate("QuestCreator", "Close Window", 0));
    } // retranslateUi

};

namespace Ui {
    class QuestCreator: public Ui_QuestCreator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTCREATOR_H
