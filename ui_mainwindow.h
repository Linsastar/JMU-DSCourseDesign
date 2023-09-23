/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_3;
    QAction *about_author;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_2;
    QAction *action_4;
    QAction *action_8;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QTextEdit *findEdit;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setBaseSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QStringLiteral("../Dictionary/13_BigPic.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral(""));
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        about_author = new QAction(MainWindow);
        about_author->setObjectName(QStringLiteral("about_author"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QStringLiteral("action_7"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QStringLiteral("action_8"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(930, 550, 311, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(22);
        pushButton->setFont(font);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(60, 60, 821, 571));
        textEdit->setReadOnly(false);
        findEdit = new QTextEdit(centralWidget);
        findEdit->setObjectName(QStringLiteral("findEdit"));
        findEdit->setGeometry(QRect(950, 170, 271, 41));
        QFont font1;
        font1.setPointSize(11);
        findEdit->setFont(font1);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1030, 260, 111, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 18));
        menuBar->setBaseSize(QSize(0, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(3);
        menuBar->setFont(font2);
        menuBar->setContextMenuPolicy(Qt::DefaultContextMenu);
        menuBar->setStyleSheet(QString::fromUtf8("font: 25 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        menuBar->setNativeMenuBar(true);
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(menu->sizePolicy().hasHeightForWidth());
        menu->setSizePolicy(sizePolicy1);
        menu->setMinimumSize(QSize(0, 0));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu->addAction(action_6);
        menu->addAction(action_2);
        menu->addAction(action_8);
        menu->addAction(action_4);
        menu->addSeparator();
        menu->addAction(action_3);
        menu_2->addAction(about_author);
        menu_2->addAction(action_5);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\255\227\345\205\270\346\240\221", Q_NULLPTR));
        action->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_3->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_3->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        about_author->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\344\275\234\350\200\205", Q_NULLPTR));
        action_5->setText(QApplication::translate("MainWindow", "\350\275\257\344\273\266\344\277\241\346\201\257", Q_NULLPTR));
        action_6->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_6->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_7->setText(QApplication::translate("MainWindow", "\345\215\225\350\257\215\346\237\245\350\257\242", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_7->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_2->setText(QApplication::translate("MainWindow", "\345\215\225\350\257\215\346\237\245\350\257\242", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_2->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_4->setText(QApplication::translate("MainWindow", "\345\217\257\350\247\206\345\214\226\345\261\225\347\244\272", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_4->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_8->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\345\275\223\345\211\215\345\255\227\345\205\270\346\240\221", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_8->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton->setText(QApplication::translate("MainWindow", "\351\242\204\345\212\240\350\275\275\345\255\227\345\205\270", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\205\263\344\272\216", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
