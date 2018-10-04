#include "tool.h"
#include <QEvent>
#include <QMouseEvent>
#include <QKeyEvent>
#include "canvas.h"

Tool::Tool(Canvas *canvas):m_canvas(canvas)
{

}

Tool::~Tool()
{

}

bool Tool::HandleEvent(QEvent *event)
{
    if (event->type() == QEvent::KeyPress) {
        QKeyEvent *ke = reinterpret_cast<QKeyEvent *>(event);
        keyPress(ke);
        return true;
    } else if (event->type() == QEvent::MouseButtonPress) {
        QMouseEvent *me = reinterpret_cast<QMouseEvent *>(event);
        mousePress(me);
    } else if (event->type() == QEvent::MouseMove) {
        QMouseEvent *me = reinterpret_cast<QMouseEvent *>(event);
        mouseMove(me);
    } else if (event->type() == QEvent::MouseButtonRelease) {
        QMouseEvent *me = reinterpret_cast<QMouseEvent *>(event);
        mouseRelease(me);
    }

    return true;
}

void Tool::setPen(QPen pen)
{
    m_pen = pen;
}
