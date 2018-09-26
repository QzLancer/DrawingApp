#include "circle.h"

Circle::Circle()
{
    XPosition=50;
    YPosition=50;
    Radius=50;
}

void Circle::setXPosition(int x)
{
    XPosition=x;
}

void Circle::setYPosition(int y)
{
    YPosition=y;
}

void Circle::setRadius(int r)
{
    Radius=r;
}

int Circle::getXposition() const
{
    return XPosition;
}

int Circle::getYposition() const
{
    return YPosition;
}

int Circle::getRadius() const
{
    return Radius;
}

void Circle::draw(QPainter *painter)
{
    painter->drawEllipse(XPosition,YPosition,Radius,Radius);
}
