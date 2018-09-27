#include "shape.h"
#include <QPoint>
Shape::Shape()
{
    StartPoint=QPoint(50,50);
}

QPoint Shape::getStartPoint() const
{
    return StartPoint;
}

void Shape::setStartPoint(QPoint point)
{
    StartPoint = point;
}

void Shape::setStartPoint(int x, int y)
{
    StartPoint.setX(x);
    StartPoint.setY(y);
}
