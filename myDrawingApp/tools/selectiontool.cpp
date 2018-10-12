#include "selectiontool.h"
#include <QDebug>
#include <QMouseEvent>
#include "canvas.h"
SelectionTool::SelectionTool(Canvas *canvas):Tool(canvas)
{

}

void SelectionTool::mousePress(QMouseEvent *event)
{
    qDebug() << "ClickedPoint:" << event->pos().x() << "," << event->pos().y();
    Shape *clicked = m_canvas->getShapeFromPos(event->pos().x(), event->pos().y());


}

void SelectionTool::mouseMove(QMouseEvent *event)
{

}

void SelectionTool::mouseRelease(QMouseEvent *event)
{

}

void SelectionTool::keyPress(QKeyEvent *event)
{

}
