#ifndef DOT_H
#define DOT_H


class dot
{
public:
    dot();

    void SetX(int new_x);
    void SetY(int new_y);
    void SetXY(int new_x, int new_y);

    int GetX(void);
    int GetY(void);
    void GetXY(int &zn_x, int &zn_y);

protected:
    int x;
    int y;
};

#endif // DOT_H
