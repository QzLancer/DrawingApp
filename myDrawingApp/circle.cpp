#include "circle.h"

Circle::Circle()
{
    Radius = 50;
}

void Circle::setRadius(int r)
{
    Radius = r;
}

int Circle::getRadius() const
{
    return Radius;
}

void Circle::draw(QPainter *painter)
{
    painter->drawEllipse(getStartPoint(),Radius,Radius);
}
