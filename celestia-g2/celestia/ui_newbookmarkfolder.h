/********************************************************************************
** Form generated from reading UI file 'newbookmarkfolder.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWBOOKMARKFOLDER_H
#define UI_NEWBOOKMARKFOLDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_newBookmarkFolderDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QTextEdit *descriptionEdit;
    QLabel *label_2;
    QComboBox *createInCombo;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *newBookmarkFolderDialog)
    {
        if (newBookmarkFolderDialog->objectName().isEmpty())
            newBookmarkFolderDialog->setObjectName(QStringLiteral("newBookmarkFolderDialog"));
        newBookmarkFolderDialog->resize(426, 221);
        verticalLayout_2 = new QVBoxLayout(newBookmarkFolderDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(newBookmarkFolderDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nameEdit = new QLineEdit(newBookmarkFolderDialog);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        gridLayout->addWidget(nameEdit, 0, 1, 1, 1);

        descriptionEdit = new QTextEdit(newBookmarkFolderDialog);
        descriptionEdit->setObjectName(QStringLiteral("descriptionEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(descriptionEdit->sizePolicy().hasHeightForWidth());
        descriptionEdit->setSizePolicy(sizePolicy);
        descriptionEdit->setAcceptRichText(false);

        gridLayout->addWidget(descriptionEdit, 1, 1, 1, 1);

        label_2 = new QLabel(newBookmarkFolderDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        createInCombo = new QComboBox(newBookmarkFolderDialog);
        createInCombo->setObjectName(QStringLiteral("createInCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(createInCombo->sizePolicy().hasHeightForWidth());
        createInCombo->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(createInCombo, 2, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(newBookmarkFolderDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        spacerItem = new QSpacerItem(399, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(newBookmarkFolderDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(newBookmarkFolderDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), newBookmarkFolderDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), newBookmarkFolderDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(newBookmarkFolderDialog);
    } // setupUi

    void retranslateUi(QDialog *newBookmarkFolderDialog)
    {
        newBookmarkFolderDialog->setWindowTitle(QApplication::translate("newBookmarkFolderDialog", "New Folder", 0));
        label->setText(QApplication::translate("newBookmarkFolderDialog", "Name:", 0));
        label_2->setText(QApplication::translate("newBookmarkFolderDialog", "Create in:", 0));
        label_3->setText(QApplication::translate("newBookmarkFolderDialog", "Description:", 0));
    } // retranslateUi

};

namespace Ui {
    class newBookmarkFolderDialog: public Ui_newBookmarkFolderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWBOOKMARKFOLDER_H
