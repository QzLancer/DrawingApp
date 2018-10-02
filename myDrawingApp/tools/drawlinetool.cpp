#include "drawlinetool.h"
#include "rectangle.h"
#include "canvas.h"
#include <QMouseEvent>
#include <QKeyEvent>

DrawLineTool::DrawLineTool(Canvas *canvas):Tool(canvas)
{

}

void DrawLineTool::mousePress(QMouseEvent *event)
{
    StartPoint = event->pos();
    m_line = new Line;
    m_canvas->AddShape(m_line);
    m_line->setStartPoint(StartPoint);
    m_line->setPoint(StartPoint);
}

void DrawLineTool::mouseMove(QMouseEvent *event)
{
    FinalPoint = event->pos();
    m_line->setPoint(FinalPoint);
}

void DrawLineTool::mouseRelease(QMouseEvent *event)
{

}

void DrawLineTool::keyPress(QKeyEvent *event)
{

}


