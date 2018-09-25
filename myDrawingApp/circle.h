#ifndef CIRCLE_H
#define CIRCLE_H
#include <QPainter>

class Circle
{
public:
    Circle();
    void setXPosition(int x);
    void setYPosition(int y);
    void setRadius(int r);
    int getXposition() const;
    int getYposition() const;
    int getRadius() const;
    void draw(QPainter *painter);

private:
    int XPosition;
    int YPosition;
    int Radius;
};

#endif // CIRCLE_H
