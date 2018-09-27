#include "circle.h"

Circle::Circle()
{
    radius = 50;
}

void Circle::setRadius(int r)
{
    radius = r;
}

int Circle::getRadius() const
{
    return radius;
}

void Circle::draw(QPainter *painter)
{
    painter->drawEllipse(getStartPoint(),radius,radius);
}
