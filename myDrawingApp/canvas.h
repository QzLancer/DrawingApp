#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QPaintEvent>
#include <Vector>
class Circle;
class Canvas : public QWidget
{
    Q_OBJECT
public:
    explicit Canvas(QWidget *parent = 0);
    ~Canvas();
    void AddCircle(Circle *c);
signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event);

public:
    std::vector<Circle*> c_circle;
};

#endif // CANVAS_H
