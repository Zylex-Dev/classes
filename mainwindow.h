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



private slots:
    void on_pushButton_Draw_clicked();

    void on_comboBox_DrawChoice_currentIndexChanged(int index);

    void IndexValue(int Index);

private:
    Ui::MainWindow *ui;

    int DrawChoiceIndex;

    void setting () // different ui settings
    {
        QWidget::showMaximized();
    }

};

#endif // MAINWINDOW_H
