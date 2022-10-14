/********************************************************************************
** Form generated from reading UI file 'waypoint.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAYPOINT_H
#define UI_WAYPOINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wayPoint
{
public:
    QPushButton *vel_sub;
    QLabel *label;
    QLineEdit *velocityLE;
    QGroupBox *groupBox_2;
    QPushButton *bu_run_point;
    QPushButton *pushButton;
    QLabel *label_5;
    QPushButton *vel_add;
    QGroupBox *groupBox;
    QLineEdit *robot_joint1;
    QLineEdit *robot_joint2;
    QLineEdit *robot_joint3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *robot_joint5;
    QLineEdit *robot_joint6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *robot_joint4;

    void setupUi(QWidget *wayPoint)
    {
        if (wayPoint->objectName().isEmpty())
            wayPoint->setObjectName(QStringLiteral("wayPoint"));
        wayPoint->resize(720, 390);
        vel_sub = new QPushButton(wayPoint);
        vel_sub->setObjectName(QStringLiteral("vel_sub"));
        vel_sub->setGeometry(QRect(190, 320, 61, 31));
        vel_sub->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label = new QLabel(wayPoint);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 320, 101, 41));
        velocityLE = new QLineEdit(wayPoint);
        velocityLE->setObjectName(QStringLiteral("velocityLE"));
        velocityLE->setGeometry(QRect(270, 320, 51, 30));
        velocityLE->setReadOnly(true);
        groupBox_2 = new QGroupBox(wayPoint);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(70, 20, 501, 101));
        bu_run_point = new QPushButton(groupBox_2);
        bu_run_point->setObjectName(QStringLiteral("bu_run_point"));
        bu_run_point->setGeometry(QRect(350, 30, 111, 61));
        bu_run_point->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 30, 101, 61));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_5 = new QLabel(wayPoint);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(330, 330, 21, 16));
        vel_add = new QPushButton(wayPoint);
        vel_add->setObjectName(QStringLiteral("vel_add"));
        vel_add->setGeometry(QRect(360, 320, 61, 31));
        vel_add->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        groupBox = new QGroupBox(wayPoint);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 140, 511, 151));
        robot_joint1 = new QLineEdit(groupBox);
        robot_joint1->setObjectName(QStringLiteral("robot_joint1"));
        robot_joint1->setGeometry(QRect(80, 40, 81, 31));
        robot_joint1->setMinimumSize(QSize(50, 20));
        QFont font;
        font.setPointSize(11);
        robot_joint1->setFont(font);
        robot_joint1->setAlignment(Qt::AlignCenter);
        robot_joint1->setReadOnly(true);
        robot_joint2 = new QLineEdit(groupBox);
        robot_joint2->setObjectName(QStringLiteral("robot_joint2"));
        robot_joint2->setGeometry(QRect(240, 40, 81, 31));
        robot_joint2->setMinimumSize(QSize(50, 20));
        robot_joint2->setFont(font);
        robot_joint2->setAlignment(Qt::AlignCenter);
        robot_joint2->setReadOnly(true);
        robot_joint3 = new QLineEdit(groupBox);
        robot_joint3->setObjectName(QStringLiteral("robot_joint3"));
        robot_joint3->setGeometry(QRect(400, 40, 81, 31));
        robot_joint3->setMinimumSize(QSize(50, 20));
        robot_joint3->setFont(font);
        robot_joint3->setAlignment(Qt::AlignCenter);
        robot_joint3->setReadOnly(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 51, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 50, 51, 17));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(340, 50, 51, 17));
        robot_joint5 = new QLineEdit(groupBox);
        robot_joint5->setObjectName(QStringLiteral("robot_joint5"));
        robot_joint5->setGeometry(QRect(240, 100, 81, 31));
        robot_joint5->setMinimumSize(QSize(50, 20));
        robot_joint5->setFont(font);
        robot_joint5->setAlignment(Qt::AlignCenter);
        robot_joint5->setReadOnly(true);
        robot_joint6 = new QLineEdit(groupBox);
        robot_joint6->setObjectName(QStringLiteral("robot_joint6"));
        robot_joint6->setGeometry(QRect(400, 100, 81, 31));
        robot_joint6->setMinimumSize(QSize(50, 20));
        robot_joint6->setFont(font);
        robot_joint6->setAlignment(Qt::AlignCenter);
        robot_joint6->setReadOnly(true);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(180, 110, 51, 17));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(340, 110, 51, 17));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 110, 51, 17));
        robot_joint4 = new QLineEdit(groupBox);
        robot_joint4->setObjectName(QStringLiteral("robot_joint4"));
        robot_joint4->setGeometry(QRect(80, 100, 81, 31));
        robot_joint4->setMinimumSize(QSize(50, 20));
        robot_joint4->setFont(font);
        robot_joint4->setAlignment(Qt::AlignCenter);
        robot_joint4->setReadOnly(true);

        retranslateUi(wayPoint);

        QMetaObject::connectSlotsByName(wayPoint);
    } // setupUi

    void retranslateUi(QWidget *wayPoint)
    {
        wayPoint->setWindowTitle(QApplication::translate("wayPoint", "Form", nullptr));
        vel_sub->setText(QApplication::translate("wayPoint", "-", nullptr));
        label->setText(QApplication::translate("wayPoint", "\345\205\263\350\212\202\351\200\237\345\272\246\350\260\203\350\212\202", nullptr));
        velocityLE->setText(QApplication::translate("wayPoint", "30", nullptr));
        groupBox_2->setTitle(QApplication::translate("wayPoint", "\350\267\257\347\202\271\346\223\215\344\275\234", nullptr));
        bu_run_point->setText(QApplication::translate("wayPoint", "\350\277\220\345\212\250\345\210\260\346\255\244\350\267\257\347\202\271", nullptr));
        pushButton->setText(QApplication::translate("wayPoint", "\350\256\276\347\275\256\346\255\244\350\267\257\347\202\271", nullptr));
        label_5->setText(QApplication::translate("wayPoint", "%", nullptr));
        vel_add->setText(QApplication::translate("wayPoint", "+", nullptr));
        groupBox->setTitle(QApplication::translate("wayPoint", "\345\205\255\344\270\252\345\205\263\350\212\202\347\274\226\347\240\201\345\231\250\345\200\274\350\257\273\346\225\260", nullptr));
        robot_joint1->setText(QApplication::translate("wayPoint", "0", nullptr));
        robot_joint2->setText(QApplication::translate("wayPoint", "0", nullptr));
        robot_joint3->setText(QApplication::translate("wayPoint", "0", nullptr));
        label_2->setText(QApplication::translate("wayPoint", "\345\205\263\350\212\202\344\270\200", nullptr));
        label_4->setText(QApplication::translate("wayPoint", "\345\205\263\350\212\202\344\272\214", nullptr));
        label_6->setText(QApplication::translate("wayPoint", "\345\205\263\350\212\202\344\270\211", nullptr));
        robot_joint5->setText(QApplication::translate("wayPoint", "0", nullptr));
        robot_joint6->setText(QApplication::translate("wayPoint", "0", nullptr));
        label_7->setText(QApplication::translate("wayPoint", "\345\205\263\346\234\272\344\272\224", nullptr));
        label_8->setText(QApplication::translate("wayPoint", "\345\205\263\350\212\202\345\205\255", nullptr));
        label_9->setText(QApplication::translate("wayPoint", "\345\205\263\350\212\202\345\233\233", nullptr));
        robot_joint4->setText(QApplication::translate("wayPoint", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wayPoint: public Ui_wayPoint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAYPOINT_H
