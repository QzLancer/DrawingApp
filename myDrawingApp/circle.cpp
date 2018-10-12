#include "circle.h"
#include <QDebug>

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

bool Circle::Contains(int x, int y)
{
    int difX = x - StartPoint.x();
    int difY = y - StartPoint.y();
    int DistoStartPoint = difX * difX + difY * difY;
    int ActualRadius = radius + pen.width();
    return DistoStartPoint <= ActualRadius*ActualRadius;
}
