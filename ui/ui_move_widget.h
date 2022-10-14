/********************************************************************************
** Form generated from reading UI file 'move_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVE_WIDGET_H
#define UI_MOVE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "Program_UI/fix_ui/lineeditinput.h"

QT_BEGIN_NAMESPACE

class Ui_move_widget
{
public:
    QLabel *label_3;
    QComboBox *moveTypeCB;
    QLabel *label_2;
    QLabel *label;
    QComboBox *comboBox;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *btn_resert;
    LineEditInput *lineEdit_Speed;
    LineEditInput *lineEdit_Addspeed;
    QWidget *page_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *btn_resert_l;
    LineEditInput *lineEdit_Speed_movel;
    LineEditInput *lineEdit_addSpeed_movel;

    void setupUi(QWidget *move_widget)
    {
        if (move_widget->objectName().isEmpty())
            move_widget->setObjectName(QStringLiteral("move_widget"));
        move_widget->resize(800, 390);
        label_3 = new QLabel(move_widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 411, 17));
        moveTypeCB = new QComboBox(move_widget);
        moveTypeCB->addItem(QString());
        moveTypeCB->addItem(QString());
        moveTypeCB->addItem(QString());
        moveTypeCB->setObjectName(QStringLiteral("moveTypeCB"));
        moveTypeCB->setGeometry(QRect(500, 50, 141, 22));
        label_2 = new QLabel(move_widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(510, 20, 71, 21));
        label = new QLabel(move_widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 160, 61, 21));
        comboBox = new QComboBox(move_widget);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(30, 190, 121, 25));
        stackedWidget = new QStackedWidget(move_widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(220, 70, 241, 291));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 30, 71, 21));
        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 110, 71, 21));
        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 60, 41, 21));
        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(140, 140, 51, 21));
        btn_resert = new QPushButton(page);
        btn_resert->setObjectName(QStringLiteral("btn_resert"));
        btn_resert->setGeometry(QRect(30, 210, 111, 61));
        btn_resert->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        lineEdit_Speed = new LineEditInput(page);
        lineEdit_Speed->setObjectName(QStringLiteral("lineEdit_Speed"));
        lineEdit_Speed->setGeometry(QRect(30, 60, 101, 25));
        lineEdit_Speed->setInputMethodHints(Qt::ImhPreferNumbers);
        lineEdit_Addspeed = new LineEditInput(page);
        lineEdit_Addspeed->setObjectName(QStringLiteral("lineEdit_Addspeed"));
        lineEdit_Addspeed->setGeometry(QRect(30, 140, 101, 25));
        lineEdit_Addspeed->setInputMethodHints(Qt::ImhPreferNumbers);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(140, 60, 41, 21));
        label_9 = new QLabel(page_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(140, 140, 61, 21));
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 110, 71, 21));
        label_11 = new QLabel(page_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 30, 71, 21));
        btn_resert_l = new QPushButton(page_2);
        btn_resert_l->setObjectName(QStringLiteral("btn_resert_l"));
        btn_resert_l->setGeometry(QRect(30, 210, 111, 61));
        btn_resert_l->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        lineEdit_Speed_movel = new LineEditInput(page_2);
        lineEdit_Speed_movel->setObjectName(QStringLiteral("lineEdit_Speed_movel"));
        lineEdit_Speed_movel->setGeometry(QRect(30, 60, 101, 25));
        lineEdit_Speed_movel->setInputMethodHints(Qt::ImhPreferNumbers);
        lineEdit_addSpeed_movel = new LineEditInput(page_2);
        lineEdit_addSpeed_movel->setObjectName(QStringLiteral("lineEdit_addSpeed_movel"));
        lineEdit_addSpeed_movel->setGeometry(QRect(30, 140, 101, 25));
        lineEdit_addSpeed_movel->setInputMethodHints(Qt::ImhPreferNumbers);
        stackedWidget->addWidget(page_2);

        retranslateUi(move_widget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(move_widget);
    } // setupUi

    void retranslateUi(QWidget *move_widget)
    {
        move_widget->setWindowTitle(QApplication::translate("move_widget", "Form", nullptr));
        label_3->setText(QApplication::translate("move_widget", "\344\270\213\351\235\242\347\232\204\345\200\274\345\272\224\347\224\250\345\210\260\346\211\200\346\234\211\345\255\220\350\267\257\347\202\271, \345\271\266\344\270\224\345\217\226\345\206\263\344\272\216\346\211\200\351\200\211\346\213\251\347\232\204\347\247\273\345\212\250\347\261\273\345\236\213\343\200\202", nullptr));
        moveTypeCB->setItemText(0, QApplication::translate("move_widget", "          MOVEJ", nullptr));
        moveTypeCB->setItemText(1, QApplication::translate("move_widget", "          MOVEL", nullptr));
        moveTypeCB->setItemText(2, QApplication::translate("move_widget", "          MOVEP", nullptr));

        label_2->setText(QApplication::translate("move_widget", "\347\247\273\345\212\250\347\261\273\345\236\213", nullptr));
        label->setText(QApplication::translate("move_widget", "\350\256\276\347\275\256TCP", nullptr));
        comboBox->setItemText(0, QApplication::translate("move_widget", "\345\267\245\345\205\267\346\263\225\345\205\260\347\233\230", nullptr));

        label_4->setText(QApplication::translate("move_widget", "\345\205\263\350\212\202\351\200\237\345\272\246", nullptr));
        label_5->setText(QApplication::translate("move_widget", "\345\205\263\350\212\202\345\212\240\351\200\237", nullptr));
        label_6->setText(QApplication::translate("move_widget", "\302\260/s", nullptr));
        label_7->setText(QApplication::translate("move_widget", "\302\260/s^2", nullptr));
        btn_resert->setText(QApplication::translate("move_widget", "\351\207\215\347\275\256", nullptr));
        label_8->setText(QApplication::translate("move_widget", "mm/s", nullptr));
        label_9->setText(QApplication::translate("move_widget", "mm/s^2", nullptr));
        label_10->setText(QApplication::translate("move_widget", "\345\267\245\345\205\267\345\212\240\351\200\237", nullptr));
        label_11->setText(QApplication::translate("move_widget", "\345\267\245\345\205\267\351\200\237\345\272\246", nullptr));
        btn_resert_l->setText(QApplication::translate("move_widget", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class move_widget: public Ui_move_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVE_WIDGET_H
