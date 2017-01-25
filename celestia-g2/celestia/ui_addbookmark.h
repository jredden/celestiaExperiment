/********************************************************************************
** Form generated from reading UI file 'addbookmark.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOKMARK_H
#define UI_ADDBOOKMARK_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addBookmarkDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *bookmarkNameEdit;
    QComboBox *createInCombo;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *timeSourceCombo;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *addBookmarkDialog)
    {
        if (addBookmarkDialog->objectName().isEmpty())
            addBookmarkDialog->setObjectName(QStringLiteral("addBookmarkDialog"));
        addBookmarkDialog->setWindowModality(Qt::ApplicationModal);
        addBookmarkDialog->resize(488, 183);
        verticalLayout = new QVBoxLayout(addBookmarkDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(addBookmarkDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        bookmarkNameEdit = new QLineEdit(addBookmarkDialog);
        bookmarkNameEdit->setObjectName(QStringLiteral("bookmarkNameEdit"));

        gridLayout->addWidget(bookmarkNameEdit, 0, 1, 1, 1);

        createInCombo = new QComboBox(addBookmarkDialog);
        createInCombo->setObjectName(QStringLiteral("createInCombo"));

        gridLayout->addWidget(createInCombo, 1, 1, 1, 1);

        label_2 = new QLabel(addBookmarkDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(addBookmarkDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        timeSourceCombo = new QComboBox(addBookmarkDialog);
        timeSourceCombo->setObjectName(QStringLiteral("timeSourceCombo"));

        gridLayout->addWidget(timeSourceCombo, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(addBookmarkDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(addBookmarkDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), addBookmarkDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addBookmarkDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(addBookmarkDialog);
    } // setupUi

    void retranslateUi(QDialog *addBookmarkDialog)
    {
        addBookmarkDialog->setWindowTitle(QApplication::translate("addBookmarkDialog", "Bookmark Location", 0));
        label->setText(QApplication::translate("addBookmarkDialog", "Bookmark name:", 0));
        label_2->setText(QApplication::translate("addBookmarkDialog", "Create in:", 0));
        label_3->setText(QApplication::translate("addBookmarkDialog", "Time source:", 0));
    } // retranslateUi

};

namespace Ui {
    class addBookmarkDialog: public Ui_addBookmarkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOKMARK_H
