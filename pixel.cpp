#include "pixel.h"

pixel::pixel()
{

}

void pixel::draw(QImage &im)
{
    QPainter painter (&im);
    QColor color;

    color.setRgb(red,green,blue,alpha);


}
