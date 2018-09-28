#include "canvas.h"
#include <QPainter>
#include "circle.h"
#include <QDebug>

Canvas::Canvas(QWidget *parent) : QWidget(parent),
    c_mainwindow(parent),
    c_action(new DrawAction)
{
    setPalette(QPalette(Qt::white));
    setAutoFillBackground(true);
}

void Canvas::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);
    for(Shape *shape: ShapeGroup)
        shape->draw(painter);

}

void Canvas::mousePressEvent(QMouseEvent *event)
{
    qDebug() << tr("mousePressEvent");
    if(event->button()==Qt::LeftButton)
    {
        c_action->mousePress(event->pos(),this);
        repaint();
    }
}

void Canvas::mouseMoveEvent(QMouseEvent *event)
{
    qDebug() << tr("mouseMoveEvent");
    if(event->buttons()&Qt::LeftButton)
    {
        c_action->mouseMove(event->pos());
        repaint();
    }

}

Canvas::~Canvas()
{
    if(c_action != nullptr)
        delete c_action;
}

void Canvas::AddShape(Shape *shape)
{
    ShapeGroup.push_back(shape);

}
