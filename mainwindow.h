#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "okno.h"
#include "widget_paint.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_Draw_clicked();


private:
    Ui::MainWindow *ui;

    void setting () // different ui settings
    {
        QWidget::showMaximized();
    }

};

#endif // MAINWINDOW_H
