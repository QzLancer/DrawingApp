#ifndef SHAPE_H
#define SHAPE_H
#include <QPoint>
#include <QPainter>
//后续可添加线宽等参数
class Shape
{
public:
    Shape();
    QPoint getStartPoint() const;
    void setStartPoint(QPoint point);
    void setStartPoint(int x, int y);
    virtual void draw(QPainter *painter) = 0;

private:
    QPoint StartPoint;
};

#endif // SHAPE_H
