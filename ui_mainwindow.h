/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 6. May 18:22:28 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenDB;
    QAction *actionNewDB;
    QAction *actionPreference;
    QAction *actionQuit;
    QAction *actionEditOtdelTable;
    QAction *actionFind;
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionEditUsersTable;
    QAction *actionNewRecord;
    QAction *actionPreviousRecord;
    QAction *actionNextRecord;
    QAction *actionSaveRecord;
    QAction *actionDeleteRecord;
    QWidget *centralWidget;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionOpenDB = new QAction(MainWindow);
        actionOpenDB->setObjectName(QString::fromUtf8("actionOpenDB"));
        actionOpenDB->setCheckable(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/open_folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenDB->setIcon(icon);
        actionNewDB = new QAction(MainWindow);
        actionNewDB->setObjectName(QString::fromUtf8("actionNewDB"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/new_db.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewDB->setIcon(icon1);
        actionPreference = new QAction(MainWindow);
        actionPreference->setObjectName(QString::fromUtf8("actionPreference"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/preference.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreference->setIcon(icon2);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon3);
        actionEditOtdelTable = new QAction(MainWindow);
        actionEditOtdelTable->setObjectName(QString::fromUtf8("actionEditOtdelTable"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Images/otdel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditOtdelTable->setIcon(icon4);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Images/zoom_cursor.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon5);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionEditUsersTable = new QAction(MainWindow);
        actionEditUsersTable->setObjectName(QString::fromUtf8("actionEditUsersTable"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Images/users.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditUsersTable->setIcon(icon6);
        actionNewRecord = new QAction(MainWindow);
        actionNewRecord->setObjectName(QString::fromUtf8("actionNewRecord"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Images/button_plus_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewRecord->setIcon(icon7);
        actionPreviousRecord = new QAction(MainWindow);
        actionPreviousRecord->setObjectName(QString::fromUtf8("actionPreviousRecord"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Images/left_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreviousRecord->setIcon(icon8);
        actionNextRecord = new QAction(MainWindow);
        actionNextRecord->setObjectName(QString::fromUtf8("actionNextRecord"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Images/right_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNextRecord->setIcon(icon9);
        actionSaveRecord = new QAction(MainWindow);
        actionSaveRecord->setObjectName(QString::fromUtf8("actionSaveRecord"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Images/save_record.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveRecord->setIcon(icon10);
        actionDeleteRecord = new QAction(MainWindow);
        actionDeleteRecord->setObjectName(QString::fromUtf8("actionDeleteRecord"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Images/button_minus_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeleteRecord->setIcon(icon11);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(60, 60, 256, 192));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actionOpenDB);
        menu->addAction(actionNewDB);
        menu->addSeparator();
        menu->addAction(actionPreference);
        menu->addSeparator();
        menu->addAction(actionQuit);
        menu_2->addAction(actionEditUsersTable);
        menu_2->addAction(actionEditOtdelTable);
        menu_2->addAction(actionFind);
        menu_3->addAction(actionHelp);
        menu_3->addAction(actionAbout);
        menu_4->addAction(actionNewRecord);
        menu_4->addAction(actionPreviousRecord);
        menu_4->addAction(actionNextRecord);
        menu_4->addAction(actionSaveRecord);
        menu_4->addAction(actionDeleteRecord);
        mainToolBar->addAction(actionOpenDB);
        mainToolBar->addAction(actionNewDB);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionNewRecord);
        mainToolBar->addAction(actionPreviousRecord);
        mainToolBar->addAction(actionNextRecord);
        mainToolBar->addAction(actionSaveRecord);
        mainToolBar->addAction(actionDeleteRecord);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\202\320\276\321\200 (\321\201\320\265\321\200\320\262\320\265\321\200)", 0, QApplication::UnicodeUTF8));
        actionOpenDB->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\275\321\213\321\205", 0, QApplication::UnicodeUTF8));
        actionOpenDB->setShortcut(QApplication::translate("MainWindow", "Shift+O", 0, QApplication::UnicodeUTF8));
        actionNewDB->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\261\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", 0, QApplication::UnicodeUTF8));
        actionNewDB->setShortcut(QApplication::translate("MainWindow", "Shift+N", 0, QApplication::UnicodeUTF8));
        actionPreference->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0, QApplication::UnicodeUTF8));
        actionPreference->setShortcut(QApplication::translate("MainWindow", "Shift+P", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Shift+Q", 0, QApplication::UnicodeUTF8));
        actionEditOtdelTable->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203 \"\320\236\321\202\320\264\320\265\320\273\321\213\"", 0, QApplication::UnicodeUTF8));
        actionFind->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", 0, QApplication::UnicodeUTF8));
        actionFind->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionHelp->setText(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0, QApplication::UnicodeUTF8));
        actionHelp->setShortcut(QApplication::translate("MainWindow", "F1", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0, QApplication::UnicodeUTF8));
        actionEditUsersTable->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203 \"\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270\"", 0, QApplication::UnicodeUTF8));
        actionNewRecord->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214", 0, QApplication::UnicodeUTF8));
        actionPreviousRecord->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214", 0, QApplication::UnicodeUTF8));
        actionNextRecord->setText(QApplication::translate("MainWindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214", 0, QApplication::UnicodeUTF8));
        actionSaveRecord->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", 0, QApplication::UnicodeUTF8));
        actionDeleteRecord->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217", 0, QApplication::UnicodeUTF8));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\274\320\276\321\211\321\214", 0, QApplication::UnicodeUTF8));
        menu_4->setTitle(QApplication::translate("MainWindow", "\320\235\320\260\320\262\320\270\320\263\320\260\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
