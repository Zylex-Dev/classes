#ifndef WIDGET_PAINT_H
#define WIDGET_PAINT_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>

class widget_paint : public QWidget
{
    Q_OBJECT
public:
    explicit widget_paint(QWidget *parent = nullptr);

    void paintEvent (QPaintEvent *event);

signals:

public:
    QImage *image = nullptr;

    void setImageSize(int width, int height); // функция которая задает размер окна

    void clear(); // очистка

public slots:
};

#endif // WIDGET_PAINT_H
