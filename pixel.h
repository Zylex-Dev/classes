#ifndef PIXEL_H
#define PIXEL_H
#include "dot.h"
#include "color.h"
#include <QImage>
#include <QPainter>


class pixel : public dot, public color
{
public:
    pixel();

    void draw(QImage &im);
};

#endif // PIXEL_H
