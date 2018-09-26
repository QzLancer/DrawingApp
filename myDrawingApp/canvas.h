#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QPaintEvent>
#include <Vector>
#include "group.h"
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

public:
    std::vector <Shape*> ShapeGroup;
};

#endif // CANVAS_H
