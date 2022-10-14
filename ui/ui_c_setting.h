/********************************************************************************
** Form generated from reading UI file 'c_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_C_SETTING_H
#define UI_C_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_C_Setting
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *power_motor;
    QPushButton *start_btn;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_4;
    QComboBox *clsDet_BaseOn_Current_2;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *lineEdit_x;
    QLineEdit *lineEdit_y;
    QLineEdit *lineEdit_z;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QGroupBox *groupBox_5;
    QComboBox *clsDet_BaseOn_Current;
    QCheckBox *checkBox;
    QGroupBox *groupBox_6;
    QLabel *label_12;
    QLineEdit *lineEdit;
    QLabel *label_19;
    QGroupBox *groupBox_3;
    QPushButton *develpoer_btn;

    void setupUi(QWidget *C_Setting)
    {
        if (C_Setting->objectName().isEmpty())
            C_Setting->setObjectName(QStringLiteral("C_Setting"));
        C_Setting->resize(1020, 560);
        groupBox = new QGroupBox(C_Setting);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 261, 331));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 101, 31));
        power_motor = new QPushButton(groupBox);
        power_motor->setObjectName(QStringLiteral("power_motor"));
        power_motor->setGeometry(QRect(20, 90, 201, 51));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setPointSize(15);
        font.setItalic(false);
        font.setKerning(true);
        power_motor->setFont(font);
        power_motor->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../image/pow.png"), QSize(), QIcon::Normal, QIcon::Off);
        power_motor->setIcon(icon);
        power_motor->setIconSize(QSize(28, 28));
        power_motor->setFlat(false);
        start_btn = new QPushButton(groupBox);
        start_btn->setObjectName(QStringLiteral("start_btn"));
        start_btn->setGeometry(QRect(20, 220, 201, 51));
        QFont font1;
        font1.setPointSize(15);
        start_btn->setFont(font1);
        start_btn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../image/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        start_btn->setIcon(icon1);
        start_btn->setIconSize(QSize(28, 28));
        groupBox_2 = new QGroupBox(C_Setting);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(400, 30, 481, 501));
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(80, 30, 321, 161));
        clsDet_BaseOn_Current_2 = new QComboBox(groupBox_4);
        clsDet_BaseOn_Current_2->addItem(QString());
        clsDet_BaseOn_Current_2->addItem(QString());
        clsDet_BaseOn_Current_2->addItem(QString());
        clsDet_BaseOn_Current_2->addItem(QString());
        clsDet_BaseOn_Current_2->setObjectName(QStringLiteral("clsDet_BaseOn_Current_2"));
        clsDet_BaseOn_Current_2->setEnabled(true);
        clsDet_BaseOn_Current_2->setGeometry(QRect(20, 70, 81, 41));
        clsDet_BaseOn_Current_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        clsDet_BaseOn_Current_2->setInputMethodHints(Qt::ImhNone);
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 120, 21, 20));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 80, 21, 20));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 40, 21, 20));
        lineEdit_x = new QLineEdit(groupBox_4);
        lineEdit_x->setObjectName(QStringLiteral("lineEdit_x"));
        lineEdit_x->setGeometry(QRect(180, 40, 71, 25));
        lineEdit_x->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        lineEdit_x->setFrame(false);
        lineEdit_y = new QLineEdit(groupBox_4);
        lineEdit_y->setObjectName(QStringLiteral("lineEdit_y"));
        lineEdit_y->setGeometry(QRect(180, 80, 71, 25));
        lineEdit_y->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        lineEdit_y->setFrame(false);
        lineEdit_y->setEchoMode(QLineEdit::Normal);
        lineEdit_z = new QLineEdit(groupBox_4);
        lineEdit_z->setObjectName(QStringLiteral("lineEdit_z"));
        lineEdit_z->setGeometry(QRect(180, 120, 71, 25));
        lineEdit_z->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        lineEdit_z->setFrame(false);
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(260, 30, 31, 21));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(260, 70, 31, 21));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(260, 110, 31, 21));
        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(80, 210, 321, 161));
        clsDet_BaseOn_Current = new QComboBox(groupBox_5);
        clsDet_BaseOn_Current->addItem(QString());
        clsDet_BaseOn_Current->addItem(QString());
        clsDet_BaseOn_Current->addItem(QString());
        clsDet_BaseOn_Current->addItem(QString());
        clsDet_BaseOn_Current->addItem(QString());
        clsDet_BaseOn_Current->addItem(QString());
        clsDet_BaseOn_Current->setObjectName(QStringLiteral("clsDet_BaseOn_Current"));
        clsDet_BaseOn_Current->setGeometry(QRect(170, 70, 101, 41));
        clsDet_BaseOn_Current->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        checkBox = new QCheckBox(groupBox_5);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setEnabled(true);
        checkBox->setGeometry(QRect(30, 60, 91, 61));
        checkBox->setChecked(false);
        groupBox_6 = new QGroupBox(groupBox_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(80, 390, 321, 81));
        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 40, 41, 21));
        lineEdit = new QLineEdit(groupBox_6);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 40, 71, 25));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        lineEdit->setFrame(false);
        label_19 = new QLabel(groupBox_6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(240, 40, 21, 21));
        groupBox_3 = new QGroupBox(C_Setting);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 400, 251, 111));
        develpoer_btn = new QPushButton(groupBox_3);
        develpoer_btn->setObjectName(QStringLiteral("develpoer_btn"));
        develpoer_btn->setGeometry(QRect(10, 40, 201, 51));
        develpoer_btn->setFont(font1);
        develpoer_btn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../image/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        develpoer_btn->setIcon(icon2);
        develpoer_btn->setIconSize(QSize(28, 28));

        retranslateUi(C_Setting);

        QMetaObject::connectSlotsByName(C_Setting);
    } // setupUi

    void retranslateUi(QWidget *C_Setting)
    {
        C_Setting->setWindowTitle(QApplication::translate("C_Setting", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        C_Setting->setToolTip(QApplication::translate("C_Setting", "<html><head/><body><p><span style=\" font-style:italic;\">\345\274\200\345\217\221\350\200\205\346\250\241\345\274\217</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("C_Setting", "<html><head/><body><p><span style=\" font-size:12pt; color:#000000;\">\347\263\273\347\273\237\350\256\276\347\275\256\357\274\232</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        power_motor->setToolTip(QApplication::translate("C_Setting", "<html><head/><body><p><span style=\" font-style:italic;\">\347\224\265\346\272\220</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        power_motor->setText(QApplication::translate("C_Setting", "\347\224\265\346\272\220", nullptr));
#ifndef QT_NO_TOOLTIP
        start_btn->setToolTip(QApplication::translate("C_Setting", "<html><head/><body><p><span style=\" font-style:italic;\">\345\274\200\346\234\272</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        start_btn->setText(QApplication::translate("C_Setting", "\345\274\200\346\234\272", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_2->setToolTip(QApplication::translate("C_Setting", "<html><head/><body><p><span style=\" font-style:italic;\">\347\242\260\346\222\236\347\255\211\347\272\247</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QApplication::translate("C_Setting", "\345\212\237\350\203\275\345\214\272", nullptr));
        groupBox_4->setTitle(QApplication::translate("C_Setting", "\345\256\211\350\243\205\346\226\271\345\274\217", nullptr));
        clsDet_BaseOn_Current_2->setItemText(0, QApplication::translate("C_Setting", "\346\255\243\350\243\205", nullptr));
        clsDet_BaseOn_Current_2->setItemText(1, QApplication::translate("C_Setting", "\345\200\222\350\243\205", nullptr));
        clsDet_BaseOn_Current_2->setItemText(2, QApplication::translate("C_Setting", "\344\276\247\350\243\205", nullptr));
        clsDet_BaseOn_Current_2->setItemText(3, QApplication::translate("C_Setting", "\350\207\252\345\256\232\344\271\211", nullptr));

#ifndef QT_NO_TOOLTIP
        clsDet_BaseOn_Current_2->setToolTip(QApplication::translate("C_Setting", "<html><head/><body><p><span style=\" font-style:italic;\">\345\256\211\350\243\205\346\226\271\345\274\217</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("C_Setting", "RZ", nullptr));
        label_5->setText(QApplication::translate("C_Setting", "RY", nullptr));
        label_4->setText(QApplication::translate("C_Setting", "RX", nullptr));
        lineEdit_x->setText(QApplication::translate("C_Setting", "0", nullptr));
        lineEdit_y->setText(QApplication::translate("C_Setting", "0", nullptr));
        lineEdit_z->setText(QApplication::translate("C_Setting", "0", nullptr));
        label_8->setText(QApplication::translate("C_Setting", "o", nullptr));
        label_9->setText(QApplication::translate("C_Setting", "o", nullptr));
        label_10->setText(QApplication::translate("C_Setting", "o", nullptr));
        groupBox_5->setTitle(QApplication::translate("C_Setting", "\347\242\260\346\222\236\345\212\237\350\203\275", nullptr));
        clsDet_BaseOn_Current->setItemText(0, QApplication::translate("C_Setting", "\351\200\211\346\213\251\347\255\211\347\272\247", nullptr));
        clsDet_BaseOn_Current->setItemText(1, QApplication::translate("C_Setting", "\347\255\211\347\272\2471", nullptr));
        clsDet_BaseOn_Current->setItemText(2, QApplication::translate("C_Setting", "\347\255\211\347\272\2472", nullptr));
        clsDet_BaseOn_Current->setItemText(3, QApplication::translate("C_Setting", "\347\255\211\347\272\2473", nullptr));
        clsDet_BaseOn_Current->setItemText(4, QApplication::translate("C_Setting", "\347\255\211\347\272\2474", nullptr));
        clsDet_BaseOn_Current->setItemText(5, QApplication::translate("C_Setting", "\347\255\211\347\272\2475", nullptr));

        checkBox->setText(QApplication::translate("C_Setting", "\347\242\260\346\222\236\345\274\200\345\205\263", nullptr));
        groupBox_6->setTitle(QApplication::translate("C_Setting", "\350\264\237\350\275\275\351\207\215\351\207\217", nullptr));
        label_12->setText(QApplication::translate("C_Setting", "\350\264\237\350\275\275:", nullptr));
        label_19->setText(QApplication::translate("C_Setting", "KG", nullptr));
        groupBox_3->setTitle(QApplication::translate("C_Setting", "\347\224\250\346\210\267\346\250\241\345\274\217", nullptr));
        develpoer_btn->setText(QApplication::translate("C_Setting", "\345\274\200\345\217\221\350\200\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class C_Setting: public Ui_C_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C_SETTING_H
