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
    explicit DrawCircleDialog(MainWindow *parent = 0);
    ~DrawCircleDialog();

private slots:
    void on_OKButton_clicked();

private:
    Ui::DrawCircleDialog *ui;
    MainWindow *p_mainwindow;
};

#endif // DRAWCIRCLEDIALOG_H
