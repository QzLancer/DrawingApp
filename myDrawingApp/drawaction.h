#ifndef DRAWACTION_H
#define DRAWACTION_H
#include "circle.h"
#include <QPoint>
class DrawAction
{
public:
    DrawAction();
    void mousePress(QPoint point,Circle *circle);
    void mouseMove(QPoint point);

private:
    QPoint StartPoint;
    Circle *c_circle;
    int Radius;
};

#endif // DRAWACTION_H
