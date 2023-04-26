#include "okno.h"
#include "ui_okno.h"

okno::okno(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::okno)
{
    ui->setupUi(this);



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
