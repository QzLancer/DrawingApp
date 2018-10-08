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
    painter->setPen(pen);
    painter->setBrush(brush);
    painter->drawEllipse(getStartPoint(),radius,radius);
}
