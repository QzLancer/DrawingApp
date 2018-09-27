#include "rectangle.h"

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
    painter->drawRect(x,y,width,height);
}
