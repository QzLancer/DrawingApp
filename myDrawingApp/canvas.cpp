#include "canvas.h"
#include <QPainter>
#include "circle.h"
#include <QDebug>


Canvas::Canvas(MainWindow *parent) : QWidget(parent),
    ShapeGroup(new Group),
    c_mainwindow(parent)
{
    setPalette(QPalette(Qt::white));
    setAutoFillBackground(true);
}

void Canvas::paintEvent(QPaintEvent *event)
{
    qDebug() << "paintEvent.";
    QPainter *painter = new QPainter(this);
    painter->setPen(c_mainwindow->getPen());
    ShapeGroup->draw(painter);

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
