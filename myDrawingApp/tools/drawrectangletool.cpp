#include "drawrectangletool.h"

DrawRectangleTool::DrawRectangleTool(Canvas *canvas):Tool(canvas)
{

}

void DrawRectangleTool::mousePress(QMouseEvent *event)
{
    StartPoint = event->pos();
    height = 0;
    width = 0;
    rectangle = new Rectangle;
    rectangle->setPenColor(m_pen.color());
    rectangle->setPenWidth(m_pen.width());
    rectangle->setFillColor(m_brush.color());
    m_canvas->AddShape(rectangle);
    rectangle->setStartPoint(StartPoint);
    rectangle->setHeight(height);
    rectangle->setWidth(width);
}

void DrawRectangleTool::mouseMove(QMouseEvent *event)
{
    height = event->pos().y() - StartPoint.y();
    width = event->pos().x() - StartPoint.x();
    rectangle->setHeight(height);
    rectangle->setWidth(width);
}

void DrawRectangleTool::mouseRelease(QMouseEvent *event)
{

}

void DrawRectangleTool::keyPress(QKeyEvent *event)
{

}

