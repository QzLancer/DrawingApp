#include "drawaction.h"
#include <math.h>
#include <QDebug>
#include "canvas.h"
#include "circle.h"

DrawAction::DrawAction()
{
    c_circle = new Circle;
}

void DrawAction::mousePress(QPoint point, Canvas *canvas)
{
    d_canvas = canvas;
    StartPoint = point;
    Circle *circle = new Circle;
    c_circle = circle;
    c_circle->setStartPoint(point);
    c_circle->setRadius(0);
    d_canvas->ShapeGroup->addShape(c_circle);
}

void DrawAction::mouseMove(QPoint point)
{
    int radius = sqrt(pow((point.x()-StartPoint.x()),2)+pow((point.y()-StartPoint.y()),2));
    c_circle->setRadius(radius);
    qDebug() << "radius:" << radius;
    qDebug() << "StartPoint:" << StartPoint.x() << "," << StartPoint.y();
    qDebug() << "Point:" << point.x() << "," << point.y();
}
