#ifndef TOOL_H
#define TOOL_H

#include <QPen>
class QEvent;
class QMouseEvent;
class QKeyEvent;
class Canvas;


class Tool
{

public:
    Tool(Canvas *canvas);
    ~Tool();
    bool HandleEvent(QEvent *event);
    void setPen(QPen pen);


protected:
    virtual void mousePress(QMouseEvent*) {}
    virtual void mouseMove(QMouseEvent*) {}
    virtual void mouseRelease(QMouseEvent*) {}
    virtual void keyPress(QKeyEvent*) {}
    Canvas *m_canvas;
    QPen m_pen;
};

#endif // TOOL_H
