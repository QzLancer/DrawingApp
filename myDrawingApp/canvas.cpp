#include "canvas.h"
#include <QPainter>

Canvas::Canvas(QWidget *parent) : QWidget(parent)
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

Canvas::~Canvas()
{

}

void Canvas::AddShape(Shape *shape)
{
    ShapeGroup.push_back(shape);

}
