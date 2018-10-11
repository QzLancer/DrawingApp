#ifndef LINE_H
#define LINE_H
#include "shape.h"
#include <QPoint>

class Line:public Shape
{
public:
    Line();
    void draw(QPainter *painter) override;
    void setPoint(QPoint p);
    void setPoint(int x, int y);
    void setPointX(int x);
    void setPointY(int y);
    QPoint getPoint();

private:
    QPoint point;
};

#endif // LINE_H
