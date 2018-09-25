#include "canvas.h"
#include <QPainter>
#include "circle.h"
Canvas::Canvas(QWidget *parent) : QWidget(parent)
{
    p_circle = new Circle;
    setPalette(QPalette(Qt::white));
    setAutoFillBackground(true);
}

void Canvas::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    p_circle->draw(&painter);
}

Canvas::~Canvas()
{
    if(p_circle != nullptr)
        delete p_circle;
}
