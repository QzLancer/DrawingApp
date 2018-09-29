#ifndef GROUP_H
#define GROUP_H
#include <vector>
#include "Shape.h"
#include <QPainter>
//Can add some action about 'vector'

class Group
{
public:
    Group();
    ~Group();
    void addShape(Shape *shape);
    std::vector<Shape*> getvecShape();
    int getGroupSize();
    void draw(QPainter *painter);

private:
    std::vector<Shape*> vecShape;
};

#endif // GROUP_H
