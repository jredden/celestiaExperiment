/********************************************************************************
** Form generated from reading UI file 'addbookmark.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOKMARK_H
#define UI_ADDBOOKMARK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

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
            addBookmarkDialog->setObjectName(QString::fromUtf8("addBookmarkDialog"));
        addBookmarkDialog->setWindowModality(Qt::ApplicationModal);
        addBookmarkDialog->resize(488, 183);
        verticalLayout = new QVBoxLayout(addBookmarkDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(addBookmarkDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        bookmarkNameEdit = new QLineEdit(addBookmarkDialog);
        bookmarkNameEdit->setObjectName(QString::fromUtf8("bookmarkNameEdit"));

        gridLayout->addWidget(bookmarkNameEdit, 0, 1, 1, 1);

        createInCombo = new QComboBox(addBookmarkDialog);
        createInCombo->setObjectName(QString::fromUtf8("createInCombo"));

        gridLayout->addWidget(createInCombo, 1, 1, 1, 1);

        label_2 = new QLabel(addBookmarkDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(addBookmarkDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        timeSourceCombo = new QComboBox(addBookmarkDialog);
        timeSourceCombo->setObjectName(QString::fromUtf8("timeSourceCombo"));

        gridLayout->addWidget(timeSourceCombo, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(addBookmarkDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
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
        addBookmarkDialog->setWindowTitle(QApplication::translate("addBookmarkDialog", "Bookmark Location", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("addBookmarkDialog", "Bookmark name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("addBookmarkDialog", "Create in:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("addBookmarkDialog", "Time source:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addBookmarkDialog: public Ui_addBookmarkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOKMARK_H
