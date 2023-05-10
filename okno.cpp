#include "okno.h"
#include "ui_okno.h"

okno::okno(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::okno)
{
    ui->setupUi(this);

    setValidator();

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

void okno::on_comboBox_DrawChoice_currentIndexChanged(int index) // change combobox
{
     if (index == 0)
         ui->stackedWidget->setCurrentIndex(0);

     if (index == 1)
         ui->stackedWidget->setCurrentIndex(1);

     if (index == 2)
         ui->stackedWidget->setCurrentIndex(2);

     if (index == 3)
         ui->stackedWidget->setCurrentIndex(3);

     if (index == 4)
         ui->stackedWidget->setCurrentIndex(4);

     if (index == 5)
         ui->stackedWidget->setCurrentIndex(5);

     if (index == 6)
         ui->stackedWidget->setCurrentIndex(6);

     if (index == 7)
         ui->stackedWidget->setCurrentIndex(7);
}

void okno::setValidator()
{
    QRegExp regExp("\\d{0,1000}");
    QValidator *validator = new QRegExpValidator(regExp);
    ui->lineEdit_PixelCoordinatesX->setValidator(validator);
    ui->lineEdit_PixelCoordinatesY->setValidator(validator);
    ui->lineEdit_PixelBrushWidth->setValidator(validator);
}
