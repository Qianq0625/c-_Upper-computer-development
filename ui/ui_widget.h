/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTableWidget *tableWidget;
    QPushButton *set_button;
    QPushButton *makeP_button;
    QPushButton *runP_button;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QTabWidget *tabWidget;
    QWidget *log_t;
    QTextEdit *logTextEdit;
    QWidget *monitor_t;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_I;
    QLabel *label_U;
    QTextEdit *logTextEdit_2;
    QProgressBar *progressBar_v;
    QProgressBar *progressBar_I;
    QLabel *label_sys;
    QLabel *label_version;
    QPushButton *Az_Btnpose;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1000, 743);
        tableWidget = new QTableWidget(Widget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 997, 41));
        set_button = new QPushButton(Widget);
        set_button->setObjectName(QStringLiteral("set_button"));
        set_button->setGeometry(QRect(0, 0, 121, 41));
        set_button->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral("image/set.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_button->setIcon(icon);
        set_button->setIconSize(QSize(20, 20));
        set_button->setCheckable(false);
        set_button->setChecked(false);
        set_button->setAutoRepeat(false);
        set_button->setFlat(false);
        makeP_button = new QPushButton(Widget);
        makeP_button->setObjectName(QStringLiteral("makeP_button"));
        makeP_button->setGeometry(QRect(130, 0, 121, 41));
        makeP_button->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral("image/Font Awesome Cheatsheet.png"), QSize(), QIcon::Normal, QIcon::Off);
        makeP_button->setIcon(icon1);
        makeP_button->setIconSize(QSize(20, 20));
        makeP_button->setFlat(false);
        runP_button = new QPushButton(Widget);
        runP_button->setObjectName(QStringLiteral("runP_button"));
        runP_button->setGeometry(QRect(260, 0, 121, 41));
        runP_button->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral("image/favicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        runP_button->setIcon(icon2);
        runP_button->setIconSize(QSize(25, 25));
        runP_button->setFlat(false);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 40, 997, 531));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 580, 997, 161));
        tabWidget->setFocusPolicy(Qt::TabFocus);
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabShape(QTabWidget::Triangular);
        log_t = new QWidget();
        log_t->setObjectName(QStringLiteral("log_t"));
        logTextEdit = new QTextEdit(log_t);
        logTextEdit->setObjectName(QStringLiteral("logTextEdit"));
        logTextEdit->setGeometry(QRect(0, 0, 1021, 131));
        logTextEdit->setInputMethodHints(Qt::ImhMultiLine);
        logTextEdit->setFrameShape(QFrame::Panel);
        logTextEdit->setFrameShadow(QFrame::Plain);
        logTextEdit->setReadOnly(true);
        tabWidget->addTab(log_t, QString());
        monitor_t = new QWidget();
        monitor_t->setObjectName(QStringLiteral("monitor_t"));
        label_4 = new QLabel(monitor_t);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(850, 90, 31, 20));
        label_2 = new QLabel(monitor_t);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(770, 20, 16, 17));
        label_3 = new QLabel(monitor_t);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(860, 20, 16, 17));
        label_5 = new QLabel(monitor_t);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(770, 90, 16, 16));
        label_I = new QLabel(monitor_t);
        label_I->setObjectName(QStringLiteral("label_I"));
        label_I->setGeometry(QRect(780, 90, 61, 20));
        label_U = new QLabel(monitor_t);
        label_U->setObjectName(QStringLiteral("label_U"));
        label_U->setGeometry(QRect(790, 20, 61, 17));
        logTextEdit_2 = new QTextEdit(monitor_t);
        logTextEdit_2->setObjectName(QStringLiteral("logTextEdit_2"));
        logTextEdit_2->setGeometry(QRect(0, 0, 761, 141));
        logTextEdit_2->setInputMethodHints(Qt::ImhMultiLine);
        logTextEdit_2->setFrameShape(QFrame::Panel);
        logTextEdit_2->setFrameShadow(QFrame::Plain);
        logTextEdit_2->setReadOnly(true);
        progressBar_v = new QProgressBar(monitor_t);
        progressBar_v->setObjectName(QStringLiteral("progressBar_v"));
        progressBar_v->setGeometry(QRect(880, 10, 111, 31));
        progressBar_v->setMaximum(47);
        progressBar_v->setValue(0);
        progressBar_I = new QProgressBar(monitor_t);
        progressBar_I->setObjectName(QStringLiteral("progressBar_I"));
        progressBar_I->setGeometry(QRect(880, 80, 111, 31));
        progressBar_I->setMaximum(20000);
        progressBar_I->setValue(0);
        tabWidget->addTab(monitor_t, QString());
        label_sys = new QLabel(Widget);
        label_sys->setObjectName(QStringLiteral("label_sys"));
        label_sys->setGeometry(QRect(830, 6, 71, 31));
        label_version = new QLabel(Widget);
        label_version->setObjectName(QStringLiteral("label_version"));
        label_version->setGeometry(QRect(910, 0, 81, 41));
        Az_Btnpose = new QPushButton(Widget);
        Az_Btnpose->setObjectName(QStringLiteral("Az_Btnpose"));
        Az_Btnpose->setGeometry(QRect(390, 0, 121, 41));
        Az_Btnpose->setStyleSheet(QStringLiteral(""));
        QIcon icon3;
        icon3.addFile(QStringLiteral("RELEASE/image/anzhuang.png"), QSize(), QIcon::Normal, QIcon::Off);
        Az_Btnpose->setIcon(icon3);
        Az_Btnpose->setIconSize(QSize(20, 20));
        Az_Btnpose->setFlat(false);

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\351\233\206\350\220\203\345\210\266\351\200\240", nullptr));
#ifndef QT_NO_TOOLTIP
        set_button->setToolTip(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-style:italic;\">\350\256\276\347\275\256</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        set_button->setText(QApplication::translate("Widget", "\350\256\276\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        makeP_button->setToolTip(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-style:italic;\">\347\274\226\347\250\213</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        makeP_button->setText(QApplication::translate("Widget", "\347\274\226\347\250\213", nullptr));
#ifndef QT_NO_TOOLTIP
        runP_button->setToolTip(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-style:italic;\">\347\247\273\345\212\250</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        runP_button->setText(QApplication::translate("Widget", "\347\247\273\345\212\250", nullptr));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-style:italic;\">\346\227\245\345\277\227\347\233\221\346\216\247\346\240\217</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        logTextEdit->setToolTip(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-style:italic;\">\346\227\245\345\277\227\347\252\227\345\217\243</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(log_t), QApplication::translate("Widget", "\346\227\245\345\277\227", nullptr));
        label_4->setText(QApplication::translate("Widget", "mA", nullptr));
        label_2->setText(QApplication::translate("Widget", "U:", nullptr));
        label_3->setText(QApplication::translate("Widget", "V", nullptr));
        label_5->setText(QApplication::translate("Widget", "I:", nullptr));
        label_I->setText(QString());
        label_U->setText(QString());
#ifndef QT_NO_TOOLTIP
        logTextEdit_2->setToolTip(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-style:italic;\">\346\227\245\345\277\227\347\252\227\345\217\243</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(monitor_t), QApplication::translate("Widget", "\347\233\221\346\216\247", nullptr));
        label_sys->setText(QApplication::translate("Widget", "\347\263\273\347\273\237\347\211\210\346\234\254:", nullptr));
        label_version->setText(QString());
#ifndef QT_NO_TOOLTIP
        Az_Btnpose->setToolTip(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-style:italic;\">\347\274\226\347\250\213</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        Az_Btnpose->setText(QApplication::translate("Widget", "\345\256\211\350\243\205\344\275\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
