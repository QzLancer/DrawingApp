#include "selectiontool.h"
#include <QDebug>

SelectionTool::SelectionTool(Canvas *canvas):Tool(canvas)
{

}

void SelectionTool::mousePress(QMouseEvent *event)
{
    qDebug() << "Selection is activited.";
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
