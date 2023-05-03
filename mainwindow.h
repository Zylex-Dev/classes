#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "okno.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void on_comboBox_DrawChoice_currentIndexChanged(int index);



private slots:
    void on_pushButton_Draw_clicked();

    //void on_comboBox_DrawChoice_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;

    int DrawChoiceIndex;

    void setting () // different ui settings
    {
        QWidget::showMaximized();
    }

signals:
    void comboBoxIndexChanged(int index);

};

#endif // MAINWINDOW_H
