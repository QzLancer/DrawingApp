#include "line.h"
#include <QDebug>

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

bool Line::Contains(int x, int y)
{
    int difX = x - StartPoint.x();
    int difY = y - StartPoint.y();
    float r = pen.width() <= 4 ? 4 : pen.width(); // impact margin

    // calculate whether line is clicked using circle-line intersection:
    float A, B, C, m, f, discriminant;

    float dx = point.x() - StartPoint.x();

    // convert points m_p1 and m_p2 to the equation of the line y = mx + f
    m = float(point.y() - StartPoint.y()) / dx;
    f = StartPoint.y() - m * StartPoint.x();

    A = m*m + 1;
    B = 2 * (m*f - m*y - x);
    C = y*y - r*r + x*x - 2*f*y + f*f;

    discriminant = B*B - 4*A*C;

    bool inRange = (difX * (point.x() - StartPoint.x() - difX)) >= 0 &&
            (difY * (point.y() - StartPoint.y() - difY)) >= 0;

    qDebug() << inRange;
    return discriminant >= 0 && inRange;
}

QRect Line::getBoundary()
{
    return QRect(StartPoint.x(),
                 StartPoint.y(),
                 point.x() - StartPoint.x(),
                 point.y() - StartPoint.y());
}
