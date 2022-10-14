/********************************************************************************
** Form generated from reading UI file 'tree_stack.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREE_STACK_H
#define UI_TREE_STACK_H

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

class Ui_Tree_Stack
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *CoordinateBtn_set;
    QGroupBox *groupBox;
    QPushButton *coordinatePt1;
    QPushButton *coordinatePt2;
    QPushButton *coordinatePt3;
    QLabel *label_3;
    QPushButton *CoordinateBtn_sureBtn;
    QLabel *label_show;
    QPushButton *CoordinateBtn_startBtn;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *zlBtn;
    QLineEdit *lineEdit_4;
    QLabel *label_8;

    void setupUi(QWidget *Tree_Stack)
    {
        if (Tree_Stack->objectName().isEmpty())
            Tree_Stack->setObjectName(QStringLiteral("Tree_Stack"));
        Tree_Stack->resize(720, 390);
        label = new QLabel(Tree_Stack);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 51, 31));
        label->setStyleSheet(QStringLiteral("font: 16pt \"Ubuntu\";"));
        label_2 = new QLabel(Tree_Stack);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 401, 31));
        CoordinateBtn_set = new QPushButton(Tree_Stack);
        CoordinateBtn_set->setObjectName(QStringLiteral("CoordinateBtn_set"));
        CoordinateBtn_set->setGeometry(QRect(10, 120, 111, 51));
        CoordinateBtn_set->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../RELEASE/image/coordinate.png"), QSize(), QIcon::Normal, QIcon::Off);
        CoordinateBtn_set->setIcon(icon);
        CoordinateBtn_set->setIconSize(QSize(22, 22));
        groupBox = new QGroupBox(Tree_Stack);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(130, 80, 121, 221));
        coordinatePt1 = new QPushButton(groupBox);
        coordinatePt1->setObjectName(QStringLiteral("coordinatePt1"));
        coordinatePt1->setGeometry(QRect(20, 30, 81, 41));
        coordinatePt1->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../image/fuction.png"), QSize(), QIcon::Normal, QIcon::Off);
        coordinatePt1->setIcon(icon1);
        coordinatePt1->setIconSize(QSize(22, 22));
        coordinatePt2 = new QPushButton(groupBox);
        coordinatePt2->setObjectName(QStringLiteral("coordinatePt2"));
        coordinatePt2->setGeometry(QRect(20, 100, 81, 41));
        coordinatePt2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        coordinatePt2->setIcon(icon1);
        coordinatePt2->setIconSize(QSize(22, 22));
        coordinatePt3 = new QPushButton(groupBox);
        coordinatePt3->setObjectName(QStringLiteral("coordinatePt3"));
        coordinatePt3->setGeometry(QRect(20, 170, 81, 41));
        coordinatePt3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        coordinatePt3->setIcon(icon1);
        coordinatePt3->setIconSize(QSize(22, 22));
        label_3 = new QLabel(Tree_Stack);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 180, 111, 111));
        CoordinateBtn_sureBtn = new QPushButton(Tree_Stack);
        CoordinateBtn_sureBtn->setObjectName(QStringLiteral("CoordinateBtn_sureBtn"));
        CoordinateBtn_sureBtn->setGeometry(QRect(130, 320, 111, 51));
        CoordinateBtn_sureBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../RELEASE/image/yes.png"), QSize(), QIcon::Normal, QIcon::Off);
        CoordinateBtn_sureBtn->setIcon(icon2);
        CoordinateBtn_sureBtn->setIconSize(QSize(22, 22));
        label_show = new QLabel(Tree_Stack);
        label_show->setObjectName(QStringLiteral("label_show"));
        label_show->setGeometry(QRect(340, 80, 321, 41));
        CoordinateBtn_startBtn = new QPushButton(Tree_Stack);
        CoordinateBtn_startBtn->setObjectName(QStringLiteral("CoordinateBtn_startBtn"));
        CoordinateBtn_startBtn->setGeometry(QRect(340, 130, 111, 51));
        CoordinateBtn_startBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        CoordinateBtn_startBtn->setIconSize(QSize(22, 22));
        lineEdit = new QLineEdit(Tree_Stack);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(580, 130, 91, 31));
        label_4 = new QLabel(Tree_Stack);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(490, 160, 81, 41));
        lineEdit_2 = new QLineEdit(Tree_Stack);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(580, 170, 91, 31));
        lineEdit_3 = new QLineEdit(Tree_Stack);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(580, 210, 91, 31));
        label_5 = new QLabel(Tree_Stack);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(680, 130, 21, 21));
        label_6 = new QLabel(Tree_Stack);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(680, 170, 21, 21));
        label_7 = new QLabel(Tree_Stack);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(680, 210, 21, 21));
        zlBtn = new QPushButton(Tree_Stack);
        zlBtn->setObjectName(QStringLiteral("zlBtn"));
        zlBtn->setGeometry(QRect(340, 320, 111, 51));
        zlBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../RELEASE/image/zlshow.png"), QSize(), QIcon::Normal, QIcon::Off);
        zlBtn->setIcon(icon3);
        zlBtn->setIconSize(QSize(22, 22));
        lineEdit_4 = new QLineEdit(Tree_Stack);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(420, 230, 91, 31));
        label_8 = new QLabel(Tree_Stack);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(350, 229, 61, 31));

        retranslateUi(Tree_Stack);

        QMetaObject::connectSlotsByName(Tree_Stack);
    } // setupUi

    void retranslateUi(QWidget *Tree_Stack)
    {
        Tree_Stack->setWindowTitle(QApplication::translate("Tree_Stack", "Form", nullptr));
        label->setText(QApplication::translate("Tree_Stack", "\351\230\265\345\210\227", nullptr));
        label_2->setText(QApplication::translate("Tree_Stack", "\345\234\250\351\234\200\350\246\201\346\223\215\344\275\234\347\232\204\345\271\263\351\235\242\350\256\276\345\256\232\345\235\220\346\240\207\347\263\273\357\274\214\350\277\231\345\257\271\346\211\247\350\241\214\351\230\265\345\210\227\346\223\215\344\275\234\351\235\236\345\270\270\346\234\211\347\224\250", nullptr));
#ifndef QT_NO_TOOLTIP
        CoordinateBtn_set->setToolTip(QApplication::translate("Tree_Stack", "<html><head/><body><p><span style=\" font-style:italic;\">\346\234\272\345\231\250\344\272\272\345\233\236\350\265\267\347\202\271</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        CoordinateBtn_set->setText(QApplication::translate("Tree_Stack", "\345\235\220\346\240\207\347\263\273\350\256\276\345\256\232", nullptr));
        groupBox->setTitle(QApplication::translate("Tree_Stack", "\346\240\207\345\256\232\347\202\271", nullptr));
#ifndef QT_NO_TOOLTIP
        coordinatePt1->setToolTip(QApplication::translate("Tree_Stack", "<html><head/><body><p><span style=\" font-style:italic;\">\346\234\272\345\231\250\344\272\272\345\233\236\350\265\267\347\202\271</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        coordinatePt1->setText(QApplication::translate("Tree_Stack", "\350\256\276\345\256\232\347\202\271\357\274\221", nullptr));
#ifndef QT_NO_TOOLTIP
        coordinatePt2->setToolTip(QApplication::translate("Tree_Stack", "<html><head/><body><p><span style=\" font-style:italic;\">\346\234\272\345\231\250\344\272\272\345\233\236\350\265\267\347\202\271</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        coordinatePt2->setText(QApplication::translate("Tree_Stack", "\350\256\276\345\256\232\347\202\2712", nullptr));
#ifndef QT_NO_TOOLTIP
        coordinatePt3->setToolTip(QApplication::translate("Tree_Stack", "<html><head/><body><p><span style=\" font-style:italic;\">\346\234\272\345\231\250\344\272\272\345\233\236\350\265\267\347\202\271</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        coordinatePt3->setText(QApplication::translate("Tree_Stack", "\350\256\276\345\256\232\347\202\2713", nullptr));
        label_3->setText(QApplication::translate("Tree_Stack", "\350\257\267\344\276\235\346\254\241\350\256\276\345\256\232\347\202\271\357\274\214\n"
"\347\233\264\345\210\260\357\274\223\344\270\252\347\202\271\n"
"\350\256\276\345\256\232\345\256\214\346\210\220\357\274\214\n"
"\347\202\271\345\207\273\347\241\256\345\256\232", nullptr));
#ifndef QT_NO_TOOLTIP
        CoordinateBtn_sureBtn->setToolTip(QApplication::translate("Tree_Stack", "<html><head/><body><p><span style=\" font-style:italic;\">\346\234\272\345\231\250\344\272\272\345\233\236\350\265\267\347\202\271</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        CoordinateBtn_sureBtn->setText(QApplication::translate("Tree_Stack", "\347\241\256\345\256\232", nullptr));
        label_show->setText(QApplication::translate("Tree_Stack", "\351\230\265\345\210\227\346\223\215\344\275\234\347\224\261\350\265\267\345\247\213\344\275\215\347\275\256s(\350\267\257\347\202\271)\345\222\214\346\226\271\345\220\221d(mm)\346\235\245\350\256\276\345\256\232", nullptr));
#ifndef QT_NO_TOOLTIP
        CoordinateBtn_startBtn->setToolTip(QApplication::translate("Tree_Stack", "<html><head/><body><p><span style=\" font-style:italic;\">\346\234\272\345\231\250\344\272\272\345\233\236\350\265\267\347\202\271</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        CoordinateBtn_startBtn->setText(QApplication::translate("Tree_Stack", "\350\265\267\345\247\213\344\275\215\347\275\256", nullptr));
        label_4->setText(QApplication::translate("Tree_Stack", "\346\226\271\345\220\221d(mm)", nullptr));
        label_5->setText(QApplication::translate("Tree_Stack", "X", nullptr));
        label_6->setText(QApplication::translate("Tree_Stack", "Y", nullptr));
        label_7->setText(QApplication::translate("Tree_Stack", "Z", nullptr));
#ifndef QT_NO_TOOLTIP
        zlBtn->setToolTip(QApplication::translate("Tree_Stack", "<html><head/><body><p><span style=\" font-style:italic;\">\346\234\272\345\231\250\344\272\272\345\233\236\350\265\267\347\202\271</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        zlBtn->setText(QApplication::translate("Tree_Stack", "\351\230\265\345\210\227", nullptr));
        label_8->setText(QApplication::translate("Tree_Stack", "\351\230\265\345\210\227\344\270\252\346\225\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tree_Stack: public Ui_Tree_Stack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREE_STACK_H
