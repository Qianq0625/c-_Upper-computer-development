/********************************************************************************
** Form generated from reading UI file 'keyboardnumdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARDNUMDIALOG_H
#define UI_KEYBOARDNUMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_keyboardNumDialog
{
public:
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pb_delete;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QPushButton *pb_close;
    QGridLayout *gridLayout;
    QPushButton *pb_1;
    QPushButton *pb_2;
    QPushButton *pb_3;
    QPushButton *pb_4;
    QPushButton *pb_5;
    QPushButton *pb_6;
    QPushButton *pb_7;
    QPushButton *pb_8;
    QPushButton *pb_9;
    QPushButton *pb_dot;
    QPushButton *pb_0;
    QPushButton *pb_enter;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *keyboardNumDialog)
    {
        if (keyboardNumDialog->objectName().isEmpty())
            keyboardNumDialog->setObjectName(QStringLiteral("keyboardNumDialog"));
        keyboardNumDialog->resize(365, 342);
        gridLayout_2 = new QGridLayout(keyboardNumDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEdit = new QLineEdit(keyboardNumDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(lineEdit, 2, 0, 1, 1);

        pb_delete = new QPushButton(keyboardNumDialog);
        pb_delete->setObjectName(QStringLiteral("pb_delete"));
        pb_delete->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(pb_delete, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);

        pb_close = new QPushButton(keyboardNumDialog);
        pb_close->setObjectName(QStringLiteral("pb_close"));

        gridLayout_2->addWidget(pb_close, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pb_1 = new QPushButton(keyboardNumDialog);
        pb_1->setObjectName(QStringLiteral("pb_1"));
        pb_1->setMinimumSize(QSize(60, 50));

        gridLayout->addWidget(pb_1, 0, 0, 1, 1);

        pb_2 = new QPushButton(keyboardNumDialog);
        pb_2->setObjectName(QStringLiteral("pb_2"));
        pb_2->setMinimumSize(QSize(60, 50));

        gridLayout->addWidget(pb_2, 0, 1, 1, 1);

        pb_3 = new QPushButton(keyboardNumDialog);
        pb_3->setObjectName(QStringLiteral("pb_3"));
        pb_3->setMinimumSize(QSize(60, 50));

        gridLayout->addWidget(pb_3, 0, 2, 1, 1);

        pb_4 = new QPushButton(keyboardNumDialog);
        pb_4->setObjectName(QStringLiteral("pb_4"));
        pb_4->setMinimumSize(QSize(60, 50));

        gridLayout->addWidget(pb_4, 1, 0, 1, 1);

        pb_5 = new QPushButton(keyboardNumDialog);
        pb_5->setObjectName(QStringLiteral("pb_5"));
        pb_5->setMinimumSize(QSize(60, 50));

        gridLayout->addWidget(pb_5, 1, 1, 1, 1);

        pb_6 = new QPushButton(keyboardNumDialog);
        pb_6->setObjectName(QStringLiteral("pb_6"));
        pb_6->setMinimumSize(QSize(60, 50));

        gridLayout->addWidget(pb_6, 1, 2, 1, 1);

        pb_7 = new QPushButton(keyboardNumDialog);
        pb_7->setObjectName(QStringLiteral("pb_7"));
        pb_7->setMinimumSize(QSize(60, 50));

        gridLayout->addWidget(pb_7, 2, 0, 1, 1);

        pb_8 = new QPushButton(keyboardNumDialog);
        pb_8->setObjectName(QStringLiteral("pb_8"));
        pb_8->setMinimumSize(QSize(60, 50));

        gridLayout->addWidget(pb_8, 2, 1, 1, 1);

        pb_9 = new QPushButton(keyboardNumDialog);
        pb_9->setObjectName(QStringLiteral("pb_9"));
        pb_9->setMinimumSize(QSize(60, 50));

        gridLayout->addWidget(pb_9, 2, 2, 1, 1);

        pb_dot = new QPushButton(keyboardNumDialog);
        pb_dot->setObjectName(QStringLiteral("pb_dot"));
        pb_dot->setMinimumSize(QSize(60, 50));

        gridLayout->addWidget(pb_dot, 3, 0, 1, 1);

        pb_0 = new QPushButton(keyboardNumDialog);
        pb_0->setObjectName(QStringLiteral("pb_0"));
        pb_0->setMinimumSize(QSize(60, 50));

        gridLayout->addWidget(pb_0, 3, 1, 1, 1);

        pb_enter = new QPushButton(keyboardNumDialog);
        pb_enter->setObjectName(QStringLiteral("pb_enter"));
        pb_enter->setMinimumSize(QSize(60, 50));

        gridLayout->addWidget(pb_enter, 3, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 4, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 1, 1, 1);


        retranslateUi(keyboardNumDialog);

        QMetaObject::connectSlotsByName(keyboardNumDialog);
    } // setupUi

    void retranslateUi(QDialog *keyboardNumDialog)
    {
        keyboardNumDialog->setWindowTitle(QApplication::translate("keyboardNumDialog", "\351\233\206\350\220\203\345\210\266\351\200\240", nullptr));
        pb_delete->setText(QApplication::translate("keyboardNumDialog", "<<", nullptr));
        pb_close->setText(QApplication::translate("keyboardNumDialog", "\345\205\263\351\227\255", nullptr));
        pb_1->setText(QApplication::translate("keyboardNumDialog", "1", nullptr));
        pb_2->setText(QApplication::translate("keyboardNumDialog", "2", nullptr));
        pb_3->setText(QApplication::translate("keyboardNumDialog", "3", nullptr));
        pb_4->setText(QApplication::translate("keyboardNumDialog", "4", nullptr));
        pb_5->setText(QApplication::translate("keyboardNumDialog", "5", nullptr));
        pb_6->setText(QApplication::translate("keyboardNumDialog", "6", nullptr));
        pb_7->setText(QApplication::translate("keyboardNumDialog", "7", nullptr));
        pb_8->setText(QApplication::translate("keyboardNumDialog", "8", nullptr));
        pb_9->setText(QApplication::translate("keyboardNumDialog", "9", nullptr));
        pb_dot->setText(QApplication::translate("keyboardNumDialog", ".", nullptr));
        pb_0->setText(QApplication::translate("keyboardNumDialog", "0", nullptr));
        pb_enter->setText(QApplication::translate("keyboardNumDialog", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class keyboardNumDialog: public Ui_keyboardNumDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARDNUMDIALOG_H
