#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QPaintEvent>
#include <Vector>
#include "group.h"
#include "mainwindow.h"
#include <QEvent>
#include <QPen>
#include <QBrush>
#include "shape.h"
#include "activeselection.h"

class Circle;
class Tool;

class Canvas : public QWidget
{
    Q_OBJECT
public:
    explicit Canvas(MainWindow *parent = 0);
    ~Canvas();
    void AddShape(Shape *shape);
    void setActiveTool(Tool *tool);
    Shape *getShapeFromPos(int x, int y);

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event);
    bool event(QEvent *event);


public:
    Group *ShapeGroup;
    MainWindow *c_mainwindow;
    Tool *m_tools;
    QPen pen;
    QBrush brush;
    ActiveSelection *selection;
};

#endif // CANVAS_H
