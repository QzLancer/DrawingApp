#include "circle.h"

Circle::Circle()
{
    radius = 50;
    setPenColor(Qt::green);
    setPenWidth(5);
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
    setPen(painter);
    painter->drawEllipse(getStartPoint(),radius,radius);
}
