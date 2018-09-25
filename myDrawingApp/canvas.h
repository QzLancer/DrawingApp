#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QPaintEvent>
class Circle;
class Canvas : public QWidget
{
    Q_OBJECT
public:
    explicit Canvas(QWidget *parent = 0);
    ~Canvas();
signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event);

public:
    Circle *p_circle;
};

#endif // CANVAS_H
