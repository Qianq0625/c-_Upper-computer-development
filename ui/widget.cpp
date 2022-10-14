#include "widget.h"
#include "ui_widget.h"
#include "Pci_Can/pcan_init.h"
#include "Motor_Model/motor_model.h"
#include "Global_Function/GlobalFunction.h"
#include <unistd.h>
#include <QPainter>
#include <QDebug>
#include "Opengl_robot/scara.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    setWindowIcon(QIcon("image/favicon.ico"));
    ui->setupUi(this);
    robot = new Scara(this);
    SerialPor_IIMT = new serialPort();
    button_set();
    TreeStackWidget = new Tree_Stack();
    set_widget = new C_Setting();
    ui->stackedWidget->addWidget(set_widget);
    treeRobortStruct_widget = new C_TreeRobortStruct();
    ui->stackedWidget->addWidget(treeRobortStruct_widget);
    fix_widget = new Fix();
    ui->stackedWidget->addWidget(fix_widget);
    robortMove_widget = new robort_move();
    ui->stackedWidget->addWidget(robortMove_widget);
    ui->stackedWidget->setCurrentWidget(set_widget);
    Widget::SignalSet();
    //启动网络接口服务器
        initNetWork();
}
Widget::~Widget()
{
    delete ui;
}
/**
 * @brief Widget::SignalSet
 */
void Widget::SignalSet()
{
    consoleTimer = new QTimer(this);
    consoleTimer->setInterval(950);
    consoleTimer->setTimerType(Qt::PreciseTimer);
    connect(consoleTimer, SIGNAL(timeout()), set_widget, SLOT(SettingUpdate()));
    connect(treeRobortStruct_widget, SIGNAL(setWayPointSignal1()), this, SLOT(on_SetWayPoint1()));
    connect(robortMove_widget, SIGNAL(confirmSetWayPointSignal()), this, SLOT(on_ConfirmSetWayPoint()));
    connect(robortMove_widget, SIGNAL(cancelSetWayPointSignal()), this, SLOT(onConcelSetWayPoint()));
    connect(consoleTimer, SIGNAL(timeout()), this, SLOT(consoleTimeout()));
    connect(this, SIGNAL(confirmSetWayPointSignal()), treeRobortStruct_widget, SLOT(on_ConfirmSetWayPoint()));
    connect(set_widget, SIGNAL(PowButton()),this,SLOT(clear_log()));
    //tree_struct button function
    connect(set_widget,SIGNAL(PowButton()),treeRobortStruct_widget,SLOT(BunttonSet_Fun()));
    connect(consoleTimer, SIGNAL(timeout()), this, SLOT(WidgetUpdate()));
    //
    connect(fix_widget,SIGNAL(Btn_set_Sig()),this,SLOT(RobortTcp_MoWidg_show()));
    connect(fix_widget,SIGNAL(Btn_cancle_Sig()),this,SLOT(Btn_Cancle_SigSlot()));

    connect(fix_widget,SIGNAL(AddTcp_Sig()),robortMove_widget,SLOT(LineTxt_Add()));
    connect(fix_widget,SIGNAL(DecTCp_Sig()),robortMove_widget,SLOT(LineTxt_Dec()));
    consoleTimer->start();
}
/**
 * 启动网络接口服务器
 * @brief Widget::initNetWork
 */
void Widget::initNetWork()
{
    //启动网络接口服务器
    NetworkServer::getInstance();
}
/**
 * @brief Widget::Btn_Cancle_SigSlot
 */
void Widget::Btn_Cancle_SigSlot()
{
    ui->stackedWidget->setCurrentWidget(fix_widget);
}
/**
 * @brief Widget::WidgetUpdate
 */
void Widget::WidgetUpdate()
{
    //station save
    //
    {
    ui->progressBar_v->setTextVisible(false);
    ui->progressBar_v->setMaximum(47);
    ui->progressBar_v->setMinimum(0);
    ui->progressBar_v->setValue(Vios485.Viloat);
    ui->progressBar_I->setTextVisible(false);
    ui->progressBar_I->setMaximum(20000);
    ui->progressBar_I->setMinimum(0);
    ui->progressBar_I->setValue(Vios485.I);
    }
    {
    QPalette pa_set;
    pa_set.setColor(QPalette::WindowText,Qt::red);
    ui->label_U->setPalette(pa_set);
    ui->label_I->setPalette(pa_set);

    QString str = QString::number(Vios485.Viloat, 'f', 0);
    ui->label_U->setText(str);
    QString str_iu = QString::number(Vios485.I, 'f', 0);
    ui->label_I->setText(str_iu);
    }
    update();
}
/**
 * @brief Widget::RobortTcp_MoWidg_show
 */
