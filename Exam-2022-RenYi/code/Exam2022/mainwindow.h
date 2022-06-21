#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "Students.h"
#include <QStringList>
#include <QList>
#include <QTableWidgetItem>
#include <QString>



namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;
    //键盘操作
    void keyPressEvent(QKeyEvent *event) override;
    //加载数据（从文件中读取数据）
    void loadData(const QString& filename);
    void saveData(const QString& filename);
private slots:
    void on_check_released();

    void on_students_released();

    void on_exit_released();

    void on_addbtn_released();

    void on_savebtn_released();

    void on_deletebtn_released();

    void on_okbtn_released();

private:
    Ui::MainWindow *ui;
    QStringList m_fields;//表头字段
    QList<Students*>m_students;
    QString str;
    QQueue<QTableWidgetItem>*queeue;    // 存储学号的容器
    QQueue<QTableWidgetItem>*queeue2;   // 存储姓名的容器
    int row;    // 行
    int id;//学号


};

#endif // MAINWINDOW_H
