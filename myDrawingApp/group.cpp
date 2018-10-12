#include "group.h"
#include <QDebug>

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

Shape *Group::getClicked(int x, int y)
{
    for(int i = vecShape.size()-1; i>=0; i--)
    {
        if(vecShape[i]->Contains(x, y))
        {
            qDebug() << "vecShape:" << i << "is Selected";
            return vecShape[i];
        }
    }
    return nullptr;
}
