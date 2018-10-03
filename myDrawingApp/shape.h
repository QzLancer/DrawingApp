#ifndef SHAPE_H
#define SHAPE_H
#include <QPoint>
#include <QPainter>
#include <QPen>
#include "mainwindow.h"

//后续可添加线宽等参数
class Shape
{
public:
    Shape();
    QPoint getStartPoint() const;
    void setStartPoint(QPoint point);
    void setStartPoint(int x, int y);
    virtual void draw(QPainter *painter) = 0;
    int getPenWidth();
    QColor getPenColor();
    void setPenWidth(int width);
    void setPenColor(QColor color);
    void setPen(QPainter *painter);

private:
    QPoint StartPoint;
    QPen pen;
};

#endif // SHAPE_H
