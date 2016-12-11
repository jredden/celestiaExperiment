/********************************************************************************
** Form generated from reading UI file 'organizebookmarks.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORGANIZEBOOKMARKS_H
#define UI_ORGANIZEBOOKMARKS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_organizeBookmarksDialog
{
public:
    QVBoxLayout *vboxLayout;
    QTreeView *treeView;
    QHBoxLayout *hboxLayout;
    QPushButton *newFolderButton;
    QPushButton *newSeparatorButton;
    QPushButton *removeItemButton;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *organizeBookmarksDialog)
    {
        if (organizeBookmarksDialog->objectName().isEmpty())
            organizeBookmarksDialog->setObjectName(QString::fromUtf8("organizeBookmarksDialog"));
        organizeBookmarksDialog->resize(581, 480);
        vboxLayout = new QVBoxLayout(organizeBookmarksDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        treeView = new QTreeView(organizeBookmarksDialog);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        vboxLayout->addWidget(treeView);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        newFolderButton = new QPushButton(organizeBookmarksDialog);
        newFolderButton->setObjectName(QString::fromUtf8("newFolderButton"));

        hboxLayout->addWidget(newFolderButton);

        newSeparatorButton = new QPushButton(organizeBookmarksDialog);
        newSeparatorButton->setObjectName(QString::fromUtf8("newSeparatorButton"));

        hboxLayout->addWidget(newSeparatorButton);

        removeItemButton = new QPushButton(organizeBookmarksDialog);
        removeItemButton->setObjectName(QString::fromUtf8("removeItemButton"));

        hboxLayout->addWidget(removeItemButton);

        spacerItem = new QSpacerItem(291, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(organizeBookmarksDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(organizeBookmarksDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), organizeBookmarksDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(organizeBookmarksDialog);
    } // setupUi

    void retranslateUi(QDialog *organizeBookmarksDialog)
    {
        organizeBookmarksDialog->setWindowTitle(QApplication::translate("organizeBookmarksDialog", "Organize Bookmarks", 0, QApplication::UnicodeUTF8));
        newFolderButton->setText(QApplication::translate("organizeBookmarksDialog", "New Folder", 0, QApplication::UnicodeUTF8));
        newSeparatorButton->setText(QApplication::translate("organizeBookmarksDialog", "New Separator", 0, QApplication::UnicodeUTF8));
        removeItemButton->setText(QApplication::translate("organizeBookmarksDialog", "Remove Item", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class organizeBookmarksDialog: public Ui_organizeBookmarksDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGANIZEBOOKMARKS_H
