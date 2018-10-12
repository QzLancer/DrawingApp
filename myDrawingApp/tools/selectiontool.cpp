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
    if(clicked != nullptr
            && selection->size() <= 1
            && !(event->modifiers() & Qt::ShiftModifier))
    {
        selection->clear();
        selection->addShape(clicked);
        clicked->Selected(true);
    }

    else if(clicked != nullptr
            && event->modifiers() & Qt::ShiftModifier
            )
    {
        if(clicked->isSelected())
        {
            selection->removeShape(clicked);
            clicked->Selected(false);
        }
        else
        {
            selection->addShape(clicked);
            clicked->Selected(true);
        }
    }

    else if(clicked == nullptr
            && !(event->modifiers() & Qt::ShiftModifier))
    {
        selection->clear();
    }
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
