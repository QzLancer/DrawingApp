#ifndef DRAWACTION_H
#define DRAWACTION_H
#include "circle.h"
#include <QPoint>
#include "shape.h"
#include "line.h"
#include "rectangle.h"

class Canvas;
class DrawAction
{
public:
    DrawAction();
    void mousePress(QPoint point,Canvas *canvas);
    void mouseMove(QPoint point);

private:
    QPoint StartPoint;
    Circle *c_circle;
    Line *c_line;
    Rectangle *c_rectangle;
    int Radius;
    Canvas *d_canvas;
};

#endif // DRAWACTION_H
