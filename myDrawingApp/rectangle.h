#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
#include <QPainter>

class Rectangle:public Shape
{
public:
    Rectangle();
    void setHeight(int h);
    void setWidth(int w);
    int getHeight();
    int getWidth();
    void draw(QPainter *painter) override;

private:
    int height;
    int width;
};

#endif // RECTANGLE_H
