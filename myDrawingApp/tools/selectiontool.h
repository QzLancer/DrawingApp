#ifndef SELECTIONTOOL_H
#define SELECTIONTOOL_H

#include "tool.h"

class SelectionTool:public Tool
{
public:
    SelectionTool(Canvas *canvas);

protected:
    void mousePress(QMouseEvent *event) override;
    void mouseMove(QMouseEvent *event) override;
    void mouseRelease(QMouseEvent *event) override;
    void keyPress(QKeyEvent *event) override;

};

#endif // SELECTIONTOOL_H
