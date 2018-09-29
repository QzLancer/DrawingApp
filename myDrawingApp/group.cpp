#include "group.h"

Group::Group()
{

}

void Group::addShape(Shape *shape)
{
    vecShape.push_back(shape);
}

std::vector<Shape*> Group::getvecShape()
{
    return vecShape;
}

int Group::getGroupSize()
{
    return vecShape.size();
}

void Group::draw(QPainter *painter)
{
    for(Shape *shape: vecShape)
        shape->draw(painter);
}
