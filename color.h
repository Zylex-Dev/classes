#ifndef COLOR_H
#define COLOR_H


class color
{
public:
    color();
    bool SetRGBA(int r, int g, int b, int a);
    void GetRGBA(int &r, int &g, int &b, int &a);

protected:
    int red;
    int green;
    int blue;
    int alpha; // прозрачность
};

#endif // COLOR_H
