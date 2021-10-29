/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionNew;
    QAction *actionSaveAs;
    QAction *actionSave;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionOpen;
    QAction *actionSelect_Font;
    QAction *actionSet_Font_Bold;
    QAction *actionSet_Font_Underline;
    QAction *actionSet_Font_Italic;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QString::fromUtf8("Notepad"));
        Notepad->resize(800, 600);
        actionNew = new QAction(Notepad);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/Source/Images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionSaveAs = new QAction(Notepad);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/Source/Images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon1);
        actionSave = new QAction(Notepad);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionPrint = new QAction(Notepad);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionExit = new QAction(Notepad);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionCopy = new QAction(Notepad);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(Notepad);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionCut = new QAction(Notepad);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionUndo = new QAction(Notepad);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(Notepad);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imgs/Source/Images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSelect_Font = new QAction(Notepad);
        actionSelect_Font->setObjectName(QString::fromUtf8("actionSelect_Font"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imgs/Source/Images/font.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSelect_Font->setIcon(icon3);
        actionSet_Font_Bold = new QAction(Notepad);
        actionSet_Font_Bold->setObjectName(QString::fromUtf8("actionSet_Font_Bold"));
        actionSet_Font_Bold->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imgs/Source/Images/font-style-bold.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSet_Font_Bold->setIcon(icon4);
        actionSet_Font_Underline = new QAction(Notepad);
        actionSet_Font_Underline->setObjectName(QString::fromUtf8("actionSet_Font_Underline"));
        actionSet_Font_Underline->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imgs/Source/Images/font-style-underline.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSet_Font_Underline->setIcon(icon5);
        actionSet_Font_Italic = new QAction(Notepad);
        actionSet_Font_Italic->setObjectName(QString::fromUtf8("actionSet_Font_Italic"));
        actionSet_Font_Italic->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/imgs/Source/Images/font-style-italic.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSet_Font_Italic->setIcon(icon6);
        centralwidget = new QWidget(Notepad);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        Notepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Notepad);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        Notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Notepad->setStatusBar(statusbar);
        toolBar = new QToolBar(Notepad);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Notepad->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionSelect_Font);
        menuEdit->addAction(actionSet_Font_Bold);
        menuEdit->addAction(actionSet_Font_Underline);
        menuEdit->addAction(actionSet_Font_Italic);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSaveAs);
        toolBar->addAction(actionSelect_Font);
        toolBar->addAction(actionSet_Font_Bold);
        toolBar->addAction(actionSet_Font_Underline);
        toolBar->addAction(actionSet_Font_Italic);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        actionNew->setText(QCoreApplication::translate("Notepad", "New", nullptr));
        actionSaveAs->setText(QCoreApplication::translate("Notepad", "Save As", nullptr));
        actionSave->setText(QCoreApplication::translate("Notepad", "Save", nullptr));
        actionPrint->setText(QCoreApplication::translate("Notepad", "Print", nullptr));
        actionExit->setText(QCoreApplication::translate("Notepad", "Exit", nullptr));
        actionCopy->setText(QCoreApplication::translate("Notepad", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("Notepad", "Paste", nullptr));
        actionCut->setText(QCoreApplication::translate("Notepad", "Cut", nullptr));
        actionUndo->setText(QCoreApplication::translate("Notepad", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("Notepad", "Redo", nullptr));
        actionOpen->setText(QCoreApplication::translate("Notepad", "Open", nullptr));
        actionSelect_Font->setText(QCoreApplication::translate("Notepad", "Select Font", nullptr));
        actionSet_Font_Bold->setText(QCoreApplication::translate("Notepad", "Set Font Bold", nullptr));
        actionSet_Font_Underline->setText(QCoreApplication::translate("Notepad", "Set Font Underline", nullptr));
        actionSet_Font_Italic->setText(QCoreApplication::translate("Notepad", "Set Font Italic", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Notepad", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Notepad", "Edit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Notepad", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
