#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : // constructor
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // initialize ui setting
    setting();
}

MainWindow::~MainWindow() // destructor
{
    delete ui;
}

void MainWindow::on_pushButton_Draw_clicked() // pushbutton draw
{
    Dialog * my_d = new Dialog(this);
    my_d->exec();
    delete my_d;
}
