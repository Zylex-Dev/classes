#include "okno.h"
#include "ui_okno.h"

okno::okno(QMainWindow *mainWindow, QWidget *parent) :
    QMainWindow(parent), mMainwindow(mainWindow),
    ui(new Ui::okno)
{
    ui->setupUi(this);
    connect(mMainwindow, SIGNAL(comboBoxIndexChanged(int)), this, SLOT(comboBoxIndexChangedSlot(int)));



}

okno::~okno()
{
    delete ui;
}

void okno::on_pushButton_OK_clicked() // button OK clicked
{
    close();
}

void okno::on_pushButton_PixelColor_clicked() // choose color
{

}

void okno::comboBoxIndexChangedSlot(int index)
{
    ui->stackedWidget->setCurrentIndex(index);
}
