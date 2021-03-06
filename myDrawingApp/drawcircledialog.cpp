#include "drawcircledialog.h"
#include "ui_drawcircledialog.h"
#include "circle.h"
#include "canvas.h"
#include <QDebug>

DrawCircleDialog::DrawCircleDialog(MainWindow *parent,Circle *circle) :
    QDialog(parent),
    ui(new Ui::DrawCircleDialog),
    m_circle(circle)
{
    ui->setupUi(this);
    p_mainwindow=parent;
    ui->Xbox->setValue(m_circle->getStartPoint().x());
    ui->Ybox->setValue(m_circle->getStartPoint().y());
    ui->RadiusBox->setValue(m_circle->getRadius());
    qDebug() << "circle_startpoint.x: " << m_circle->getStartPoint().x();
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
    m_circle->setStartPointX(ui->Xbox->value());
    p_mainwindow->m_canvas->repaint();
}


void DrawCircleDialog::on_Ybox_valueChanged(int arg1)
{
    m_circle->setStartPointY(ui->Ybox->value());
    p_mainwindow->m_canvas->repaint();
}
