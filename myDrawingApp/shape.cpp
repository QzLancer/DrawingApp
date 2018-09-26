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
