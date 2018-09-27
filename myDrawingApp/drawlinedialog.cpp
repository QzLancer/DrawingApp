#include "drawlinedialog.h"
#include "ui_drawlinedialog.h"
#include "canvas.h"

DrawLineDialog::DrawLineDialog(MainWindow *parent, Line *line) :
    QDialog(parent),
    ui(new Ui::DrawLineDialog),
    p_line(line)
{
    ui->setupUi(this);
    p_mainwindow = parent;
    ui->X1box->setValue(p_line->getStartPoint().x());
    ui->Y1box->setValue(p_line->getStartPoint().y());
    ui->X2box->setValue(p_line->getPoint().x());
    ui->Y2box->setValue(p_line->getPoint().y());
}

DrawLineDialog::~DrawLineDialog()
{
    delete ui;
}

void DrawLineDialog::on_X1box_valueChanged(int arg1)
{
    p_line->setStartPoint(ui->X1box->value(),ui->Y1box->value());
    p_mainwindow->m_canvas->repaint();
}

void DrawLineDialog::on_Y1box_valueChanged(int arg1)
{
    p_line->setStartPoint(ui->X1box->value(),ui->Y1box->value());
    p_mainwindow->m_canvas->repaint();
}

void DrawLineDialog::on_X2box_valueChanged(int arg1)
{
    p_line->setPoint(ui->X2box->value(),ui->Y2box->value());
    p_mainwindow->m_canvas->repaint();
}

void DrawLineDialog::on_Y2box_valueChanged(int arg1)
{
    p_line->setPoint(ui->X2box->value(),ui->Y2box->value());
    p_mainwindow->m_canvas->repaint();
}

void DrawLineDialog::on_pushButton_clicked()
{
    close();
}
