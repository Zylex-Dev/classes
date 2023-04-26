#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) : // constructor
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // initialize ui setting
    setting();
    ui->comboBox_DrawChoice->setCurrentIndex(0);


}

MainWindow::~MainWindow() // destructor
{
    delete ui;
}

void MainWindow::on_pushButton_Draw_clicked() // pushbutton draw
{

    //creating a dialog window
    window * my_w = new window (this);
    my_w->setWindowModality(Qt::WindowModal);
    my_w->show();
 //   delete my_w;


}

void MainWindow::on_comboBox_DrawChoice_currentIndexChanged(int index)
{
    DrawChoiceIndex = index;
}

