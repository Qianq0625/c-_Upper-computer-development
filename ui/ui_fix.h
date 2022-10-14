/********************************************************************************
** Form generated from reading UI file 'fix.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIX_H
#define UI_FIX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "lineeditinput.h"

QT_BEGIN_NAMESPACE

class Ui_Fix
{
public:
    QLabel *label;
    QWidget *widget_show;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_xz;
    QLabel *label_xy;
    QWidget *page_2;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *set_btn;
    QPushButton *set_btn_2;
    QPushButton *set_btn_3;
    QPushButton *set_btn_4;
    QPushButton *set_sure;
    QPushButton *set_scancle;
    QLabel *label_8;
    QWidget *page_3;
    QPushButton *set_btn_zt;
    QLabel *label_9;
    QPushButton *set_btn_zt2;
    QPushButton *set_sure_zt;
    QPushButton *set_scancle_zt;
    QGroupBox *groupBox;
    LineEditInput *y_lineEdit;
    QLabel *y_lable;
    LineEditInput *rx_lineEdit;
    QLabel *label_5;
    QPushButton *pose_btn;
    QPushButton *reset_btn;
    QLabel *z_lable;
    LineEditInput *x_lineEdit;
    LineEditInput *ry_lineEdit;
    QLabel *rz_label;
    QLabel *x_lable;
    LineEditInput *z_lineEdit;
    QLabel *label_3;
    QPushButton *fx_btn;
    QLabel *label_4;
    QPushButton *new_btn;
    QComboBox *tcp_combox;
    QLabel *ry_label;
    QLabel *label_2;
    LineEditInput *rz_lineEdit;
    QLabel *rx_label;
    QPushButton *delet_btn;

    void setupUi(QWidget *Fix)
    {
        if (Fix->objectName().isEmpty())
            Fix->setObjectName(QStringLiteral("Fix"));
        Fix->resize(1020, 560);
        label = new QLabel(Fix);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 20, 261, 41));
        label->setStyleSheet(QStringLiteral("font: 27pt \"Ubuntu\";"));
        widget_show = new QWidget(Fix);
        widget_show->setObjectName(QStringLiteral("widget_show"));
        widget_show->setGeometry(QRect(500, 90, 460, 451));
        stackedWidget = new QStackedWidget(widget_show);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 441, 431));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_xz = new QLabel(page);
        label_xz->setObjectName(QStringLiteral("label_xz"));
        label_xz->setGeometry(QRect(90, 270, 311, 121));
        label_xz->setFrameShape(QFrame::Box);
        label_xy = new QLabel(page);
        label_xy->setObjectName(QStringLiteral("label_xy"));
        label_xy->setGeometry(QRect(160, 40, 231, 161));
        label_xy->setFrameShape(QFrame::Box);
        label_xy->setTextFormat(Qt::AutoText);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 10, 121, 31));
        label_6->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 50, 211, 17));
        set_btn = new QPushButton(page_2);
        set_btn->setObjectName(QStringLiteral("set_btn"));
        set_btn->setGeometry(QRect(150, 140, 201, 41));
        set_btn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        set_btn_2 = new QPushButton(page_2);
        set_btn_2->setObjectName(QStringLiteral("set_btn_2"));
        set_btn_2->setGeometry(QRect(150, 200, 201, 41));
        set_btn_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        set_btn_3 = new QPushButton(page_2);
        set_btn_3->setObjectName(QStringLiteral("set_btn_3"));
        set_btn_3->setGeometry(QRect(150, 260, 201, 41));
        set_btn_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        set_btn_4 = new QPushButton(page_2);
        set_btn_4->setObjectName(QStringLiteral("set_btn_4"));
        set_btn_4->setGeometry(QRect(150, 320, 201, 41));
        set_btn_4->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        set_sure = new QPushButton(page_2);
        set_sure->setObjectName(QStringLiteral("set_sure"));
        set_sure->setGeometry(QRect(100, 390, 101, 41));
        set_sure->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../RELEASE/image/yes.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_sure->setIcon(icon);
        set_scancle = new QPushButton(page_2);
        set_scancle->setObjectName(QStringLiteral("set_scancle"));
        set_scancle->setGeometry(QRect(310, 390, 101, 41));
        set_scancle->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../RELEASE/image/cac.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_scancle->setIcon(icon1);
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 90, 141, 17));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        set_btn_zt = new QPushButton(page_3);
        set_btn_zt->setObjectName(QStringLiteral("set_btn_zt"));
        set_btn_zt->setGeometry(QRect(140, 140, 201, 41));
        set_btn_zt->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 80, 151, 17));
        set_btn_zt2 = new QPushButton(page_3);
        set_btn_zt2->setObjectName(QStringLiteral("set_btn_zt2"));
        set_btn_zt2->setGeometry(QRect(140, 200, 201, 41));
        set_btn_zt2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        set_sure_zt = new QPushButton(page_3);
        set_sure_zt->setObjectName(QStringLiteral("set_sure_zt"));
        set_sure_zt->setGeometry(QRect(90, 280, 101, 41));
        set_sure_zt->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        set_sure_zt->setIcon(icon);
        set_scancle_zt = new QPushButton(page_3);
        set_scancle_zt->setObjectName(QStringLiteral("set_scancle_zt"));
        set_scancle_zt->setGeometry(QRect(300, 280, 101, 41));
        set_scancle_zt->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        set_scancle_zt->setIcon(icon1);
        stackedWidget->addWidget(page_3);
        groupBox = new QGroupBox(Fix);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 80, 461, 461));
        y_lineEdit = new LineEditInput(groupBox);
        y_lineEdit->setObjectName(QStringLiteral("y_lineEdit"));
        y_lineEdit->setGeometry(QRect(70, 180, 61, 25));
        y_lineEdit->setInputMethodHints(Qt::ImhPreferNumbers);
        y_lable = new QLabel(groupBox);
        y_lable->setObjectName(QStringLiteral("y_lable"));
        y_lable->setGeometry(QRect(50, 180, 16, 31));
        rx_lineEdit = new LineEditInput(groupBox);
        rx_lineEdit->setObjectName(QStringLiteral("rx_lineEdit"));
        rx_lineEdit->setGeometry(QRect(70, 260, 81, 25));
        rx_lineEdit->setInputMethodHints(Qt::ImhPreferNumbers);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 220, 31, 21));
        pose_btn = new QPushButton(groupBox);
        pose_btn->setObjectName(QStringLiteral("pose_btn"));
        pose_btn->setGeometry(QRect(250, 180, 141, 25));
        pose_btn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../RELEASE/image/pose.png"), QSize(), QIcon::Normal, QIcon::Off);
        pose_btn->setIcon(icon2);
        reset_btn = new QPushButton(groupBox);
        reset_btn->setObjectName(QStringLiteral("reset_btn"));
        reset_btn->setGeometry(QRect(250, 100, 141, 25));
        reset_btn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        z_lable = new QLabel(groupBox);
        z_lable->setObjectName(QStringLiteral("z_lable"));
        z_lable->setGeometry(QRect(50, 220, 16, 31));
        x_lineEdit = new LineEditInput(groupBox);
        x_lineEdit->setObjectName(QStringLiteral("x_lineEdit"));
        x_lineEdit->setGeometry(QRect(70, 140, 61, 25));
        x_lineEdit->setInputMethodHints(Qt::ImhPreferNumbers);
        ry_lineEdit = new LineEditInput(groupBox);
        ry_lineEdit->setObjectName(QStringLiteral("ry_lineEdit"));
        ry_lineEdit->setGeometry(QRect(70, 300, 81, 25));
        ry_lineEdit->setInputMethodHints(Qt::ImhPreferNumbers);
        rz_label = new QLabel(groupBox);
        rz_label->setObjectName(QStringLiteral("rz_label"));
        rz_label->setGeometry(QRect(50, 336, 20, 31));
        x_lable = new QLabel(groupBox);
        x_lable->setObjectName(QStringLiteral("x_lable"));
        x_lable->setGeometry(QRect(49, 140, 16, 31));
        z_lineEdit = new LineEditInput(groupBox);
        z_lineEdit->setObjectName(QStringLiteral("z_lineEdit"));
        z_lineEdit->setGeometry(QRect(70, 220, 61, 25));
        z_lineEdit->setInputMethodHints(Qt::ImhPreferNumbers);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 140, 31, 21));
        fx_btn = new QPushButton(groupBox);
        fx_btn->setObjectName(QStringLiteral("fx_btn"));
        fx_btn->setGeometry(QRect(250, 220, 141, 25));
        fx_btn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../RELEASE/image/fx.png"), QSize(), QIcon::Normal, QIcon::Off);
        fx_btn->setIcon(icon3);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 180, 31, 21));
        new_btn = new QPushButton(groupBox);
        new_btn->setObjectName(QStringLiteral("new_btn"));
        new_btn->setGeometry(QRect(250, 300, 141, 25));
        new_btn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../RELEASE/image/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        new_btn->setIcon(icon4);
        tcp_combox = new QComboBox(groupBox);
        tcp_combox->setObjectName(QStringLiteral("tcp_combox"));
        tcp_combox->setGeometry(QRect(40, 100, 131, 25));
        ry_label = new QLabel(groupBox);
        ry_label->setObjectName(QStringLiteral("ry_label"));
        ry_label->setGeometry(QRect(50, 296, 20, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 71, 21));
        rz_lineEdit = new LineEditInput(groupBox);
        rz_lineEdit->setObjectName(QStringLiteral("rz_lineEdit"));
        rz_lineEdit->setGeometry(QRect(70, 340, 81, 25));
        rz_lineEdit->setInputMethodHints(Qt::ImhPreferNumbers);
        rx_label = new QLabel(groupBox);
        rx_label->setObjectName(QStringLiteral("rx_label"));
        rx_label->setGeometry(QRect(50, 260, 16, 31));
        delet_btn = new QPushButton(groupBox);
        delet_btn->setObjectName(QStringLiteral("delet_btn"));
        delet_btn->setGeometry(QRect(250, 340, 141, 25));
        delet_btn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../RELEASE/image/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        delet_btn->setIcon(icon5);
        groupBox->raise();
        label->raise();
        widget_show->raise();

        retranslateUi(Fix);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Fix);
    } // setupUi

    void retranslateUi(QWidget *Fix)
    {
        Fix->setWindowTitle(QApplication::translate("Fix", "Form", nullptr));
        label->setText(QApplication::translate("Fix", "\350\256\276\347\275\256\345\267\245\345\205\267\344\270\255\345\277\203\347\202\271", nullptr));
        label_xz->setText(QString());
        label_xy->setText(QString());
        label_6->setText(QApplication::translate("Fix", "\347\244\272\346\225\231TCP\344\275\215\347\275\256", nullptr));
        label_7->setText(QApplication::translate("Fix", "\344\273\216\344\270\215\345\220\214\350\247\222\345\272\246\345\260\206TCP\347\247\273\350\207\263\345\220\214\344\270\200\344\275\215\347\275\256", nullptr));
        set_btn->setText(QApplication::translate("Fix", "\350\256\276\347\275\256\347\202\271\357\274\221", nullptr));
        set_btn_2->setText(QApplication::translate("Fix", "\350\256\276\347\275\256\347\202\2712", nullptr));
        set_btn_3->setText(QApplication::translate("Fix", "\350\256\276\347\275\256\347\202\2713", nullptr));
        set_btn_4->setText(QApplication::translate("Fix", "\350\256\276\347\275\256\347\202\2714", nullptr));
        set_sure->setText(QApplication::translate("Fix", "\350\256\276\347\275\256", nullptr));
        set_scancle->setText(QApplication::translate("Fix", "\345\217\226\346\266\210", nullptr));
        label_8->setText(QString());
        set_btn_zt->setText(QApplication::translate("Fix", "\350\256\276\347\275\256\347\202\271\357\274\221", nullptr));
        label_9->setText(QApplication::translate("Fix", "\351\200\211\344\270\255\347\211\271\345\276\201\345\247\277\346\200\201\345\244\232\346\240\267\346\200\247", nullptr));
        set_btn_zt2->setText(QApplication::translate("Fix", "\350\256\276\347\275\256\347\202\2712", nullptr));
        set_sure_zt->setText(QApplication::translate("Fix", "\350\256\276\347\275\256", nullptr));
        set_scancle_zt->setText(QApplication::translate("Fix", "\345\217\226\346\266\210", nullptr));
        groupBox->setTitle(QString());
        y_lable->setText(QApplication::translate("Fix", "Y", nullptr));
        label_5->setText(QApplication::translate("Fix", "mm", nullptr));
        pose_btn->setText(QApplication::translate("Fix", "\344\275\215\347\275\256", nullptr));
        reset_btn->setText(QApplication::translate("Fix", "\351\207\215\350\256\276", nullptr));
        z_lable->setText(QApplication::translate("Fix", "Z", nullptr));
        rz_label->setText(QApplication::translate("Fix", "Rz", nullptr));
        x_lable->setText(QApplication::translate("Fix", "X", nullptr));
        label_3->setText(QApplication::translate("Fix", "mm", nullptr));
        fx_btn->setText(QApplication::translate("Fix", "\346\226\271\345\220\221", nullptr));
        label_4->setText(QApplication::translate("Fix", "mm", nullptr));
        new_btn->setText(QApplication::translate("Fix", "\346\226\260\345\273\272", nullptr));
        ry_label->setText(QApplication::translate("Fix", "Ry", nullptr));
        label_2->setText(QApplication::translate("Fix", "\345\217\257\347\224\250TCP:", nullptr));
        rx_label->setText(QApplication::translate("Fix", "Rx", nullptr));
        delet_btn->setText(QApplication::translate("Fix", "\347\247\273\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Fix: public Ui_Fix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIX_H
