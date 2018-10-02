#ifndef DRAWLINETOOL_H
#define DRAWLINETOOL_H
#include "tool.h"
#include <QPoint>
#include "line.h"

class QMouseEvent;
class QKeyEvent;

class DrawLineTool:public Tool
{
public:
    DrawLineTool(Canvas *canvas);

protected:
    void mousePress(QMouseEvent *event) override;
    void mouseMove(QMouseEvent *event) override;
    void mouseRelease(QMouseEvent *event) override;
    void keyPress(QKeyEvent *event) override;

private:
    Line *m_line;
    QPoint StartPoint;
    QPoint FinalPoint;
};

#endif // DRAWLINETOOL_H
