/********************************************************************************
** Form generated from reading UI file 'waitset.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITSET_H
#define UI_WAITSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_waitSet
{
public:
    QGroupBox *groupBox;
    QLabel *label_3;
    QRadioButton *waitNoRB;
    QRadioButton *waitTimeRB;
    QPushButton *time_sub;
    QLineEdit *WaitTimeLE;
    QLabel *label_4;
    QPushButton *time_add;
    QRadioButton *waitDigitalInputRB;
    QComboBox *digitalinputIndex_waitCB;
    QComboBox *digitalInputStatus_waitCB;
    QComboBox *comboBox_4;
    QRadioButton *radioButton_4;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit_3;
    QLabel *label_5;

    void setupUi(QWidget *waitSet)
    {
        if (waitSet->objectName().isEmpty())
            waitSet->setObjectName(QStringLiteral("waitSet"));
        waitSet->resize(720, 390);
        groupBox = new QGroupBox(waitSet);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 20, 521, 311));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 50, 441, 17));
        waitNoRB = new QRadioButton(groupBox);
        waitNoRB->setObjectName(QStringLiteral("waitNoRB"));
        waitNoRB->setGeometry(QRect(30, 90, 112, 23));
        waitNoRB->setCheckable(true);
        waitNoRB->setChecked(false);
        waitTimeRB = new QRadioButton(groupBox);
        waitTimeRB->setObjectName(QStringLiteral("waitTimeRB"));
        waitTimeRB->setGeometry(QRect(30, 140, 61, 23));
        waitTimeRB->setChecked(true);
        time_sub = new QPushButton(groupBox);
        time_sub->setObjectName(QStringLiteral("time_sub"));
        time_sub->setGeometry(QRect(120, 140, 61, 25));
        time_sub->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        WaitTimeLE = new QLineEdit(groupBox);
        WaitTimeLE->setObjectName(QStringLiteral("WaitTimeLE"));
        WaitTimeLE->setGeometry(QRect(280, 140, 41, 25));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 140, 21, 21));
        time_add = new QPushButton(groupBox);
        time_add->setObjectName(QStringLiteral("time_add"));
        time_add->setGeometry(QRect(200, 140, 61, 25));
        time_add->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        waitDigitalInputRB = new QRadioButton(groupBox);
        waitDigitalInputRB->setObjectName(QStringLiteral("waitDigitalInputRB"));
        waitDigitalInputRB->setGeometry(QRect(30, 190, 112, 23));
        digitalinputIndex_waitCB = new QComboBox(groupBox);
        digitalinputIndex_waitCB->addItem(QString());
        digitalinputIndex_waitCB->addItem(QString());
        digitalinputIndex_waitCB->addItem(QString());
        digitalinputIndex_waitCB->addItem(QString());
        digitalinputIndex_waitCB->addItem(QString());
        digitalinputIndex_waitCB->addItem(QString());
        digitalinputIndex_waitCB->addItem(QString());
        digitalinputIndex_waitCB->addItem(QString());
        digitalinputIndex_waitCB->addItem(QString());
        digitalinputIndex_waitCB->addItem(QString());
        digitalinputIndex_waitCB->addItem(QString());
        digitalinputIndex_waitCB->addItem(QString());
        digitalinputIndex_waitCB->addItem(QString());
        digitalinputIndex_waitCB->addItem(QString());
        digitalinputIndex_waitCB->setObjectName(QStringLiteral("digitalinputIndex_waitCB"));
        digitalinputIndex_waitCB->setGeometry(QRect(170, 190, 171, 25));
        digitalinputIndex_waitCB->setEditable(false);
        digitalInputStatus_waitCB = new QComboBox(groupBox);
        digitalInputStatus_waitCB->addItem(QString());
        digitalInputStatus_waitCB->addItem(QString());
        digitalInputStatus_waitCB->addItem(QString());
        digitalInputStatus_waitCB->setObjectName(QStringLiteral("digitalInputStatus_waitCB"));
        digitalInputStatus_waitCB->setGeometry(QRect(360, 190, 131, 25));
        digitalInputStatus_waitCB->setEditable(false);
        comboBox_4 = new QComboBox(groupBox);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(170, 230, 151, 25));
        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(30, 240, 61, 23));
        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(330, 230, 41, 25));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(390, 230, 41, 25));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(440, 230, 67, 21));

        retranslateUi(waitSet);

        digitalinputIndex_waitCB->setCurrentIndex(0);
        digitalInputStatus_waitCB->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(waitSet);
    } // setupUi

    void retranslateUi(QWidget *waitSet)
    {
        waitSet->setWindowTitle(QApplication::translate("waitSet", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("waitSet", "\347\255\211\345\276\205\345\212\237\350\203\275\350\256\276\347\275\256", nullptr));
        label_3->setText(QApplication::translate("waitSet", "\350\257\267\351\200\211\346\213\251\350\247\246\345\217\221\346\234\272\345\231\250\344\272\272\344\270\213\344\270\200\344\270\252\345\212\250\344\275\234\347\232\204\346\226\271\345\274\217", nullptr));
        waitNoRB->setText(QApplication::translate("waitSet", "\344\270\215\347\255\211\345\276\205", nullptr));
        waitTimeRB->setText(QApplication::translate("waitSet", "\347\255\211\345\276\205", nullptr));
        time_sub->setText(QApplication::translate("waitSet", "-", nullptr));
        WaitTimeLE->setText(QApplication::translate("waitSet", "1", nullptr));
        label_4->setText(QApplication::translate("waitSet", "\347\247\222", nullptr));
        time_add->setText(QApplication::translate("waitSet", "+", nullptr));
        waitDigitalInputRB->setText(QApplication::translate("waitSet", "\347\255\211\345\276\205\346\225\260\345\255\227\350\276\223\345\205\245", nullptr));
        digitalinputIndex_waitCB->setItemText(0, QApplication::translate("waitSet", "     <Digital Input>", nullptr));
        digitalinputIndex_waitCB->setItemText(1, QApplication::translate("waitSet", "     digital_input0", nullptr));
        digitalinputIndex_waitCB->setItemText(2, QApplication::translate("waitSet", "     digital_input1", nullptr));
        digitalinputIndex_waitCB->setItemText(3, QApplication::translate("waitSet", "     digital_input2", nullptr));
        digitalinputIndex_waitCB->setItemText(4, QApplication::translate("waitSet", "     digital_input3", nullptr));
        digitalinputIndex_waitCB->setItemText(5, QApplication::translate("waitSet", "     digital_input4", nullptr));
        digitalinputIndex_waitCB->setItemText(6, QApplication::translate("waitSet", "     digital_input5", nullptr));
        digitalinputIndex_waitCB->setItemText(7, QApplication::translate("waitSet", "     digital_input6", nullptr));
        digitalinputIndex_waitCB->setItemText(8, QApplication::translate("waitSet", "     digital_input7", nullptr));
        digitalinputIndex_waitCB->setItemText(9, QApplication::translate("waitSet", "     digital_input8", nullptr));
        digitalinputIndex_waitCB->setItemText(10, QApplication::translate("waitSet", "     digital_input9", nullptr));
        digitalinputIndex_waitCB->setItemText(11, QApplication::translate("waitSet", "     digital_input10", nullptr));
        digitalinputIndex_waitCB->setItemText(12, QApplication::translate("waitSet", "     digital_input11", nullptr));
        digitalinputIndex_waitCB->setItemText(13, QApplication::translate("waitSet", "     digital_input12", nullptr));

        digitalinputIndex_waitCB->setCurrentText(QApplication::translate("waitSet", "     <Digital Input>", nullptr));
        digitalInputStatus_waitCB->setItemText(0, QApplication::translate("waitSet", "        \347\212\266\346\200\201\351\200\211\346\213\251", nullptr));
        digitalInputStatus_waitCB->setItemText(1, QApplication::translate("waitSet", "        \351\253\230", nullptr));
        digitalInputStatus_waitCB->setItemText(2, QApplication::translate("waitSet", "        \344\275\216", nullptr));

        digitalInputStatus_waitCB->setCurrentText(QApplication::translate("waitSet", "        \347\212\266\346\200\201\351\200\211\346\213\251", nullptr));
        radioButton_4->setText(QApplication::translate("waitSet", "\347\255\211\345\276\205", nullptr));
        label_5->setText(QApplication::translate("waitSet", "mA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class waitSet: public Ui_waitSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITSET_H
