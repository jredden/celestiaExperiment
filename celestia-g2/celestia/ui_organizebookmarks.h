/********************************************************************************
** Form generated from reading UI file 'organizebookmarks.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORGANIZEBOOKMARKS_H
#define UI_ORGANIZEBOOKMARKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

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
            organizeBookmarksDialog->setObjectName(QStringLiteral("organizeBookmarksDialog"));
        organizeBookmarksDialog->resize(581, 480);
        vboxLayout = new QVBoxLayout(organizeBookmarksDialog);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        treeView = new QTreeView(organizeBookmarksDialog);
        treeView->setObjectName(QStringLiteral("treeView"));

        vboxLayout->addWidget(treeView);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        newFolderButton = new QPushButton(organizeBookmarksDialog);
        newFolderButton->setObjectName(QStringLiteral("newFolderButton"));

        hboxLayout->addWidget(newFolderButton);

        newSeparatorButton = new QPushButton(organizeBookmarksDialog);
        newSeparatorButton->setObjectName(QStringLiteral("newSeparatorButton"));

        hboxLayout->addWidget(newSeparatorButton);

        removeItemButton = new QPushButton(organizeBookmarksDialog);
        removeItemButton->setObjectName(QStringLiteral("removeItemButton"));

        hboxLayout->addWidget(removeItemButton);

        spacerItem = new QSpacerItem(291, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(organizeBookmarksDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(organizeBookmarksDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), organizeBookmarksDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(organizeBookmarksDialog);
    } // setupUi

    void retranslateUi(QDialog *organizeBookmarksDialog)
    {
        organizeBookmarksDialog->setWindowTitle(QApplication::translate("organizeBookmarksDialog", "Organize Bookmarks", 0));
        newFolderButton->setText(QApplication::translate("organizeBookmarksDialog", "New Folder", 0));
        newSeparatorButton->setText(QApplication::translate("organizeBookmarksDialog", "New Separator", 0));
        removeItemButton->setText(QApplication::translate("organizeBookmarksDialog", "Remove Item", 0));
    } // retranslateUi

};

namespace Ui {
    class organizeBookmarksDialog: public Ui_organizeBookmarksDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGANIZEBOOKMARKS_H
