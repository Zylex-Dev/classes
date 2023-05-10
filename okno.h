#ifndef OKNO_H
#define OKNO_H

#include <QMainWindow>

namespace Ui {
class okno;
}

class okno : public QMainWindow
{
    Q_OBJECT

public:
    explicit okno(QWidget *parent = nullptr);
    ~okno();

private slots:
    void on_pushButton_OK_clicked();

    void on_pushButton_PixelColor_clicked();

    void on_comboBox_DrawChoice_currentIndexChanged(int index);

    void setValidator(); // Validator

private:
    Ui::okno *ui;
};

#endif // OKNO_H
