#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QSerialPort"
#include "QSerialPortInfo"
#include "QMessageBox"
//定义一个串口对象指针
QSerialPort * COM=new QSerialPort();
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_update_port_clicked()
{
    foreach(const QSerialPortInfo & info,QSerialPortInfo::availablePorts())
    {
        ui->port_select->addItem(info.portName());
    }
}


void MainWindow::on_open_port_clicked()
{
    QSerialPort::BaudRate baudRate;//波特率
    QSerialPort::DataBits databits;//数据位
    QSerialPort::StopBits stopbits;
    QSerialPort::Parity   checkbits;
    stopbits=QSerialPort::OneStop;
    baudRate=QSerialPort::Baud115200;
    databits=QSerialPort::Data8;
    checkbits=QSerialPort::NoParity;
    if(ui->bolt_select->currentText()=="9600")
    {
        baudRate=QSerialPort::Baud9600;
    }
    //初始化串口
    COM->setPortName(ui->port_select->currentText());//端口名字
    COM->setBaudRate(baudRate);
    COM->setDataBits(databits);
    COM->setParity(checkbits);
    COM->setStopBits(stopbits);
    //串口操作
    if(ui->open_port->text()=="打开串口")
    {
        if(COM->open(QIODevice::ReadWrite))
        {
            ui->open_port->setText("关闭串口");
        }
        else
        {
            QMessageBox::critical(this,"错误提示","打开串口失败");
        }
    }
    else if (ui->open_port->text()=="关闭串口")
    {
         ui->open_port->setText("打开串口");
         COM->close();
    }

}


