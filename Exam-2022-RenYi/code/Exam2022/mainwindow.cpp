#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <QFile>
#include <QtDebug>
#include <QTextStream>
#include <QMessageBox>
#include <QString>
#include <QQueue>




MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow),
      queeue(new QQueue<QTableWidgetItem>),
      queeue2(new QQueue<QTableWidgetItem>),
      row(0),
       id(1)
{
    ui->setupUi(this);

    loadData("D:\\Desktop\\Exam-2022\\Exam-2022-RenYi\\students.txt");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Escape)
    {
        ui->stackedWidget->setCurrentWidget(ui->menupage);
    }
}

void MainWindow::loadData(const QString &filename)
{
    QFile file(filename);
    //打开文件

    if(!file.open(QIODevice::ReadOnly))
    {
        qInfo()<<"open file failed";
        return;
    }
    //读取数据
    QTextStream stream(&file);
            //读取表头
        m_fields =  stream.readLine().split("\t",QString::SplitBehavior::SkipEmptyParts);
        //读取数据
        while(!stream.atEnd())
        {
            auto lineData = stream.readLine().split("\t",QString::SplitBehavior::SkipEmptyParts);
            auto s = new Students;
            s->number        =  lineData[0];
            s->name          =  lineData[1];
            s->classname     =  lineData[2];
            s->math          =  lineData[3].toDouble();
            s->physics       =  lineData[4].toDouble();
            s->english       =  lineData[5].toDouble();
            m_students.push_back(s);

        }
        for (auto s : m_students)
        {
            s->display();
        }

}

void MainWindow::saveData(const QString &filename)
{
    QFile file(filename);
        if(!file.open(QIODevice::WriteOnly|QIODevice::Append)){ // QIODevice io流类
            qDebug()<<"打开文件失败";
            return;
        }
        QTextStream out(&file);
        out<<str;
    //    str="";
        file.close();
}

void MainWindow::on_check_released()
{
    //切换到查看页面
    ui->stackedWidget->setCurrentWidget(ui->checkoutstudents);
    //把list中的数据显示到表格中
    ui->tableWidget->setColumnCount(m_fields.size());
    ui->tableWidget->setHorizontalHeaderLabels(m_fields);

    for( auto s : m_students)
    {
        //获取数量
        int row = ui->tableWidget->rowCount();
        //1.添加一个空行
        ui->tableWidget->insertRow(row);
        //2.把数据设置到空行中
        ui->tableWidget->setItem(row,0,new QTableWidgetItem(s->number));
        ui->tableWidget->setItem(row,1,new QTableWidgetItem(s->name));
        ui->tableWidget->setItem(row,2,new QTableWidgetItem(s->classname));
        ui->tableWidget->setItem(row,3,new QTableWidgetItem(QString::number(s->math)));
        ui->tableWidget->setItem(row,4,new QTableWidgetItem(QString::number(s->physics)));
        ui->tableWidget->setItem(row,5,new QTableWidgetItem(QString::number(s->english)));

    }
}

void MainWindow::on_students_released()
{
    //切换到统计页面
    ui->stackedWidget->setCurrentWidget(ui->findstudents);

}

void MainWindow::on_exit_released()
{
    close();//关闭窗口
}

void MainWindow::on_addbtn_released()
{
    //添加一个新行，在最下面
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    //跳转到最下面
    ui->tableWidget->scrollToBottom();
    //创建一个学生
    m_students.push_back(new Students);
}

void MainWindow::on_savebtn_released()
{
    for(int i=0;i<ui->tableWidget->rowCount();i++)
    {
        m_students[i]->number    =ui->tableWidget->item(i,0)->text();
        m_students[i]->name      =ui->tableWidget->item(i,1)->text();
        m_students[i]->classname =ui->tableWidget->item(i,2)->text();
        m_students[i]->math      =ui->tableWidget->item(i,3)->text().toDouble();
        m_students[i]->physics   =ui->tableWidget->item(i,4)->text().toDouble();
        m_students[i]->english   =ui->tableWidget->item(i,5)->text().toDouble();
    }

    QMessageBox::information(this,"保存提示","保存成功");
}

void MainWindow::on_deletebtn_released()
{
    if(ui->tableWidget->currentItem()){
            int n =0,m=0;
            int index = ui->tableWidget->currentRow();
            id   =ui->tableWidget->item(0,0)->text().toInt();
            QTableWidgetItem *iter = ui->tableWidget->item(index,0);
            QString s = str.left(4); // 拿到左边的4个字符 也就是学号
            for(int i = 0;i<=str.length();i++,n++){
                if(str[i] == "\n"){
                    if(s == iter->text()){
                        str.remove(m,i);
                    }
                    else {
                        m = i+1;
                        s = str.mid(m,4);
                    }
                }
            }
            if(str == "\n")
                str = "";
            qDebug()<<str;
            queeue->removeAt(ui->tableWidget->currentRow());
            queeue2->removeAt(ui->tableWidget->currentRow());
            ui->tableWidget->removeRow(ui->tableWidget->currentRow());
            row--;
            id--;
        }
}

void MainWindow::on_okbtn_released()
{

}


