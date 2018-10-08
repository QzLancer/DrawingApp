#ifndef TOOL_H
#define TOOL_H

#include <QPen>
#include <QBrush>
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
    void setBrush(QBrush brush);

protected:
    virtual void mousePress(QMouseEvent*) {}
    virtual void mouseMove(QMouseEvent*) {}
    virtual void mouseRelease(QMouseEvent*) {}
    virtual void keyPress(QKeyEvent*) {}
    Canvas *m_canvas;
    QPen m_pen;
    QBrush m_brush;
};

#endif // TOOL_H
