#include "drawaction.h"
#include <math.h>
#include <QDebug>
DrawAction::DrawAction()
{

}

void DrawAction::mousePress(QPoint point, Circle *circle)
{
    StartPoint.setX(point.x());
    StartPoint.setY(point.y());
    Radius = 0;
    c_circle = circle;
    c_circle->setStartPoint(StartPoint);
    c_circle->setRadius(Radius);
}

void DrawAction::mouseMove(QPoint point)
{
    Radius=sqrt(((StartPoint.x()-point.x())*(StartPoint.x()-point.x()))+((point.y()-StartPoint.y())*(point.y()-StartPoint.y())));
    c_circle->setRadius(Radius);
    qDebug() << "StartPoint:" << StartPoint.x()<< "," << StartPoint.y();
    qDebug() << "Point:" << point.x() << "," << point.y();
    qDebug() << "Radius:" << Radius;
}