void Widget::RobortTcp_MoWidg_show()
{
    ui->runP_button->setStyleSheet("QPushButton{background-color:rgb(20,150,200);}");
    ui->Az_Btnpose->setStyleSheet("QPushButton{background-color:rgb(211,215,200);}");
    ui->makeP_button->setEnabled(false);
    ui->Az_Btnpose->setEnabled(false);
    ui->set_button->setEnabled(false);
    ui->runP_button->setEnabled(false);
    ui->stackedWidget->setCurrentWidget(robortMove_widget);
    QPushButton* button1 = robortMove_widget->findChild<QPushButton*>("confirmBtn");
    QPushButton* button2 = robortMove_widget->findChild<QPushButton*>("cancelBtn");
    button1->setHidden(false);
    button2->setHidden(false);
    ui->label_version->setHidden(true);
    ui->label_sys->setHidden(true);
}
/**
 * @brief Widget::on_SetWayPoint1
 */
void Widget::on_SetWayPoint1()
{
    QPushButton* button1 = robortMove_widget->findChild<QPushButton*>("confirmBtn");
    QPushButton* button2 = robortMove_widget->findChild<QPushButton*>("cancelBtn");
    button1->setHidden(false);
    button2->setHidden(false);
    ui->stackedWidget->setCurrentWidget(robortMove_widget);
}
/**
 * @brief Widget::button_set
 */
void Widget::button_set()
{
    recv_prefix_green = "<font color='green'> &nbsp; &nbsp; &nbsp; &nbsp; "; // 空格：“&nbsp;”
    recv_prefix_red = "<font color='red'> &nbsp; &nbsp; &nbsp; &nbsp; "; // 空格：“&nbsp;”

    ui->set_button->setCheckable(true);
    ui->set_button->setStyleSheet("QPushButton:hover{background-color:rgb(211,215,207);}");

    ui->runP_button->setCheckable(true);
    ui->runP_button->setStyleSheet("QPushButton:hover{background-color:rgb(211,215,207)};");

    ui->makeP_button->setCheckable(true);
    ui->makeP_button->setStyleSheet("QPushButton:hover{background-color:rgb(211,215,207);}");

    ui->Az_Btnpose->setCheckable(true);
    ui->Az_Btnpose->setStyleSheet("QPushButton:hover{background-color:rgb(211,215,207);}");

    ui->set_button->setIcon(QIcon("image/set.png"));
    ui->makeP_button->setIcon(QIcon("image/Font Awesome Cheatsheet.png"));
    ui->runP_button->setIcon(QIcon("image/favicon.ico"));
    ui->Az_Btnpose->setIcon(QIcon("image/anzhuang.png"));

    ui->tabWidget->setTabIcon(0,QIcon("image/log.png"));
    ui->tabWidget->setTabIcon(1,QIcon("image/monitor.png"));


    {
       ui->label_version->setHidden(true);
       ui->label_sys->setHidden(true);
    }
    {
        ui->tabWidget->setStyleSheet("QTabWidget#QTabBar::tab{background-color:rgb(220,200,180);}\
        QTabBar::tab::selected{background-color:rgb(20,150,200);}");
    }
    for(int i =0;i<IO_DIGITAL_OUTPUT_COUNT;i++)
    {
       IO_out_Station[i] =0;
    }
}
void Widget::on_set_button_clicked()
{
/* set show set_widget
 * */
    ui->set_button->setStyleSheet("QPushButton{background-color:rgb(20,150,200);}");
    ui->makeP_button->setStyleSheet("QPushButton{background-color:rgb(211,215,207);}");
    ui->runP_button->setStyleSheet("QPushButton{background-color:rgb(211,215,207);}");
    ui->Az_Btnpose->setStyleSheet("QPushButton{background-color:rgb(211,215,207);}");
    ui->stackedWidget->setCurrentWidget(set_widget);
    ui->label_version->setHidden(false);
    ui->label_sys->setHidden(false);
    ui->label_version->setText("Version2.1.1");
}

void Widget::on_makeP_button_clicked()
{
/* set show treeRobortStruct_widget
 * */
    ui->makeP_button->setStyleSheet("QPushButton{background-color:rgb(20,150,200);}");
    ui->set_button->setStyleSheet("QPushButton{background-color:rgb(211,215,207);}");
    ui->runP_button->setStyleSheet("QPushButton{background-color:rgb(211,215,207);}");
    ui->Az_Btnpose->setStyleSheet("QPushButton{background-color:rgb(211,215,207);}");
    ui->stackedWidget->setCurrentWidget(treeRobortStruct_widget);
    ui->label_version->setHidden(true);
    ui->label_sys->setHidden(true);
}

