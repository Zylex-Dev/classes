#include "dot.h"

dot::dot() // конструктор
{
    x = 0;
    y = 0;
}

// сеттеры

void dot::SetX(int new_x)
{
    x = new_x;
}
void dot::SetY(int new_y)
{
    y = new_y;
}
void dot::SetXY(int new_x, int new_y)
{
    x = new_x;
    y = new_y;
}

//геттеры

int dot::GetX(void)
{
    return (x);
}
int dot::GetY(void)
{
    return (y);
}
void dot::GetXY(int &zn_x, int &zn_y)
{
    zn_x = x;
    zn_y = y;
}
