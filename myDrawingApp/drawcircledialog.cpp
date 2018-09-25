#include "drawcircledialog.h"
#include "ui_drawcircledialog.h"
#include "circle.h"
#include "canvas.h"


DrawCircleDialog::DrawCircleDialog(MainWindow *parent) :
    QDialog(parent),
    ui(new Ui::DrawCircleDialog)
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
    Circle *p_circle1=p_mainwindow->m_canvas->p_circle;
    p_circle1->setRadius(ui->RadiusBox->value());
    p_circle1->setXPosition(ui->Xbox->value());
    p_circle1->setYPosition(ui->Ybox->value());
    p_mainwindow->m_canvas->update();
    close();
}
