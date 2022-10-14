#include "widget.h"
#include <QApplication>
#include "Robort_Data_Ready_Thread/trajectoryplanthread.h"
#include "Robort_Data_Send_Thread/robotthread.h"
#include "Global_Function/global_varable.h"
#include "Code_Interupt_File/interup_thread.h"
#include "Dynamic_Programing/Do_Current_Detection/do_deal_current.h"
#include <QMessageBox>
#include <QFile>
#include <fcntl.h>
#include <unistd.h>
bool checkOnly()
{
    const char filename[]  = "lockfile";
    int fd = open (filename, O_WRONLY | O_CREAT , 0644);
    int flock = lockf(fd, F_TLOCK, 0 );
    if (fd == -1)
    {
        perror("open lockfile/n");
        return false;
    }
    //给文件加锁
    if (flock == -1) {
        perror("lock file error/n");
        return false;
    }
    //程序退出后，文件自动解锁
    return true;
}
int main(int argc, char *argv[])
{
    if(checkOnly()==false)
           return 0;
    QApplication a(argc, argv);
    Widget w;
    w.show();
    //after
    QFile outFile1("./Log/ShowLog1.txt");
    QFile outFile2("./Log/ShowLog2.txt");
    outFile2.remove();
    QFile::copy("./Log/ShowLog1.txt","./Log/ShowLog2.txt");
    outFile1.remove();
    //
    QFile outFile18("./Log/Show38Log1.txt");
    QFile outFile28("./Log/Show38Log2.txt");
    outFile28.remove();
    QFile::copy("./Log/Show38Log1.txt","./Log/Show38Log2.txt");
    outFile18.remove();
    //
    QFile file_profile(&w);
    file_profile.setFileName("/home/iimtprofile.data");
    if(!file_profile.open(QFile::ReadOnly)){
        QMessageBox::about(&w,"提示","打开零点配置文件失败");
    }
    QString str = QLatin1String(file_profile.readLine());

    char *zero_datastr=str.toLatin1().data();
    sscanf(zero_datastr, "%d,%d,%d,%d,%d,%d", &PostionS_Vio.initAngleOffset[0],&PostionS_Vio.initAngleOffset[1],&PostionS_Vio.initAngleOffset[2],&PostionS_Vio.initAngleOffset[3],
            &PostionS_Vio.initAngleOffset[4],&PostionS_Vio.initAngleOffset[5]);
    PostionS_Vio.Robot_Zero_Pos[0]=PostionS_Vio.initAngleOffset[0];
    PostionS_Vio.Robot_Zero_Pos[1]=PostionS_Vio.initAngleOffset[1];
    PostionS_Vio.Robot_Zero_Pos[2]=PostionS_Vio.initAngleOffset[2];
    PostionS_Vio.Robot_Zero_Pos[3]=PostionS_Vio.initAngleOffset[3];
    PostionS_Vio.Robot_Zero_Pos[4]=PostionS_Vio.initAngleOffset[4];
    PostionS_Vio.Robot_Zero_Pos[5]=PostionS_Vio.initAngleOffset[5];
    file_profile.close();
    QFile file(&w);
    file.setFileName("angle.data");
    if(!file.open(QFile::ReadOnly)){
        QMessageBox::about(&w,"提示","恢复angle失败");
    }
    QString angle_str = QLatin1String(file.readLine());
    QByteArray ba = angle_str.toLatin1();
    char *angle_datastr = ba.data();
    sscanf(angle_datastr, "%f,%f,%f,%d", &Float_Vios.RecoverAngle[0],&Float_Vios.RecoverAngle[1],&Float_Vios.RecoverAngle[2],&IntS_Vio.RecoverIndex);
    file.close();
    //
    QFile File1("./DragParam.data");
    if(!File1.open(QFile::ReadOnly)){
        QMessageBox::about(NULL,"提示","恢复DragParam失败");
    }
    QString Param_str = QLatin1String(File1.readLine());
    ba = Param_str.toLatin1();
    char *DragParam = ba.data();
    sscanf(DragParam, "%f,%f,%f,%f,%f,%f",&TuoDong_Collison_Vios.freeDragParam[0],&TuoDong_Collison_Vios.freeDragParam[1],&TuoDong_Collison_Vios.freeDragParam[2],
            &TuoDong_Collison_Vios.freeDragParam[3],&TuoDong_Collison_Vios.freeDragParam[4],&TuoDong_Collison_Vios.freeDragParam[5]);
    File1.close();
    //
    QFile File2("./Collision_Threshold.data");
    if(!File2.open(QFile::ReadOnly)){
        QMessageBox::about(NULL,"提示","恢复Collision_Threshold失败");
    }
    QString Threshold_str = QLatin1String(File2.readLine());
    ba = Threshold_str.toLatin1();
    char *Threshold_Co = ba.data();
    sscanf(Threshold_Co, "%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f",&TuoDong_Collison_Vios.Collision_Threshold[0][0],&TuoDong_Collison_Vios.Collision_Threshold[0][1],&TuoDong_Collison_Vios.Collision_Threshold[0][2],
            &TuoDong_Collison_Vios.Collision_Threshold[0][3],&TuoDong_Collison_Vios.Collision_Threshold[0][4],&TuoDong_Collison_Vios.Collision_Threshold[0][5],&TuoDong_Collison_Vios.Collision_Threshold[1][0],&TuoDong_Collison_Vios.Collision_Threshold[1][1],
            &TuoDong_Collison_Vios.Collision_Threshold[1][2],&TuoDong_Collison_Vios.Collision_Threshold[1][3],&TuoDong_Collison_Vios.Collision_Threshold[1][4],&TuoDong_Collison_Vios.Collision_Threshold[1][5]);
    File2.close();
    //
    DoData_Thread();
    Robort_DataThread();
    Robort_DataTrajectory_Thread();

    interup_thread* Interup_FileThread = new interup_thread();
    Interup_FileThread->start(QThread::NormalPriority);
    Interup_FileThread->start();
    return a.exec();
}
