#ifndef CIRCLE_H
#define CIRCLE_H
#include <QPainter>
#include "shape.h"
class Circle:public Shape
{
public:
    Circle();
    void setRadius(int r);
    int getRadius() const;
    void draw(QPainter *painter) override;
    bool Contains(int x, int y) override;
    QRect getBoundary() override;
private:
    int radius;
};

#endif // CIRCLE_H
