#ifndef DRAWRECTANGLEDIALOG_H
#define DRAWRECTANGLEDIALOG_H

#include <QDialog>
#include "mainwindow.h"
#include "rectangle.h"

namespace Ui {
class DrawRectangleDialog;
}

class DrawRectangleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DrawRectangleDialog(MainWindow *parent = 0, Rectangle *r = 0);
    ~DrawRectangleDialog();

private slots:
    void on_Xbox_valueChanged(int arg1);

    void on_Ybox_valueChanged(int arg1);

    void on_Heightbox_valueChanged(int arg1);

    void on_Widthbox_valueChanged(int arg1);

    void on_pushButton_clicked();

private:
    Ui::DrawRectangleDialog *ui;
    MainWindow *p_MainWindow;
    Rectangle *p_rectangle;
};

#endif // DRAWRECTANGLEDIALOG_H