void Widget::on_runP_button_clicked()
{
/* set show robortmove_widget
 * */
    ui->runP_button->setStyleSheet("QPushButton{background-color:rgb(20,150,200);}");
    ui->makeP_button->setStyleSheet("QPushButton{background-color:rgb(211,215,207);}");
    ui->set_button->setStyleSheet("QPushButton{background-color:rgb(211,215,207);}");
    ui->Az_Btnpose->setStyleSheet("QPushButton{background-color:rgb(211,215,207);}");
    QPushButton* button1 = robortMove_widget->findChild<QPushButton*>("confirmBtn");
    QPushButton* button2 = robortMove_widget->findChild<QPushButton*>("cancelBtn");
    button1->hide();
    button2->hide();
    ui->stackedWidget->setCurrentWidget(robortMove_widget);
    ui->label_version->setHidden(true);
    ui->label_sys->setHidden(true);
}
/**
 * @brief Widget::Btn_ResertTcp
 */
void Widget::Btn_ResertTcp()
{
    ui->stackedWidget->setCurrentWidget(fix_widget);
    ui->Az_Btnpose->setStyleSheet("QPushButton{background-color:rgb(20,150,200);}");
    ui->set_button->setStyleSheet("QPushButton{background-color:rgb(211,215,207);}");
    ui->runP_button->setStyleSheet("QPushButton{background-color:rgb(211,215,207);}");
    ui->makeP_button->setStyleSheet("QPushButton{background-color:rgb(211,215,207);}");
    ui->Az_Btnpose->setEnabled(true);
    ui->set_button->setEnabled(true);
    ui->runP_button->setEnabled(true);
    ui->makeP_button->setEnabled(true);
}
/**
 * @brief Widget::on_ConfirmSetWayPoint
 */
void Widget::on_ConfirmSetWayPoint()
{
    ui->stackedWidget->setCurrentWidget(treeRobortStruct_widget);
    if(Btn_clicked == Btn_set)
    {
       Btn_ResertTcp();
       QPushButton* button1 = fix_widget->findChild<QPushButton*>("set_btn");
       QPushButton* button2 = fix_widget->findChild<QPushButton*>("set_btn_2");
       button1->setText("修改点１");
       button2->setEnabled(true);
    }
    if(Btn_clicked == Btn_set_2)
    {
       Btn_ResertTcp();
       QPushButton* button1 = fix_widget->findChild<QPushButton*>("set_btn_2");
       QPushButton* button2 = fix_widget->findChild<QPushButton*>("set_btn_3");
       button1->setText("修改点2");
       button2->setEnabled(true);
    }
    if(Btn_clicked == Btn_set_3)
    {
       Btn_ResertTcp();
       QPushButton* button1 = fix_widget->findChild<QPushButton*>("set_btn_3");
       QPushButton* button2 = fix_widget->findChild<QPushButton*>("set_btn_4");
       button1->setText("修改点3");
       button2->setEnabled(true);
    }
    if(Btn_clicked == Btn_set_4)
    {
       Btn_ResertTcp();
       QPushButton* button1 = fix_widget->findChild<QPushButton*>("set_btn_4");
       QPushButton* button2 = fix_widget->findChild<QPushButton*>("set_sure");
       button1->setText("修改点4");
       button2->setEnabled(true);
    }
    if(Btn_clicked==Btn_zt)
    {
        Btn_ResertTcp();
        QPushButton* button1 = fix_widget->findChild<QPushButton*>("set_btn_zt");
        QPushButton* button2 = fix_widget->findChild<QPushButton*>("set_btn_zt2");
        button1->setText("修改点1");
        button2->setEnabled(true);
    }
    if(Btn_clicked==Btn_zt1)
    {
        Btn_ResertTcp();
        QPushButton* button1 = fix_widget->findChild<QPushButton*>("set_btn_zt2");
        QPushButton* button2 = fix_widget->findChild<QPushButton*>("set_sure_zt");//set_sure_zt
        button1->setText("修改点2");
        button2->setHidden(false);
    }
    if(TreeBtnClicked==Btn_coordinatePt1)
    {
        C_VaribleStruct.CoorDinatep1 = true;
    }
    if(TreeBtnClicked==Btn_coordinatePt2)
    {
        C_VaribleStruct.CoorDinatep2 = true;
    }
    if(TreeBtnClicked==Btn_coordinatePt3)
    {
        C_VaribleStruct.CoorDinatep3 = true;
    }
    emit confirmSetWayPointSignal();
}
/**
 * @brief Widget::onConcelSetWayPoint
 */
