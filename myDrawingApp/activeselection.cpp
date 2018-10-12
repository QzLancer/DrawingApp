#include "activeselection.h"
#include "shape.h"

ActiveSelection::ActiveSelection()
{

}

void ActiveSelection::addShape(Shape *shape)
{
    SelectedShape.push_back(shape);
}

void ActiveSelection::removeShape(Shape *shape)
{
    auto i = SelectedShape.begin();
    for(; i<= SelectedShape.end(); i++)
    {
        if(*i == shape)
            SelectedShape.erase(i);
    }
}

void ActiveSelection::clear()
{
    for(Shape *shape : SelectedShape)
        shape->Selected(false);
    SelectedShape.clear();
}

int ActiveSelection::size()
{
    return SelectedShape.size();
}

void ActiveSelection::draw(QPainter *painter)
{
    QPen pen(Qt::DashLine);
    pen.setWidth(2);
    pen.setColor(Qt::red);
    painter->setPen(pen);
    painter->setBrush(Qt::NoBrush);
    for(Shape *shape : SelectedShape)
        painter->drawRect(shape->getBoundary());
}

