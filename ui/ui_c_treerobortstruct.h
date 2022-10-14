/********************************************************************************
** Form generated from reading UI file 'c_treerobortstruct.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_C_TREEROBORTSTRUCT_H
#define UI_C_TREEROBORTSTRUCT_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_C_TreeRobortStruct
{
public:
    QTreeView *treeView;
    QTabWidget *tabWidget;
    QWidget *Command_t;
    QStackedWidget *stackedWidget;
    QWidget *action_tab;
    QGroupBox *groupBox_3;
    QPushButton *wayPointBtn;
    QPushButton *waitBtn;
    QPushButton *setBtn;
    QPushButton *moveBtn;
    QPushButton *Btn_zl;
    QGroupBox *groupBox_4;
    QPushButton *copyBtn;
    QPushButton *cutBtn;
    QPushButton *pasteBtn;
    QPushButton *debugsaveBtn;
    QPushButton *frobidBtn;
    QPushButton *deleteBtn;
    QLabel *label;
    QComboBox *nodePosCB;
    QWidget *tab;
    QStackedWidget *stackedWidget_2;
    QWidget *page;
    QWidget *page_2;
    QGroupBox *groupBox;
    QPushButton *moveToStartPointBtn;
    QPushButton *stopBtn;
    QPushButton *runBtn;
    QPushButton *saveBtn;
    QPushButton *printBtn;
    QLabel *lab_nameshow;
    QPushButton *pushfileBTn;

    void setupUi(QWidget *C_TreeRobortStruct)
    {
        if (C_TreeRobortStruct->objectName().isEmpty())
            C_TreeRobortStruct->setObjectName(QStringLiteral("C_TreeRobortStruct"));
        C_TreeRobortStruct->resize(970, 560);
        QIcon icon;
        icon.addFile(QStringLiteral("../../image/favicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        C_TreeRobortStruct->setWindowIcon(icon);
        treeView = new QTreeView(C_TreeRobortStruct);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(10, 40, 181, 491));
        QFont font;
        font.setPointSize(14);
        treeView->setFont(font);
        treeView->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        treeView->setFrameShape(QFrame::WinPanel);
        treeView->setFrameShadow(QFrame::Plain);
        tabWidget = new QTabWidget(C_TreeRobortStruct);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(200, 10, 720, 431));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideNone);
        Command_t = new QWidget();
        Command_t->setObjectName(QStringLiteral("Command_t"));
        stackedWidget = new QStackedWidget(Command_t);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 701, 381));
        tabWidget->addTab(Command_t, QString());
        action_tab = new QWidget();
        action_tab->setObjectName(QStringLiteral("action_tab"));
        groupBox_3 = new QGroupBox(action_tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(80, 10, 371, 171));
        wayPointBtn = new QPushButton(groupBox_3);
        wayPointBtn->setObjectName(QStringLiteral("wayPointBtn"));
        wayPointBtn->setGeometry(QRect(180, 40, 71, 41));
        waitBtn = new QPushButton(groupBox_3);
        waitBtn->setObjectName(QStringLiteral("waitBtn"));
        waitBtn->setGeometry(QRect(80, 110, 71, 41));
        setBtn = new QPushButton(groupBox_3);
        setBtn->setObjectName(QStringLiteral("setBtn"));
        setBtn->setGeometry(QRect(180, 110, 71, 41));
        moveBtn = new QPushButton(groupBox_3);
        moveBtn->setObjectName(QStringLiteral("moveBtn"));
        moveBtn->setGeometry(QRect(80, 40, 71, 41));
        Btn_zl = new QPushButton(groupBox_3);
        Btn_zl->setObjectName(QStringLiteral("Btn_zl"));
        Btn_zl->setGeometry(QRect(270, 110, 71, 41));
        moveBtn->raise();
        wayPointBtn->raise();
        waitBtn->raise();
        setBtn->raise();
        Btn_zl->raise();
        groupBox_4 = new QGroupBox(action_tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(80, 200, 371, 171));
        copyBtn = new QPushButton(groupBox_4);
        copyBtn->setObjectName(QStringLiteral("copyBtn"));
        copyBtn->setGeometry(QRect(180, 110, 71, 41));
        cutBtn = new QPushButton(groupBox_4);
        cutBtn->setObjectName(QStringLiteral("cutBtn"));
        cutBtn->setGeometry(QRect(80, 110, 71, 41));
        pasteBtn = new QPushButton(groupBox_4);
        pasteBtn->setObjectName(QStringLiteral("pasteBtn"));
        pasteBtn->setGeometry(QRect(80, 40, 71, 41));
        debugsaveBtn = new QPushButton(groupBox_4);
        debugsaveBtn->setObjectName(QStringLiteral("debugsaveBtn"));
        debugsaveBtn->setGeometry(QRect(280, 110, 71, 41));
        frobidBtn = new QPushButton(groupBox_4);
        frobidBtn->setObjectName(QStringLiteral("frobidBtn"));
        frobidBtn->setGeometry(QRect(180, 40, 71, 41));
        deleteBtn = new QPushButton(groupBox_4);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));
        deleteBtn->setGeometry(QRect(280, 40, 71, 41));
        label = new QLabel(action_tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 40, 91, 31));
        nodePosCB = new QComboBox(action_tab);
        nodePosCB->addItem(QString());
        nodePosCB->addItem(QString());
        nodePosCB->setObjectName(QStringLiteral("nodePosCB"));
        nodePosCB->setGeometry(QRect(580, 40, 101, 31));
        tabWidget->addTab(action_tab, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        stackedWidget_2 = new QStackedWidget(tab);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(10, 10, 701, 381));
        stackedWidget_2->setFrameShadow(QFrame::Raised);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget_2->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget_2->addWidget(page_2);
        tabWidget->addTab(tab, QString());
        groupBox = new QGroupBox(C_TreeRobortStruct);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(200, 440, 501, 91));
        moveToStartPointBtn = new QPushButton(groupBox);
        moveToStartPointBtn->setObjectName(QStringLiteral("moveToStartPointBtn"));
        moveToStartPointBtn->setGeometry(QRect(10, 30, 75, 51));
        moveToStartPointBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../image/fuction.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveToStartPointBtn->setIcon(icon1);
        moveToStartPointBtn->setIconSize(QSize(22, 22));
        stopBtn = new QPushButton(groupBox);
        stopBtn->setObjectName(QStringLiteral("stopBtn"));
        stopBtn->setGeometry(QRect(210, 30, 75, 51));
        stopBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../image/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopBtn->setIcon(icon2);
        stopBtn->setIconSize(QSize(22, 22));
        runBtn = new QPushButton(groupBox);
        runBtn->setObjectName(QStringLiteral("runBtn"));
        runBtn->setGeometry(QRect(110, 30, 75, 51));
        runBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../image/run.png"), QSize(), QIcon::Normal, QIcon::Off);
        runBtn->setIcon(icon3);
        runBtn->setIconSize(QSize(22, 22));
        saveBtn = new QPushButton(groupBox);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        saveBtn->setGeometry(QRect(310, 30, 75, 51));
        saveBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../image/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveBtn->setIcon(icon4);
        saveBtn->setIconSize(QSize(22, 22));
        printBtn = new QPushButton(groupBox);
        printBtn->setObjectName(QStringLiteral("printBtn"));
        printBtn->setGeometry(QRect(410, 30, 75, 51));
        printBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../image/daoru.png"), QSize(), QIcon::Normal, QIcon::Off);
        printBtn->setIcon(icon5);
        printBtn->setIconSize(QSize(22, 22));
        lab_nameshow = new QLabel(C_TreeRobortStruct);
        lab_nameshow->setObjectName(QStringLiteral("lab_nameshow"));
        lab_nameshow->setGeometry(QRect(50, 10, 141, 17));
        pushfileBTn = new QPushButton(C_TreeRobortStruct);
        pushfileBTn->setObjectName(QStringLiteral("pushfileBTn"));
        pushfileBTn->setGeometry(QRect(10, 10, 31, 21));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../../RELEASE/image/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushfileBTn->setIcon(icon6);
        pushfileBTn->setIconSize(QSize(19, 19));

        retranslateUi(C_TreeRobortStruct);
        QObject::connect(runBtn, SIGNAL(clicked()), C_TreeRobortStruct, SLOT(BTn_runClicked()));
        QObject::connect(stopBtn, SIGNAL(clicked()), C_TreeRobortStruct, SLOT(BTn_runClicked()));

        tabWidget->setCurrentIndex(1);
        nodePosCB->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(C_TreeRobortStruct);
    } // setupUi

    void retranslateUi(QWidget *C_TreeRobortStruct)
    {
        C_TreeRobortStruct->setWindowTitle(QApplication::translate("C_TreeRobortStruct", "IIMT", nullptr));
#ifndef QT_NO_TOOLTIP
        treeView->setToolTip(QApplication::translate("C_TreeRobortStruct", "<html><head/><body><p><span style=\" font-style:italic;\">\346\225\260\346\215\256\347\273\223\346\236\204</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QApplication::translate("C_TreeRobortStruct", "<html><head/><body><p><span style=\" font-style:italic;\">\345\221\275\344\273\244\345\212\250\344\275\234\346\240\217</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(Command_t), QApplication::translate("C_TreeRobortStruct", "\345\221\275\344\273\244", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_3->setToolTip(QApplication::translate("C_TreeRobortStruct", "<html><head/><body><p><span style=\" font-style:italic;\">\346\234\272\345\231\250\344\272\272\345\212\237\350\203\275\350\257\255\345\217\245\346\217\222\345\205\245</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("C_TreeRobortStruct", "\345\212\237\350\203\275\346\217\222\345\205\245", nullptr));
        wayPointBtn->setText(QApplication::translate("C_TreeRobortStruct", "\350\267\257\347\202\271", nullptr));
        waitBtn->setText(QApplication::translate("C_TreeRobortStruct", "\347\255\211\345\276\205", nullptr));
        setBtn->setText(QApplication::translate("C_TreeRobortStruct", "\350\256\276\347\275\256", nullptr));
        moveBtn->setText(QApplication::translate("C_TreeRobortStruct", "\347\247\273\345\212\250", nullptr));
        Btn_zl->setText(QApplication::translate("C_TreeRobortStruct", "\351\230\265\345\210\227", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_4->setToolTip(QApplication::translate("C_TreeRobortStruct", "<html><head/><body><p><span style=\" font-style:italic;\">\346\234\272\345\231\250\344\272\272\350\257\255\345\217\245\347\274\226\350\276\221\346\250\241\345\235\227</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_4->setTitle(QApplication::translate("C_TreeRobortStruct", "\345\212\237\350\203\275\347\274\226\350\276\221", nullptr));
        copyBtn->setText(QApplication::translate("C_TreeRobortStruct", "\345\244\215\345\210\266", nullptr));
        cutBtn->setText(QApplication::translate("C_TreeRobortStruct", "\345\211\252\345\210\207", nullptr));
        pasteBtn->setText(QApplication::translate("C_TreeRobortStruct", "\347\262\230\350\264\264", nullptr));
        debugsaveBtn->setText(QApplication::translate("C_TreeRobortStruct", "\350\204\232\346\234\254\344\277\235\345\255\230", nullptr));
        frobidBtn->setText(QApplication::translate("C_TreeRobortStruct", "\346\212\221\345\210\266", nullptr));
        deleteBtn->setText(QApplication::translate("C_TreeRobortStruct", "\345\210\240\351\231\244", nullptr));
        label->setText(QApplication::translate("C_TreeRobortStruct", "\350\212\202\347\202\271\346\217\222\345\205\245\344\275\215\347\275\256", nullptr));
        nodePosCB->setItemText(0, QApplication::translate("C_TreeRobortStruct", "\345\275\223\345\211\215\350\212\202\347\202\271\345\220\216", nullptr));
        nodePosCB->setItemText(1, QApplication::translate("C_TreeRobortStruct", "\345\275\223\345\211\215\350\212\202\347\202\271\345\211\215", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(action_tab), QApplication::translate("C_TreeRobortStruct", "\347\273\223\346\236\204", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("C_TreeRobortStruct", "\351\253\230\347\272\247\347\274\226\347\250\213", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox->setToolTip(QApplication::translate("C_TreeRobortStruct", "<html><head/><body><p><span style=\" font-style:italic;\">\345\212\237\350\203\275\346\240\217</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("C_TreeRobortStruct", "\345\212\237\350\203\275\346\240\217", nullptr));
#ifndef QT_NO_TOOLTIP
        moveToStartPointBtn->setToolTip(QApplication::translate("C_TreeRobortStruct", "<html><head/><body><p><span style=\" font-style:italic;\">\346\234\272\345\231\250\344\272\272\345\233\236\350\265\267\347\202\271</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        moveToStartPointBtn->setText(QApplication::translate("C_TreeRobortStruct", "\350\265\267\347\202\271", nullptr));
#ifndef QT_NO_TOOLTIP
        stopBtn->setToolTip(QApplication::translate("C_TreeRobortStruct", "<html><head/><body><p><span style=\" font-style:italic;\">\346\234\272\345\231\250\344\272\272\345\201\234\346\255\242</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        stopBtn->setText(QApplication::translate("C_TreeRobortStruct", "\345\201\234\346\255\242", nullptr));
#ifndef QT_NO_TOOLTIP
        runBtn->setToolTip(QApplication::translate("C_TreeRobortStruct", "<html><head/><body><p><span style=\" font-style:italic;\">\346\234\272\345\231\250\344\272\272\350\277\220\350\241\214</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        runBtn->setText(QApplication::translate("C_TreeRobortStruct", "\350\277\220\350\241\214", nullptr));
#ifndef QT_NO_TOOLTIP
        saveBtn->setToolTip(QApplication::translate("C_TreeRobortStruct", "<html><head/><body><p><span style=\" font-style:italic;\">\346\225\260\346\215\256\347\273\223\346\236\204\344\277\235\345\255\230</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        saveBtn->setText(QApplication::translate("C_TreeRobortStruct", "\344\277\235\345\255\230", nullptr));
#ifndef QT_NO_TOOLTIP
        printBtn->setToolTip(QApplication::translate("C_TreeRobortStruct", "<html><head/><body><p><span style=\" font-style:italic;\">\346\225\260\346\215\256\347\273\223\346\236\204\345\244\226\351\203\250\345\257\274\345\205\245</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        printBtn->setText(QApplication::translate("C_TreeRobortStruct", "\345\257\274\345\205\245", nullptr));
        lab_nameshow->setText(QApplication::translate("C_TreeRobortStruct", "unamed", nullptr));
        pushfileBTn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class C_TreeRobortStruct: public Ui_C_TreeRobortStruct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C_TREEROBORTSTRUCT_H
