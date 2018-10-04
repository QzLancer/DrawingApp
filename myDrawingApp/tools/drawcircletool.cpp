#include "drawcircletool.h"
#include "circle.h"
#include <QMouseEvent>
#include <QKeyEvent>
#include <QDebug>
#include "canvas.h"
#include <math.h>
DrawCircleTool::DrawCircleTool(Canvas *canvas):
    Tool(canvas)
{
    qDebug() << "New Circle is Structed.";
}

DrawCircleTool::~DrawCircleTool()
{

}

void DrawCircleTool::mousePress(QMouseEvent *event)
{
    qDebug()<< "mousePress";
    StartPoint = event->pos();
    m_circle = new Circle;
    m_circle->setPenColor(m_pen.color());
    m_circle->setPenWidth(m_pen.width());
    m_canvas->AddShape(m_circle);
    m_circle->setStartPoint(event->pos());
    m_circle->setRadius(0);
}

void DrawCircleTool::mouseMove(QMouseEvent *event)
{
    qDebug() << "mousemove";
    m_circle->setRadius(Radius);
    int x = pow(event->pos().x() - StartPoint.x(),2);
    int y = pow(event->pos().y() - StartPoint.y(),2);
    Radius = sqrt(x+y);
    m_circle->setRadius(Radius);
}

void DrawCircleTool::mouseRelease(QMouseEvent *event)
{
    qDebug() << "mouserelease";
}

void DrawCircleTool::keyPress(QKeyEvent *event)
{

}
