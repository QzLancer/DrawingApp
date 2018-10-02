#ifndef DRAWRECTANGLETOOL_H
#define DRAWRECTANGLETOOL_H

#include "tool.h"
#include "canvas.h"
#include <QMouseEvent>
#include <QKeyEvent>
#include "rectangle.h"

class DrawRectangleTool:public Tool
{
public:
    DrawRectangleTool(Canvas *canvas);

protected:
    void mousePress(QMouseEvent *event) override;
    void mouseMove(QMouseEvent *event) override;
    void mouseRelease(QMouseEvent *event) override;
    void keyPress(QKeyEvent *event) override;

private:
    Rectangle *rectangle;
    QPoint StartPoint;
    int height;
    int width;
};

#endif // DRAWRECTANGLETOOL_H
