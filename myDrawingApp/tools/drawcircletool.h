#ifndef DRAWCIRCLETOOL_H
#define DRAWCIRCLETOOL_H
#include "tool.h"
#include <QPoint>

class Circle;
class QPoint;
class QMouseEvent;
class QKeyEvent;

class DrawCircleTool : public Tool
{
public:
    DrawCircleTool(Canvas *canvas);
    ~DrawCircleTool();

protected:
    void mousePress(QMouseEvent *event) override;
    void mouseMove(QMouseEvent *event) override;
    void mouseRelease(QMouseEvent *event) override;
    void keyPress(QKeyEvent *event) override;

private:
    Circle *m_circle;
    int Radius;
    QPoint StartPoint;

};

#endif // DRAWCIRCLETOOL_H
