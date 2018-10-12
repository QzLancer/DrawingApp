#include "canvas.h"
#include <QPainter>
#include "circle.h"
#include <QDebug>


Canvas::Canvas(MainWindow *parent) : QWidget(parent),
    ShapeGroup(new Group),
    c_mainwindow(parent),
    m_tools(new Tool(this)),
    selection(new ActiveSelection)
{
    setPalette(QPalette(Qt::white));
    setAutoFillBackground(true);
}

void Canvas::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);
    ShapeGroup->draw(painter);
    selection->draw(painter);
    delete painter;
}

bool Canvas::event(QEvent *event)
{
    if(event->type() == QEvent::Paint)
    {
        QPaintEvent *ke = reinterpret_cast<QPaintEvent *>(event);
        paintEvent(ke);
        return true;
    }

    bool result = m_tools->HandleEvent(event);
    pen = c_mainwindow->getPen();
    brush = c_mainwindow->getBrush();
    m_tools->setPen(pen);
    m_tools->setBrush(brush);
    repaint();

    return result;
}

Canvas::~Canvas()
{

}

void Canvas::AddShape(Shape *shape)
{
    ShapeGroup->addShape(shape);

}

void Canvas::setActiveTool(Tool *tool)
{
    m_tools = tool;
}

Shape *Canvas::getShapeFromPos(int x, int y)
{
    return ShapeGroup->getClicked(x, y);
}
