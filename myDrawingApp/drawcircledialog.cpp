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
    ui->RadiusBox->setValue(50);
    ui->Xbox->setValue(50);
    ui->Ybox->setValue(50);
}

DrawCircleDialog::~DrawCircleDialog()
{
    delete ui;
}

void DrawCircleDialog::on_OKButton_clicked()
{
    p_mainwindow->m_canvas->repaint();
    close();
}

void DrawCircleDialog::on_RadiusBox_valueChanged(int arg1)
{
    m_circle->setRadius(ui->RadiusBox->value());
    p_mainwindow->m_canvas->repaint();
}

void DrawCircleDialog::on_Xbox_valueChanged(int arg1)
{
    m_circle->setStartPoint(QPoint(ui->Xbox->value(),ui->Ybox->value()));
    p_mainwindow->m_canvas->repaint();
}


void DrawCircleDialog::on_Ybox_valueChanged(int arg1)
{
    m_circle->setStartPoint(QPoint(ui->Xbox->value(),ui->Ybox->value()));
    p_mainwindow->m_canvas->repaint();
}
