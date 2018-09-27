#include "shape.h"
#include <QPoint>
Shape::Shape()
{
    StartPoint.setX(50);
    StartPoint.setY(50);
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
