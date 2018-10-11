#include "line.h"

Line::Line():point(100,100)
{

}

void Line::draw(QPainter *painter)
{
    painter->setPen(pen);
    painter->drawLine(getStartPoint(), point);
}

void Line::setPoint(QPoint p)
{
    point = p;
}

void Line::setPoint(int x, int y)
{
    point.setX(x);
    point.setY(y);
}

void Line::setPointX(int x)
{
    point.setX(x);
}

void Line::setPointY(int y)
{
    point.setY(y);
}

QPoint Line::getPoint()
{
    return point;
}
