#include "drawcircledialog.h"
#include "ui_drawcircledialog.h"
#include "circle.h"
#include "canvas.h"


DrawCircleDialog::DrawCircleDialog(MainWindow *parent,Circle *circle) :
    QDialog(parent),
    ui(new Ui::DrawCircleDialog),
    m_circle(circle)
{
    ui->setupUi(this);
    p_mainwindow=parent;

}

DrawCircleDialog::~DrawCircleDialog()
{
    delete ui;
}

void DrawCircleDialog::on_OKButton_clicked()
{
    p_mainwindow->m_canvas->update();
    close();
}

void DrawCircleDialog::on_RadiusBox_valueChanged(int arg1)
{
    m_circle->setRadius(ui->RadiusBox->value());
    p_mainwindow->m_canvas->repaint();
}

void DrawCircleDialog::on_Xbox_valueChanged(int arg1)
{
    m_circle->setXPosition(ui->Xbox->value());
    p_mainwindow->m_canvas->repaint();
}


void DrawCircleDialog::on_Ybox_valueChanged(int arg1)
{
    m_circle->setYPosition(ui->Ybox->value());
    p_mainwindow->m_canvas->repaint();
}
