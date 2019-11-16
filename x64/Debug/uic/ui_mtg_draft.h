/********************************************************************************
** Form generated from reading UI file 'mtg_draft.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MTG_DRAFT_H
#define UI_MTG_DRAFT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MTG_DraftClass
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QPushButton *nextButton;
    QLabel *cardImage;
    QLabel *cardImage_2;
    QLabel *cardImage_3;
    QLabel *cardImage_4;
    QLabel *cardImage_5;
    QLabel *cardImage_6;
    QLabel *cardImage_7;
    QLabel *cardImage_8;
    QLabel *cardImage_9;
    QPushButton *cardButton;
    QPushButton *cardButton_2;
    QPushButton *cardButton_3;
    QPushButton *cardButton_4;
    QPushButton *cardButton_5;
    QPushButton *cardButton_6;
    QPushButton *cardButton_7;
    QPushButton *cardButton_8;
    QPushButton *cardButton_9;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MTG_DraftClass)
    {
        if (MTG_DraftClass->objectName().isEmpty())
            MTG_DraftClass->setObjectName(QString::fromUtf8("MTG_DraftClass"));
        MTG_DraftClass->resize(773, 866);
        actionExit = new QAction(MTG_DraftClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout = new QAction(MTG_DraftClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(MTG_DraftClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        nextButton = new QPushButton(centralWidget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(694, 740, 71, 31));
        cardImage = new QLabel(centralWidget);
        cardImage->setObjectName(QString::fromUtf8("cardImage"));
        cardImage->setGeometry(QRect(10, 0, 190, 265));
        cardImage->setFrameShape(QFrame::Box);
        cardImage_2 = new QLabel(centralWidget);
        cardImage_2->setObjectName(QString::fromUtf8("cardImage_2"));
        cardImage_2->setGeometry(QRect(250, 0, 190, 265));
        cardImage_2->setFrameShape(QFrame::Box);
        cardImage_3 = new QLabel(centralWidget);
        cardImage_3->setObjectName(QString::fromUtf8("cardImage_3"));
        cardImage_3->setGeometry(QRect(480, 0, 190, 265));
        cardImage_3->setFrameShape(QFrame::Box);
        cardImage_4 = new QLabel(centralWidget);
        cardImage_4->setObjectName(QString::fromUtf8("cardImage_4"));
        cardImage_4->setGeometry(QRect(10, 270, 190, 265));
        cardImage_4->setFrameShape(QFrame::Box);
        cardImage_5 = new QLabel(centralWidget);
        cardImage_5->setObjectName(QString::fromUtf8("cardImage_5"));
        cardImage_5->setGeometry(QRect(250, 270, 190, 265));
        cardImage_5->setFrameShape(QFrame::Box);
        cardImage_6 = new QLabel(centralWidget);
        cardImage_6->setObjectName(QString::fromUtf8("cardImage_6"));
        cardImage_6->setGeometry(QRect(480, 270, 190, 265));
        cardImage_6->setFrameShape(QFrame::Box);
        cardImage_7 = new QLabel(centralWidget);
        cardImage_7->setObjectName(QString::fromUtf8("cardImage_7"));
        cardImage_7->setGeometry(QRect(10, 540, 190, 265));
        cardImage_7->setFrameShape(QFrame::Box);
        cardImage_8 = new QLabel(centralWidget);
        cardImage_8->setObjectName(QString::fromUtf8("cardImage_8"));
        cardImage_8->setGeometry(QRect(250, 540, 190, 265));
        cardImage_8->setFrameShape(QFrame::Box);
        cardImage_9 = new QLabel(centralWidget);
        cardImage_9->setObjectName(QString::fromUtf8("cardImage_9"));
        cardImage_9->setGeometry(QRect(480, 540, 190, 265));
        cardImage_9->setFrameShape(QFrame::Box);
        cardButton = new QPushButton(centralWidget);
        cardButton->setObjectName(QString::fromUtf8("cardButton"));
        cardButton->setGeometry(QRect(210, 20, 21, 21));
        cardButton_2 = new QPushButton(centralWidget);
        cardButton_2->setObjectName(QString::fromUtf8("cardButton_2"));
        cardButton_2->setGeometry(QRect(210, 290, 21, 21));
        cardButton_3 = new QPushButton(centralWidget);
        cardButton_3->setObjectName(QString::fromUtf8("cardButton_3"));
        cardButton_3->setGeometry(QRect(210, 560, 21, 21));
        cardButton_4 = new QPushButton(centralWidget);
        cardButton_4->setObjectName(QString::fromUtf8("cardButton_4"));
        cardButton_4->setGeometry(QRect(450, 20, 21, 21));
        cardButton_5 = new QPushButton(centralWidget);
        cardButton_5->setObjectName(QString::fromUtf8("cardButton_5"));
        cardButton_5->setGeometry(QRect(450, 290, 21, 21));
        cardButton_6 = new QPushButton(centralWidget);
        cardButton_6->setObjectName(QString::fromUtf8("cardButton_6"));
        cardButton_6->setGeometry(QRect(450, 560, 21, 21));
        cardButton_7 = new QPushButton(centralWidget);
        cardButton_7->setObjectName(QString::fromUtf8("cardButton_7"));
        cardButton_7->setGeometry(QRect(680, 20, 21, 21));
        cardButton_8 = new QPushButton(centralWidget);
        cardButton_8->setObjectName(QString::fromUtf8("cardButton_8"));
        cardButton_8->setGeometry(QRect(680, 560, 21, 21));
        cardButton_9 = new QPushButton(centralWidget);
        cardButton_9->setObjectName(QString::fromUtf8("cardButton_9"));
        cardButton_9->setGeometry(QRect(680, 290, 21, 21));
        MTG_DraftClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MTG_DraftClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 773, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MTG_DraftClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MTG_DraftClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MTG_DraftClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MTG_DraftClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MTG_DraftClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MTG_DraftClass);

        QMetaObject::connectSlotsByName(MTG_DraftClass);
    } // setupUi

    void retranslateUi(QMainWindow *MTG_DraftClass)
    {
        MTG_DraftClass->setWindowTitle(QApplication::translate("MTG_DraftClass", "MTG_Draft", nullptr));
        actionExit->setText(QApplication::translate("MTG_DraftClass", "Exit", nullptr));
        actionAbout->setText(QApplication::translate("MTG_DraftClass", "About", nullptr));
        nextButton->setText(QApplication::translate("MTG_DraftClass", "PushButton", nullptr));
        cardImage->setText(QString());
        cardImage_2->setText(QString());
        cardImage_3->setText(QString());
        cardImage_4->setText(QString());
        cardImage_5->setText(QString());
        cardImage_6->setText(QString());
        cardImage_7->setText(QString());
        cardImage_8->setText(QString());
        cardImage_9->setText(QString());
        cardButton->setText(QApplication::translate("MTG_DraftClass", "1", nullptr));
        cardButton_2->setText(QApplication::translate("MTG_DraftClass", "2", nullptr));
        cardButton_3->setText(QApplication::translate("MTG_DraftClass", "3", nullptr));
        cardButton_4->setText(QApplication::translate("MTG_DraftClass", "4", nullptr));
        cardButton_5->setText(QApplication::translate("MTG_DraftClass", "5", nullptr));
        cardButton_6->setText(QApplication::translate("MTG_DraftClass", "6", nullptr));
        cardButton_7->setText(QApplication::translate("MTG_DraftClass", "7", nullptr));
        cardButton_8->setText(QApplication::translate("MTG_DraftClass", "9", nullptr));
        cardButton_9->setText(QApplication::translate("MTG_DraftClass", "8", nullptr));
        menuFile->setTitle(QApplication::translate("MTG_DraftClass", "File", nullptr));
        menuHelp->setTitle(QApplication::translate("MTG_DraftClass", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MTG_DraftClass: public Ui_MTG_DraftClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MTG_DRAFT_H
