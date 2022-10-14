/********************************************************************************
** Form generated from reading UI file 'setio.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETIO_H
#define UI_SETIO_H

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

class Ui_setIo
{
public:
    QGroupBox *groupBox;
    QRadioButton *setNoneRB;
    QComboBox *digitalOutputStatusCB;
    QComboBox *digitalOutputIndexCB;
    QRadioButton *setDigitalOutputRB;
    QLabel *label_5;
    QRadioButton *setAnalogOutputRB;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit_3;
    QPushButton *immediateExecutePB;

    void setupUi(QWidget *setIo)
    {
        if (setIo->objectName().isEmpty())
            setIo->setObjectName(QStringLiteral("setIo"));
        setIo->resize(800, 390);
        groupBox = new QGroupBox(setIo);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 30, 531, 291));
        setNoneRB = new QRadioButton(groupBox);
        setNoneRB->setObjectName(QStringLiteral("setNoneRB"));
        setNoneRB->setGeometry(QRect(20, 60, 89, 16));
        digitalOutputStatusCB = new QComboBox(groupBox);
        digitalOutputStatusCB->addItem(QString());
        digitalOutputStatusCB->addItem(QString());
        digitalOutputStatusCB->addItem(QString());
        digitalOutputStatusCB->setObjectName(QStringLiteral("digitalOutputStatusCB"));
        digitalOutputStatusCB->setGeometry(QRect(320, 110, 151, 25));
        digitalOutputIndexCB = new QComboBox(groupBox);
        digitalOutputIndexCB->addItem(QString());
        digitalOutputIndexCB->addItem(QString());
        digitalOutputIndexCB->addItem(QString());
        digitalOutputIndexCB->addItem(QString());
        digitalOutputIndexCB->addItem(QString());
        digitalOutputIndexCB->addItem(QString());
        digitalOutputIndexCB->addItem(QString());
        digitalOutputIndexCB->addItem(QString());
        digitalOutputIndexCB->addItem(QString());
        digitalOutputIndexCB->addItem(QString());
        digitalOutputIndexCB->addItem(QString());
        digitalOutputIndexCB->addItem(QString());
        digitalOutputIndexCB->addItem(QString());
        digitalOutputIndexCB->addItem(QString());
        digitalOutputIndexCB->setObjectName(QStringLiteral("digitalOutputIndexCB"));
        digitalOutputIndexCB->setGeometry(QRect(140, 110, 171, 25));
        setDigitalOutputRB = new QRadioButton(groupBox);
        setDigitalOutputRB->setObjectName(QStringLiteral("setDigitalOutputRB"));
        setDigitalOutputRB->setGeometry(QRect(20, 110, 112, 23));
        setDigitalOutputRB->setChecked(true);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(350, 170, 67, 21));
        setAnalogOutputRB = new QRadioButton(groupBox);
        setAnalogOutputRB->setObjectName(QStringLiteral("setAnalogOutputRB"));
        setAnalogOutputRB->setGeometry(QRect(20, 170, 111, 23));
        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(150, 170, 101, 25));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(300, 170, 41, 25));
        immediateExecutePB = new QPushButton(groupBox);
        immediateExecutePB->setObjectName(QStringLiteral("immediateExecutePB"));
        immediateExecutePB->setGeometry(QRect(330, 210, 151, 51));
        immediateExecutePB->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));

        retranslateUi(setIo);

        digitalOutputStatusCB->setCurrentIndex(0);
        digitalOutputIndexCB->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(setIo);
    } // setupUi

    void retranslateUi(QWidget *setIo)
    {
        setIo->setWindowTitle(QApplication::translate("setIo", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("setIo", "\346\234\272\345\231\250\344\272\272IO\350\256\276\347\275\256", nullptr));
        setNoneRB->setText(QApplication::translate("setIo", "\346\227\240\345\212\250\344\275\234", nullptr));
        digitalOutputStatusCB->setItemText(0, QApplication::translate("setIo", "        \347\212\266\346\200\201\351\200\211\346\213\251", nullptr));
        digitalOutputStatusCB->setItemText(1, QApplication::translate("setIo", "        \344\275\216", nullptr));
        digitalOutputStatusCB->setItemText(2, QApplication::translate("setIo", "        \351\253\230", nullptr));

        digitalOutputIndexCB->setItemText(0, QApplication::translate("setIo", "    <Digtal Output>", nullptr));
        digitalOutputIndexCB->setItemText(1, QApplication::translate("setIo", "    digital_out0", nullptr));
        digitalOutputIndexCB->setItemText(2, QApplication::translate("setIo", "    digital_out1", nullptr));
        digitalOutputIndexCB->setItemText(3, QApplication::translate("setIo", "    digital_out2", nullptr));
        digitalOutputIndexCB->setItemText(4, QApplication::translate("setIo", "    digital_out3", nullptr));
        digitalOutputIndexCB->setItemText(5, QApplication::translate("setIo", "    digital_out4", nullptr));
        digitalOutputIndexCB->setItemText(6, QApplication::translate("setIo", "    digital_out5", nullptr));
        digitalOutputIndexCB->setItemText(7, QApplication::translate("setIo", "    digital_out6", nullptr));
        digitalOutputIndexCB->setItemText(8, QApplication::translate("setIo", "    digital_out7", nullptr));
        digitalOutputIndexCB->setItemText(9, QApplication::translate("setIo", "    digital_out8", nullptr));
        digitalOutputIndexCB->setItemText(10, QApplication::translate("setIo", "    digital_out9", nullptr));
        digitalOutputIndexCB->setItemText(11, QApplication::translate("setIo", "    digital_out10", nullptr));
        digitalOutputIndexCB->setItemText(12, QApplication::translate("setIo", "    digital_out11", nullptr));
        digitalOutputIndexCB->setItemText(13, QApplication::translate("setIo", "    digital_out12", nullptr));

        setDigitalOutputRB->setText(QApplication::translate("setIo", "\350\256\276\347\275\256\346\225\260\345\255\227\350\276\223\345\207\272", nullptr));
        label_5->setText(QApplication::translate("setIo", "mA", nullptr));
        setAnalogOutputRB->setText(QApplication::translate("setIo", "\350\256\276\347\275\256\346\250\241\346\213\237\350\276\223\345\207\272", nullptr));
        immediateExecutePB->setText(QApplication::translate("setIo", "\347\253\213\345\215\263\346\211\247\350\241\214\345\212\250\344\275\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setIo: public Ui_setIo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETIO_H
