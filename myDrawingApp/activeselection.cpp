#include "activeselection.h"
#include "shape.h"

ActiveSelection::ActiveSelection()
{

}

void ActiveSelection::addShape(Shape *shape)
{
    SelectedShape.push_back(shape);
}

void ActiveSelection::clear()
{
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

