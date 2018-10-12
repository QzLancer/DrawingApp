#include "rectangle.h"
#include <math.h>
Rectangle::Rectangle():height(100),
                       width(100)
{

}

void Rectangle::setHeight(int h)
{
    height = h;
}

void Rectangle::setWidth(int w)
{
    width = w;
}

int Rectangle::getHeight()
{
    return height;
}

int Rectangle::getWidth()
{
    return width;
}

void Rectangle::draw(QPainter *painter)
{
    int x = getStartPoint().x();
    int y = getStartPoint().y();
    painter->setPen(pen);
    painter->setBrush(brush);
    painter->drawRect(x,y,width,height);
}

bool Rectangle::Contains(int x, int y)
{
    //How to define the actual select range?
    int difX = x - StartPoint.x();
    int difY = y - StartPoint.y();
    return  (difX * (width - difX) >= 0) &&
            (difY * (height - difY) >= 0);
}
