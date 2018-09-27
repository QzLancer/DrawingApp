#ifndef DRAWLINEDIALOG_H
#define DRAWLINEDIALOG_H

#include <QDialog>
#include "mainwindow.h"
#include "line.h"

namespace Ui {
class DrawLineDialog;
}

class DrawLineDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DrawLineDialog(MainWindow *parent = 0, Line *line = 0);
    ~DrawLineDialog();

private slots:
    void on_X1box_valueChanged(int arg1);

    void on_Y1box_valueChanged(int arg1);

    void on_X2box_valueChanged(int arg1);

    void on_Y2box_valueChanged(int arg1);

private:
    Ui::DrawLineDialog *ui;
    MainWindow *p_mainwindow;
    Line *p_line;
};

#endif // DRAWLINEDIALOG_H
