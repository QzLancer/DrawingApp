#ifndef DRAWCIRCLEDIALOG_H
#define DRAWCIRCLEDIALOG_H

#include <QDialog>
#include "MainWindow.h"

namespace Ui {
class DrawCircleDialog;
}
class Circle;

class DrawCircleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DrawCircleDialog(MainWindow *parent = 0,Circle *circle = 0);
    ~DrawCircleDialog();

private slots:
    void on_OKButton_clicked();

    void on_RadiusBox_valueChanged(int arg1);

    void on_Xbox_valueChanged(int arg1);

    void on_Ybox_valueChanged(int arg1);

private:
    Ui::DrawCircleDialog *ui;
    MainWindow *p_mainwindow;
    Circle *m_circle;
};

#endif // DRAWCIRCLEDIALOG_H
