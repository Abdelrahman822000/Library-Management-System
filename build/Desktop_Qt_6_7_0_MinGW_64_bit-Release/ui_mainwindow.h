/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QTabWidget *tabWidget;
    QWidget *Login;
    QGroupBox *groupBox_8;
    QWidget *widget;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QLineEdit *NamelineEdit_5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_2;
    QLineEdit *PasslineEdit_11;
    QPushButton *LoginButton;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *Store;
    QPushButton *Restore;
    QPushButton *Remove_2;
    QLabel *label_34;
    QWidget *Admin;
    QGroupBox *groupBox;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QPushButton *SearchButton;
    QGroupBox *groupBox_3;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_9;
    QPushButton *AddButton;
    QGroupBox *groupBox_4;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_10;
    QPushButton *Remove;
    QGroupBox *groupBox_5;
    QWidget *widget4;
    QVBoxLayout *verticalLayout_6;
    QListWidget *listWidget;
    QPushButton *Clear;
    QPushButton *Exit;
    QWidget *User;
    QGroupBox *groupBox_6;
    QWidget *widget5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QComboBox *comboBox;
    QPushButton *SearchButton_2;
    QGroupBox *groupBox_7;
    QWidget *widget6;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget_2;
    QPushButton *Clear_2;
    QPushButton *Exit_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(953, 772);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 10, 911, 701));
        groupBox_2->setFlat(false);
        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(20, 50, 871, 641));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(10);
        font.setBold(true);
        tabWidget->setFont(font);
        tabWidget->setAutoFillBackground(false);
        Login = new QWidget();
        Login->setObjectName("Login");
        groupBox_8 = new QGroupBox(Login);
        groupBox_8->setObjectName("groupBox_8");
        groupBox_8->setGeometry(QRect(130, 50, 611, 291));
        widget = new QWidget(groupBox_8);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 40, 591, 241));
        verticalLayout_8 = new QVBoxLayout(widget);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        label->setFont(font1);

        horizontalLayout_10->addWidget(label);

        NamelineEdit_5 = new QLineEdit(widget);
        NamelineEdit_5->setObjectName("NamelineEdit_5");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(15);
        font2.setBold(true);
        NamelineEdit_5->setFont(font2);

        horizontalLayout_10->addWidget(NamelineEdit_5);


        verticalLayout_7->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(20);
        font3.setBold(true);
        label_2->setFont(font3);

        horizontalLayout_11->addWidget(label_2);

        PasslineEdit_11 = new QLineEdit(widget);
        PasslineEdit_11->setObjectName("PasslineEdit_11");
        PasslineEdit_11->setFont(font2);
        PasslineEdit_11->setEchoMode(QLineEdit::Password);

        horizontalLayout_11->addWidget(PasslineEdit_11);


        verticalLayout_7->addLayout(horizontalLayout_11);

        LoginButton = new QPushButton(widget);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setFont(font3);
        LoginButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_7->addWidget(LoginButton);


        verticalLayout_8->addLayout(verticalLayout_7);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        Store = new QPushButton(widget);
        Store->setObjectName("Store");
        Store->setFont(font);
        Store->setCursor(QCursor(Qt::PointingHandCursor));
        Store->setAutoFillBackground(false);

        horizontalLayout_12->addWidget(Store);

        Restore = new QPushButton(widget);
        Restore->setObjectName("Restore");
        Restore->setFont(font);
        Restore->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_12->addWidget(Restore);

        Remove_2 = new QPushButton(widget);
        Remove_2->setObjectName("Remove_2");
        Remove_2->setFont(font);
        Remove_2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_12->addWidget(Remove_2);


        verticalLayout_8->addLayout(horizontalLayout_12);

        label_34 = new QLabel(Login);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(180, 399, 551, 101));
        tabWidget->addTab(Login, QString());
        Admin = new QWidget();
        Admin->setObjectName("Admin");
        groupBox = new QGroupBox(Admin);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 301, 161));
        widget1 = new QWidget(groupBox);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 30, 281, 121));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        label_3->setFont(font4);

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        comboBox_2 = new QComboBox(widget1);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Times New Roman")});
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setItalic(true);
        comboBox_2->setFont(font5);
        comboBox_2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(comboBox_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        SearchButton = new QPushButton(widget1);
        SearchButton->setObjectName("SearchButton");
        SearchButton->setCursor(QCursor(Qt::PointingHandCursor));
        SearchButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(SearchButton);

        groupBox_3 = new QGroupBox(Admin);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 180, 311, 241));
        widget2 = new QWidget(groupBox_3);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(10, 30, 291, 201));
        verticalLayout_4 = new QVBoxLayout(widget2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(widget2);
        label_5->setObjectName("label_5");
        label_5->setFont(font4);

        horizontalLayout_5->addWidget(label_5);

        lineEdit_6 = new QLineEdit(widget2);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setFont(font);

        horizontalLayout_5->addWidget(lineEdit_6);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(widget2);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        horizontalLayout_6->addWidget(label_6);

        lineEdit_7 = new QLineEdit(widget2);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setFont(font);

        horizontalLayout_6->addWidget(lineEdit_7);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(widget2);
        label_7->setObjectName("label_7");
        label_7->setFont(font4);

        horizontalLayout_7->addWidget(label_7);

        lineEdit_8 = new QLineEdit(widget2);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setFont(font);

        horizontalLayout_7->addWidget(lineEdit_8);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_8 = new QLabel(widget2);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        horizontalLayout_8->addWidget(label_8);

        lineEdit_9 = new QLineEdit(widget2);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setFont(font);

        horizontalLayout_8->addWidget(lineEdit_9);


        verticalLayout_4->addLayout(horizontalLayout_8);

        AddButton = new QPushButton(widget2);
        AddButton->setObjectName("AddButton");
        AddButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_4->addWidget(AddButton);

        groupBox_4 = new QGroupBox(Admin);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 430, 311, 121));
        widget3 = new QWidget(groupBox_4);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(10, 35, 291, 71));
        verticalLayout_5 = new QVBoxLayout(widget3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_9 = new QLabel(widget3);
        label_9->setObjectName("label_9");
        label_9->setFont(font4);

        horizontalLayout_9->addWidget(label_9);

        lineEdit_10 = new QLineEdit(widget3);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setFont(font);

        horizontalLayout_9->addWidget(lineEdit_10);


        verticalLayout_5->addLayout(horizontalLayout_9);

        Remove = new QPushButton(widget3);
        Remove->setObjectName("Remove");
        Remove->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_5->addWidget(Remove);

        groupBox_5 = new QGroupBox(Admin);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(330, 10, 531, 521));
        widget4 = new QWidget(groupBox_5);
        widget4->setObjectName("widget4");
        widget4->setGeometry(QRect(30, 40, 491, 471));
        verticalLayout_6 = new QVBoxLayout(widget4);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(widget4);
        listWidget->setObjectName("listWidget");
        listWidget->setFont(font);
        listWidget->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_6->addWidget(listWidget);

        Clear = new QPushButton(widget4);
        Clear->setObjectName("Clear");
        Clear->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_6->addWidget(Clear);

        Exit = new QPushButton(Admin);
        Exit->setObjectName("Exit");
        Exit->setGeometry(QRect(280, 560, 291, 29));
        Exit->setCursor(QCursor(Qt::PointingHandCursor));
        tabWidget->addTab(Admin, QString());
        User = new QWidget();
        User->setObjectName("User");
        groupBox_6 = new QGroupBox(User);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(160, 20, 551, 161));
        widget5 = new QWidget(groupBox_6);
        widget5->setObjectName("widget5");
        widget5->setGeometry(QRect(10, 30, 531, 121));
        verticalLayout_2 = new QVBoxLayout(widget5);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_11 = new QLabel(widget5);
        label_11->setObjectName("label_11");
        label_11->setFont(font4);

        horizontalLayout_2->addWidget(label_11);

        lineEdit_4 = new QLineEdit(widget5);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_10 = new QLabel(widget5);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        horizontalLayout->addWidget(label_10);

        comboBox = new QComboBox(widget5);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Times New Roman")});
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setItalic(true);
        font6.setUnderline(false);
        font6.setStrikeOut(false);
        comboBox->setFont(font6);
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(comboBox);


        verticalLayout_2->addLayout(horizontalLayout);

        SearchButton_2 = new QPushButton(widget5);
        SearchButton_2->setObjectName("SearchButton_2");
        SearchButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(SearchButton_2);

        groupBox_7 = new QGroupBox(User);
        groupBox_7->setObjectName("groupBox_7");
        groupBox_7->setGeometry(QRect(160, 190, 551, 351));
        widget6 = new QWidget(groupBox_7);
        widget6->setObjectName("widget6");
        widget6->setGeometry(QRect(20, 40, 521, 301));
        verticalLayout = new QVBoxLayout(widget6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget_2 = new QListWidget(widget6);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setFont(font);

        verticalLayout->addWidget(listWidget_2);

        Clear_2 = new QPushButton(widget6);
        Clear_2->setObjectName("Clear_2");
        Clear_2->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(Clear_2);

        Exit_2 = new QPushButton(User);
        Exit_2->setObjectName("Exit_2");
        Exit_2->setGeometry(QRect(290, 550, 291, 29));
        Exit_2->setCursor(QCursor(Qt::PointingHandCursor));
        tabWidget->addTab(User, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_2->setTitle(QString());
        groupBox_8->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Name  :-", nullptr));
        NamelineEdit_5->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Password :-", nullptr));
        PasslineEdit_11->setText(QString());
        LoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        Store->setText(QCoreApplication::translate("MainWindow", "Store Data", nullptr));
        Restore->setText(QCoreApplication::translate("MainWindow", "Restore Data", nullptr));
        Remove_2->setText(QCoreApplication::translate("MainWindow", "Remove Data", nullptr));
        label_34->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Login), QCoreApplication::translate("MainWindow", "Login", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Search", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Title  :-", nullptr));
        lineEdit_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Filter :-", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Fantasy", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Kids", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Religion", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "Romance", nullptr));

        SearchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Add Book", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Title  :-", nullptr));
        lineEdit_6->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Category :-", nullptr));
        lineEdit_7->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "Barcode  :-", nullptr));
        lineEdit_8->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Author :-", nullptr));
        lineEdit_9->setText(QString());
        AddButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Remove Book", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Barcode  :-", nullptr));
        lineEdit_10->setText(QString());
        Remove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Book Data", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Admin), QCoreApplication::translate("MainWindow", "Admin", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Search", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Title  :-", nullptr));
        lineEdit_4->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Filter :-", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Fantasy", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Kids", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Religion", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Romance", nullptr));

        SearchButton_2->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "Book Data", nullptr));
        Clear_2->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Exit_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(User), QCoreApplication::translate("MainWindow", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
