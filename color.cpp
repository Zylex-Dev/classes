#include "color.h"

color::color() // конструктор
{
    red = 0;
    green = 0;
    blue = 0;
    alpha = 255;
}
// сеттер

bool color::SetRGBA(int r, int g, int b, int a)
{
    if ((0 <= r <= 255) or (0 <= g >= 255) or (0 <= b >= 255) or (0 <= a >= 255))
    {
        red = r;
        green = g;
        blue = b;
        alpha = a;
    }
    else
    {
        return 0;
    }
}

// геттер
void color::GetRGBA(int &r, int &g, int &b, int &a)
{
    r = red;
    g = green;
    b = blue;
    a = alpha;
}
