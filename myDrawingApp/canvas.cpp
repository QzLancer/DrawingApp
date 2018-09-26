#include "canvas.h"
#include <QPainter>
#include "circle.h"
Canvas::Canvas(QWidget *parent) : QWidget(parent)
{
    setPalette(QPalette(Qt::white));
    setAutoFillBackground(true);
}

void Canvas::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);
    for(Circle *circle : c_circle)
        painter->drawEllipse(circle->getXposition(),circle->getYposition(),circle->getRadius(),circle->getRadius());

}

Canvas::~Canvas()
{

}

void Canvas::AddCircle(Circle *c)
{
    c_circle.push_back(c);
}
