#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "Program_UI/set_ui/c_setting.h"
#include "Program_UI/robort_tree_ui/c_treerobortstruct.h"
#include "Program_UI/robort_move_ui/robort_move.h"
#include "Program_UI/set_ui/c_setting.h"
#include "Io_Communication/485/serialport.h"
#include "Program_UI/fix_ui/fix.h"
#include "Program_UI/robort_tree_ui/tree_stack.h"
#include <QTimer>
#include <QCloseEvent>
#include "NetWork/NetworkServer.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void button_set();
    //监控显示io当前状态
    void io_status_console();
    //启动网络接口服务器
    void initNetWork();
public slots:
    void clear_log();
    void WidgetUpdate();
public:
    void SignalSet();
private slots:
    void on_ConfirmSetWayPoint();
    void onConcelSetWayPoint();
    void consoleTimeout();
signals:
      void confirmSetWayPointSignal();
private slots:
/**
 * @brief on_set_button_clicked
 */
    void on_set_button_clicked();

    void on_makeP_button_clicked();

    void on_runP_button_clicked();

    void on_SetWayPoint1();

    void on_Az_Btnpose_clicked();
private slots:
    void RobortTcp_MoWidg_show();
    void Btn_Cancle_SigSlot();
    void Btn_ResertTcp();
protected:
    void closeEvent(QCloseEvent *event);
private:
    Ui::Widget *ui;
    C_Setting *set_widget;
    C_TreeRobortStruct *treeRobortStruct_widget;
    robort_move *robortMove_widget;
    Fix *fix_widget;
    Tree_Stack *TreeStackWidget;
private:
    serialPort *SerialPor_IIMT;
    QTimer *consoleTimer;
    QString recv_prefix_green;
    QString recv_prefix_red;
    int IO_out_Station[IO_DIGITAL_OUTPUT_COUNT];
};

#endif // WIDGET_H
