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

    //creating a window
    okno * my_w = new okno (this);
    my_w->setWindowModality(Qt::WindowModal);
    my_w->show();

}
