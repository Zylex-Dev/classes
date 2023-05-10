#include "widget_paint.h"

widget_paint::widget_paint(QWidget *parent) : QWidget(parent)
{

}

void  widget_paint::paintEvent(QPaintEvent *event) // PaintEvent для рисования в QWidget
{
    if (image != nullptr)
    {
        QPainter *painter = new QPainter(this);

        painter->drawImage(0,0, *image);

        painter->end();
    }
    event->accept();
}

void widget_paint::setImageSize(int width, int height) // размер окна (ширина, высота)
{
    if (image != nullptr)
    {
        delete image;
    }
    image = new QImage (width, height, QImage::Format_ARGB32_Premultiplied);
}

void widget_paint::clear()
{
    image->fill(0);
}
