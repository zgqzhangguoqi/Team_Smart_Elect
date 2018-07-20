#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMouseEvent>
#include<QPaintEvent>
#include<QtGui>
#include<QLabel>
#include<QDateTime>
#include<QTimer>
#include<QString>
#include<QtNetwork>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    //添加服务器程基本变量
public:

          QString deal,tem,light,hum;
           QTcpServer *tcpServer;
           QTcpSocket *tcpSocket;
           QString message;  //存放从服务器接收到的字符串
           quint16 blockSize; //存放文件的大小信息
           //系统时间
               QDateTime current_date_time;
               QString str_date_time;


      private slots:
               void sendMessage();       //发送消息的方法
               void newConnect();  //接收客户端发送的数据
               void receiveData();       //接收数据的方法
               void displayError(QAbstractSocket::SocketError socketError);//出错时的方法
               void judgement();



    //
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     void Paint();
     int temp_data[10]={0};
     int false_data[10]={26,27,25,26,24,25,26,26,26,27};
     //virtual void timerEvent( QTimerEvent *event);

private:
    Ui::MainWindow *ui;
    QImage image;

     int m_nTimerID;
protected:
    /*添加自定义方法，paintEvent（）
      drawImage：设置显示位置
     */
    void paintEvent(QPaintEvent *){

       QPainter painter(this);
       painter.drawImage(40,100,image);

    }

private slots:
    void timerUpdate(void);
    void on_lcd_temp_listen();
    void on_lcd_hum_listen();
    void on_edit_sun_listen();
    void on_radio_auto_clicked();
    void on_combox_fan_set();
    void on_combox_time_listen();
    void on_btn_temp_clicked();
    void update_cap();
    void on_send_message_push_button_clicked();
    void on_listen_clicked();
};

#endif // MAINWINDOW_H
