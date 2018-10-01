#ifndef TOOL_H
#define TOOL_H


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


protected:
    virtual void mousePress(QMouseEvent*) {}
    virtual void mouseMove(QMouseEvent*) {}
    virtual void mouseRelease(QMouseEvent*) {}
    virtual void keyPress(QKeyEvent*) {}
    Canvas *m_canvas;
};

#endif // TOOL_H
