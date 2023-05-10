#ifndef PEN_H
#define PEN_H
#include "color.h"

class pen : public color
{
public:
    pen();
    bool SetWidth(int n_width);
    int GetWidth(void);
    bool SetStyle(int n_style);
    int GetStyle(void);

protected:
    int width;
    int style;

};

#endif // PEN_H
