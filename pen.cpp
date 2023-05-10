#include "pen.h"

pen::pen() // конструктор
{
    width = 1;
    style = 1;
}

bool pen::SetWidth(int n_width)
{
    if (n_width < 0 or n_width > 5000)
        return 0;

    width = n_width;
    return 1;
}
int pen::GetWidth(void)
{
    return (width);
}
bool pen::SetStyle(int n_style)
{
    if (n_style == 0)
        return 0;

    style = n_style;
    return 1;
}
int pen::GetStyle(void)
{
    return (style);
}
