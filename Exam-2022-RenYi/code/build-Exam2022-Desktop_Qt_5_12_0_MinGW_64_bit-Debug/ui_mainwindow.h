/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *menupage;
    QPushButton *check;
    QLabel *label;
    QPushButton *students;
    QPushButton *exit;
    QWidget *checkoutstudents;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QPushButton *addbtn;
    QPushButton *savebtn;
    QPushButton *deletebtn;
    QWidget *findstudents;
    QLabel *label_3;
    QLineEdit *idstudents;
    QPushButton *okbtn;
    QLabel *label_4;
    QTableWidget *tableWidget_2;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(960, 640);
        MainWindow->setMinimumSize(QSize(960, 640));
        MainWindow->setMaximumSize(QSize(960, 640));
        MainWindow->setStyleSheet(QString::fromUtf8("QStackedWidget#stackedWidget\n"
"{\n"
"border-image: url(:/images/OIP-C.jfif);\n"
"}\n"
"QStackedWidget#stackedWidget QPushButton,QLabel\n"
"{\n"
"    border:none;\n"
"    border-radius:5px;\n"
"	background-color: rgb(255,141,210);\n"
"    color:white;\n"
"    font:normal 16pt \"\346\245\267\344\275\223\";\n"
"}\n"
"QStackedWidget#stackedWidget QPushButton:hover\n"
"{\n"
"    \n"
"	\n"
"	background-color: rgb(176,89,254);\n"
"}"));
        gridLayout = new QGridLayout(MainWindow);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(MainWindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        menupage = new QWidget();
        menupage->setObjectName(QString::fromUtf8("menupage"));
        check = new QPushButton(menupage);
        check->setObjectName(QString::fromUtf8("check"));
        check->setGeometry(QRect(340, 260, 161, 51));
        check->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\245\267\344\275\223\";"));
        label = new QLabel(menupage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 160, 221, 71));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 0, 0);"));
        students = new QPushButton(menupage);
        students->setObjectName(QString::fromUtf8("students"));
        students->setGeometry(QRect(340, 350, 161, 51));
        students->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\245\267\344\275\223\";"));
        exit = new QPushButton(menupage);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(340, 450, 161, 51));
        exit->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\245\267\344\275\223\";"));
        stackedWidget->addWidget(menupage);
        checkoutstudents = new QWidget();
        checkoutstudents->setObjectName(QString::fromUtf8("checkoutstudents"));
        label_2 = new QLabel(checkoutstudents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 50, 181, 61));
        tableWidget = new QTableWidget(checkoutstudents);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(110, 160, 651, 311));
        addbtn = new QPushButton(checkoutstudents);
        addbtn->setObjectName(QString::fromUtf8("addbtn"));
        addbtn->setGeometry(QRect(810, 170, 101, 41));
        savebtn = new QPushButton(checkoutstudents);
        savebtn->setObjectName(QString::fromUtf8("savebtn"));
        savebtn->setGeometry(QRect(810, 220, 101, 41));
        deletebtn = new QPushButton(checkoutstudents);
        deletebtn->setObjectName(QString::fromUtf8("deletebtn"));
        deletebtn->setGeometry(QRect(810, 280, 111, 41));
        stackedWidget->addWidget(checkoutstudents);
        findstudents = new QWidget();
        findstudents->setObjectName(QString::fromUtf8("findstudents"));
        label_3 = new QLabel(findstudents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 40, 171, 71));
        idstudents = new QLineEdit(findstudents);
        idstudents->setObjectName(QString::fromUtf8("idstudents"));
        idstudents->setGeometry(QRect(370, 190, 191, 31));
        okbtn = new QPushButton(findstudents);
        okbtn->setObjectName(QString::fromUtf8("okbtn"));
        okbtn->setGeometry(QRect(390, 440, 131, 41));
        label_4 = new QLabel(findstudents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 190, 111, 31));
        tableWidget_2 = new QTableWidget(findstudents);
        if (tableWidget_2->columnCount() < 6)
            tableWidget_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(160, 280, 601, 111));
        stackedWidget->addWidget(findstudents);

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);


        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        check->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\345\255\246\347\224\237", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        students->setText(QApplication::translate("MainWindow", "\347\273\237\350\256\241\345\255\246\347\224\237", nullptr));
        exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Check Out", nullptr));
        addbtn->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        savebtn->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\345\255\246\347\224\237", nullptr));
        deletebtn->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\345\255\246\347\224\237", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Find Students", nullptr));
        okbtn->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\351\253\230\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\344\270\223\344\270\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\351\253\230\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\345\244\247\347\211\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\345\244\247\350\213\261", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
