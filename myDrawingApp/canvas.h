#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QPaintEvent>
#include <Vector>
#include "group.h"
#include "mainwindow.h"
#include <QEvent>

class Circle;
class Tool;

class Canvas : public QWidget
{
    Q_OBJECT
public:
    explicit Canvas(QWidget *parent = 0);
    ~Canvas();
    void AddShape(Shape *shape);
    void setActiveTool(Tool *tool);

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event);
    bool event(QEvent *event);


public:
    Group *ShapeGroup;
    QWidget *c_mainwindow;
    Tool *m_tools;

};

#endif // CANVAS_H
