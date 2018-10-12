#ifndef SHAPE_H
#define SHAPE_H
#include <QPoint>
#include <QPainter>
#include <QPen>
#include <QBrush>
#include "mainwindow.h"

//后续可添加线宽等参数
class Shape
{
public:
    Shape();
    QPoint getStartPoint() const;
    void setStartPoint(QPoint point);
    void setStartPointX(int x);
    void setStartPointY(int y);
    virtual void draw(QPainter *painter) = 0;
    int getPenWidth();
    QColor getPenColor();
    QColor getFillColor();
    void setPenWidth(int width);
    void setPenColor(QColor color);
    void setPen(QPainter *painter);
    void setFillColor(QColor color);
    virtual bool Contains(int x, int y) = 0;

protected:
    QPoint StartPoint;
    QPen pen;
    QBrush brush;
};

#endif // SHAPE_H
