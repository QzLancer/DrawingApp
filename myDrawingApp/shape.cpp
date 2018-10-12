#include "shape.h"
#include <QPoint>
#include <QDebug>

Shape::Shape()
{
    StartPoint.setX(50);
    StartPoint.setY(50);
    brush.setStyle(Qt::SolidPattern);
    selection = false;
}

QPoint Shape::getStartPoint() const
{
    return StartPoint;
}

void Shape::setStartPoint(QPoint point)
{
    StartPoint = point;
}

void Shape::setStartPointX(int x)
{
    StartPoint.setX(x);

}

void Shape::setStartPointY(int y)
{
    StartPoint.setY(y);
}

int Shape::getPenWidth()
{
    return pen.width();
}

QColor Shape::getPenColor()
{
    return pen.color();
}

QColor Shape::getFillColor()
{
    return brush.color();
}

void Shape::setPenWidth(int width)
{
    pen.setWidth(width);
}

void Shape::setPenColor(QColor color)
{
    pen.setColor(color);
}

void Shape::setPen(QPainter *painter)
{
    painter->setPen(pen);
}

void Shape::setFillColor(QColor color)
{
    brush.setColor(color);
}

void Shape::Selected(bool select)
{
    selection = select;
}

bool Shape::isSelected()
{
    return selection;
}