void Widget::onConcelSetWayPoint()
{
    ui->stackedWidget->setCurrentWidget(treeRobortStruct_widget);
    if(Btn_clicked==Btn_set||Btn_clicked==Btn_set_2 ||
       Btn_clicked==Btn_set_3||Btn_clicked==Btn_set_4)
    {
       Btn_clicked = Btn_None;
       Btn_ResertTcp();
    }
    if(Btn_clicked==Btn_zt||Btn_clicked==Btn_zt1)
    {
        Btn_clicked = Btn_None;
        Btn_ResertTcp();
    }
    TreeBtnClicked=Btn_TreeStackNone;
    Btn_clicked = Btn_None;
    C_VaribleStruct.CoorDinatep1 = false;
    C_VaribleStruct.CoorDinatep2 = false;
    C_VaribleStruct.CoorDinatep3 = false;
}
void Widget::closeEvent(QCloseEvent *event)
{
   int closeapp = QMessageBox::question(this,"消息栏",QString(tr("退出系统程序")));

   if (closeapp ==QMessageBox::Yes)
   {
       if(((Char_Vios.Control_Status_Flag>>1)&0x01)==1)
       {
           Motor_Stop_Node(MOTOR_ID_0);
           Motor_Stop_Node(MOTOR_ID_1);
           Motor_Stop_Node(MOTOR_ID_2);
           Motor_Stop_Node(MOTOR_ID_3);
           Motor_Stop_Node(MOTOR_ID_4);
           Motor_Stop_Node(MOTOR_ID_5);

           My_usleep(1500);
       }
       Vios485.Io_Flag_CuFa =1;
       Vios485.Io_Buf[13] =0;
       IntS_Vio.PulseSave_flag =1;
       sleep(1);
       if(((Char_Vios.Control_Status_Flag>>1)&0x01)==1)
       {
           Vios485.Io_Flag_CuFa = 1;
           Vios485.Io_Buf[14] = 0;
       }
       sleep(1);
       event->accept();
   }
   else
       event->ignore();
}
/**
 * @brief Widget::consoleTimeout
 */
void Widget::consoleTimeout()
{

    char response[10][256];
    uint16_t count = 0;
    uint16_t i = 0;
    if (get_console(response, &count))
    {
         for (i = 0; i < count; i++)
         {
             if(!Vios_BOOL.Moinitor_Flag)
             {
                 ui->logTextEdit->append(recv_prefix_green +*(response + i));
             }
             else
             {
                 ui->logTextEdit_2->append(recv_prefix_red+*(response+i));
                 Vios_BOOL.Moinitor_Flag = false;
             }
         }
    }
    //监控显示io当前状态
    io_status_console();
}
/**
 * @brief Widget::clear_log
 */
void Widget::clear_log()
{
    ui->logTextEdit->clear();
    ui->logTextEdit_2->clear();
    ui->label_sys->setHidden(true);
    ui->label_version->setHidden(true);
    consoleClear();
}
/**
 * @brief Widget::on_Az_Btnpose_clicked
 */
void Widget::on_Az_Btnpose_clicked()
{
    ui->Az_Btnpose->setStyleSheet("QPushButton{background-color:rgb(20,150,200);}");
    ui->set_button->setStyleSheet("QPushButton{background-color:rgb(211,215,207);}");
    ui->runP_button->setStyleSheet("QPushButton{background-color:rgb(211,215,207);}");
    ui->makeP_button->setStyleSheet("QPushButton{background-color:rgb(211,215,207);}");
    ui->stackedWidget->setCurrentWidget(fix_widget);
    ui->label_version->setHidden(true);
    ui->label_sys->setHidden(true);
}
/**
 * @brief Widget::io_status_console
 */
void Widget::io_status_console()
{
    for(int i=0;i<sizeof(Vios485.IO_out_Station)/sizeof(int);i++){
        if(Vios485.IO_out_Station[i]!=IO_out_Station[i]){
            IO_out_Station[i]=Vios485.IO_out_Station[i];
            char response[90];
            time_t tt;
            char buf[16] = {0};
            tt = time(NULL);
            strftime(buf, 16, "%m-%d %H:%M:%S", localtime(&tt));
            int offset = sprintf(response, "[本地时间: %s ]", buf);
            offset += sprintf(response+offset, " io数据反馈: %d 端口", i);
            if(Vios485.IO_out_Station[i]==1){
               offset += sprintf(response + offset, " 提示: %s","打开成功!");
               ui->logTextEdit_2->append(recv_prefix_green+response);
            }else{
               offset += sprintf(response + offset, " 提示: %s","关闭成功!");
               ui->logTextEdit_2->append(recv_prefix_red+response);
            }
        }
    }
}
