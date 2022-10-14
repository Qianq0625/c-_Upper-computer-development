/********************************************************************************
** Form generated from reading UI file 'keyboard.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARD_H
#define UI_KEYBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KeyBoard
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_zhengfu;
    QPushButton *pushButton_15;
    QPushButton *pushButton_0;
    QPushButton *pushButton_sure;
    QPushButton *pushButton_notsure;
    QPushButton *pushButton_C;
    QPushButton *pushButton_delete;

    void setupUi(QWidget *KeyBoard)
    {
        if (KeyBoard->objectName().isEmpty())
            KeyBoard->setObjectName(QStringLiteral("KeyBoard"));
        KeyBoard->resize(281, 312);
        lineEdit = new QLineEdit(KeyBoard);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 0, 281, 31));
        pushButton = new QPushButton(KeyBoard);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 70, 71, 61));
        pushButton_8 = new QPushButton(KeyBoard);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(70, 70, 71, 61));
        pushButton_9 = new QPushButton(KeyBoard);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(140, 70, 71, 61));
        pushButton_7 = new QPushButton(KeyBoard);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(140, 130, 71, 61));
        pushButton_6 = new QPushButton(KeyBoard);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(70, 130, 71, 61));
        pushButton_5 = new QPushButton(KeyBoard);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 130, 71, 61));
        pushButton_3 = new QPushButton(KeyBoard);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 190, 71, 61));
        pushButton_2 = new QPushButton(KeyBoard);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 190, 71, 61));
        pushButton_1 = new QPushButton(KeyBoard);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 190, 71, 61));
        pushButton_zhengfu = new QPushButton(KeyBoard);
        pushButton_zhengfu->setObjectName(QStringLiteral("pushButton_zhengfu"));
        pushButton_zhengfu->setGeometry(QRect(140, 250, 71, 61));
        pushButton_15 = new QPushButton(KeyBoard);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(70, 250, 71, 61));
        pushButton_0 = new QPushButton(KeyBoard);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(0, 250, 71, 61));
        pushButton_sure = new QPushButton(KeyBoard);
        pushButton_sure->setObjectName(QStringLiteral("pushButton_sure"));
        pushButton_sure->setGeometry(QRect(210, 70, 71, 121));
        QIcon icon;
        icon.addFile(QStringLiteral("../../RELEASE/image/yes.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sure->setIcon(icon);
        pushButton_notsure = new QPushButton(KeyBoard);
        pushButton_notsure->setObjectName(QStringLiteral("pushButton_notsure"));
        pushButton_notsure->setGeometry(QRect(210, 190, 71, 121));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../RELEASE/image/cac.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_notsure->setIcon(icon1);
        pushButton_C = new QPushButton(KeyBoard);
        pushButton_C->setObjectName(QStringLiteral("pushButton_C"));
        pushButton_C->setGeometry(QRect(0, 30, 141, 41));
        pushButton_delete = new QPushButton(KeyBoard);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(140, 30, 141, 41));

        retranslateUi(KeyBoard);

        QMetaObject::connectSlotsByName(KeyBoard);
    } // setupUi

    void retranslateUi(QWidget *KeyBoard)
    {
        KeyBoard->setWindowTitle(QApplication::translate("KeyBoard", "Form", nullptr));
        pushButton->setText(QApplication::translate("KeyBoard", "7", nullptr));
        pushButton_8->setText(QApplication::translate("KeyBoard", "8", nullptr));
        pushButton_9->setText(QApplication::translate("KeyBoard", "9", nullptr));
        pushButton_7->setText(QApplication::translate("KeyBoard", "6", nullptr));
        pushButton_6->setText(QApplication::translate("KeyBoard", "5", nullptr));
        pushButton_5->setText(QApplication::translate("KeyBoard", "4", nullptr));
        pushButton_3->setText(QApplication::translate("KeyBoard", "3", nullptr));
        pushButton_2->setText(QApplication::translate("KeyBoard", "2", nullptr));
        pushButton_1->setText(QApplication::translate("KeyBoard", "1", nullptr));
        pushButton_zhengfu->setText(QApplication::translate("KeyBoard", "+/-", nullptr));
        pushButton_15->setText(QApplication::translate("KeyBoard", ".", nullptr));
        pushButton_0->setText(QApplication::translate("KeyBoard", "0", nullptr));
        pushButton_sure->setText(QString());
        pushButton_notsure->setText(QString());
        pushButton_C->setText(QApplication::translate("KeyBoard", "C", nullptr));
        pushButton_delete->setText(QApplication::translate("KeyBoard", "<<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KeyBoard: public Ui_KeyBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARD_H
