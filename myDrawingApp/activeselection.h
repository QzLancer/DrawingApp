#ifndef ACTIVESELECTION_H
#define ACTIVESELECTION_H
#include <vector>
#include <QPainter>
#include <QRect>
class Shape;

class ActiveSelection
{
public:
    ActiveSelection();
    void addShape(Shape *shape);
    void removeShape(Shape *shape);
    void clear();
    int size();
    void draw(QPainter *painter);

private:
    std::vector<Shape*> SelectedShape;
};

#endif // ACTIVESELECTION_H
