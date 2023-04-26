#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>

namespace Ui {
class window;
}

class window : public QMainWindow
{
    Q_OBJECT

public:
    explicit window(QWidget *parent = nullptr);
    ~window();

private:
    Ui::window *ui;
};

#endif // WINDOW_H
