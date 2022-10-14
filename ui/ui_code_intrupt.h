/********************************************************************************
** Form generated from reading UI file 'code_intrupt.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODE_INTRUPT_H
#define UI_CODE_INTRUPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Code_Intrupt
{
public:
    QLabel *label_2;
    QTabWidget *log_inter_output;
    QWidget *tab_2;
    QTextEdit *log_inter_in;
    QWidget *tab_3;
    QTextEdit *logTextEdit_run;
    QWidget *tab_4;
    QTextEdit *log_inter_pause;
    QWidget *tab_5;
    QTextEdit *log_inter_clear;

    void setupUi(QWidget *Code_Intrupt)
    {
        if (Code_Intrupt->objectName().isEmpty())
            Code_Intrupt->setObjectName(QStringLiteral("Code_Intrupt"));
        Code_Intrupt->resize(700, 380);
        label_2 = new QLabel(Code_Intrupt);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 0, 591, 51));
        log_inter_output = new QTabWidget(Code_Intrupt);
        log_inter_output->setObjectName(QStringLiteral("log_inter_output"));
        log_inter_output->setGeometry(QRect(0, 60, 700, 321));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        log_inter_in = new QTextEdit(tab_2);
        log_inter_in->setObjectName(QStringLiteral("log_inter_in"));
        log_inter_in->setGeometry(QRect(0, 0, 701, 291));
        log_inter_in->setInputMethodHints(Qt::ImhMultiLine);
        log_inter_in->setFrameShape(QFrame::Panel);
        log_inter_in->setFrameShadow(QFrame::Plain);
        log_inter_in->setReadOnly(true);
        log_inter_output->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        logTextEdit_run = new QTextEdit(tab_3);
        logTextEdit_run->setObjectName(QStringLiteral("logTextEdit_run"));
        logTextEdit_run->setGeometry(QRect(0, 0, 701, 291));
        logTextEdit_run->setInputMethodHints(Qt::ImhMultiLine);
        logTextEdit_run->setFrameShape(QFrame::Panel);
        logTextEdit_run->setFrameShadow(QFrame::Plain);
        logTextEdit_run->setReadOnly(true);
        log_inter_output->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        log_inter_pause = new QTextEdit(tab_4);
        log_inter_pause->setObjectName(QStringLiteral("log_inter_pause"));
        log_inter_pause->setGeometry(QRect(0, 0, 701, 291));
        log_inter_pause->setInputMethodHints(Qt::ImhMultiLine);
        log_inter_pause->setFrameShape(QFrame::Panel);
        log_inter_pause->setFrameShadow(QFrame::Plain);
        log_inter_pause->setReadOnly(true);
        log_inter_output->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        log_inter_clear = new QTextEdit(tab_5);
        log_inter_clear->setObjectName(QStringLiteral("log_inter_clear"));
        log_inter_clear->setGeometry(QRect(0, 0, 701, 291));
        log_inter_clear->setInputMethodHints(Qt::ImhMultiLine);
        log_inter_clear->setFrameShape(QFrame::Panel);
        log_inter_clear->setFrameShadow(QFrame::Plain);
        log_inter_clear->setReadOnly(true);
        log_inter_output->addTab(tab_5, QString());

        retranslateUi(Code_Intrupt);

        log_inter_output->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Code_Intrupt);
    } // setupUi

    void retranslateUi(QWidget *Code_Intrupt)
    {
        Code_Intrupt->setWindowTitle(QApplication::translate("Code_Intrupt", "Form", nullptr));
        label_2->setText(QApplication::translate("Code_Intrupt", "\350\204\232\346\234\254\345\234\250\347\272\277\345\257\274\345\205\245\345\212\237\350\203\275\346\250\241\345\235\227\357\274\214\346\214\211\347\205\247\347\272\246\346\235\237\347\274\226\345\206\231\350\204\232\346\234\254", nullptr));
#ifndef QT_NO_TOOLTIP
        log_inter_in->setToolTip(QApplication::translate("Code_Intrupt", "<html><head/><body><p><span style=\" font-style:italic;\">\346\227\245\345\277\227\347\252\227\345\217\243</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        log_inter_output->setTabText(log_inter_output->indexOf(tab_2), QApplication::translate("Code_Intrupt", "\350\204\232\346\234\254\345\257\274\345\205\245", nullptr));
#ifndef QT_NO_TOOLTIP
        logTextEdit_run->setToolTip(QApplication::translate("Code_Intrupt", "<html><head/><body><p><span style=\" font-style:italic;\">\346\227\245\345\277\227\347\252\227\345\217\243</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        log_inter_output->setTabText(log_inter_output->indexOf(tab_3), QApplication::translate("Code_Intrupt", "\350\277\220\350\241\214\350\204\232\346\234\254", nullptr));
#ifndef QT_NO_TOOLTIP
        log_inter_pause->setToolTip(QApplication::translate("Code_Intrupt", "<html><head/><body><p><span style=\" font-style:italic;\">\346\227\245\345\277\227\347\252\227\345\217\243</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        log_inter_output->setTabText(log_inter_output->indexOf(tab_4), QApplication::translate("Code_Intrupt", "\346\232\202\345\201\234\350\204\232\346\234\254", nullptr));
#ifndef QT_NO_TOOLTIP
        log_inter_clear->setToolTip(QApplication::translate("Code_Intrupt", "<html><head/><body><p><span style=\" font-style:italic;\">\346\227\245\345\277\227\347\252\227\345\217\243</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        log_inter_output->setTabText(log_inter_output->indexOf(tab_5), QApplication::translate("Code_Intrupt", "\346\270\205\347\251\272\350\204\232\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Code_Intrupt: public Ui_Code_Intrupt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODE_INTRUPT_H
