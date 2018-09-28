#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QPaintEvent>
#include <Vector>
#include "group.h"
#include "mainwindow.h"
#include "drawaction.h"

class Circle;
class Canvas : public QWidget
{
    Q_OBJECT
public:
    explicit Canvas(QWidget *parent = 0);
    ~Canvas();
    void AddShape(Shape *shape);
signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

public:
    std::vector <Shape*> ShapeGroup;
    QWidget *c_mainwindow;
    DrawAction *c_action;

};

#endif // CANVAS_H
