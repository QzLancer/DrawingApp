#include "drawrectangledialog.h"
#include "ui_drawrectangledialog.h"
#include "canvas.h"
DrawRectangleDialog::DrawRectangleDialog(MainWindow *parent, Rectangle *r) :
    QDialog(parent),
    ui(new Ui::DrawRectangleDialog),
    p_rectangle(r)
{
    ui->setupUi(this);
    p_MainWindow = parent;
    ui->Xbox->setValue(p_rectangle->getStartPoint().x());
    ui->Ybox->setValue(p_rectangle->getStartPoint().y());
    ui->Heightbox->setValue(p_rectangle->getHeight());
    ui->Widthbox->setValue(p_rectangle->getWidth());
}

DrawRectangleDialog::~DrawRectangleDialog()
{
    delete ui;
}


void DrawRectangleDialog::on_Xbox_valueChanged(int arg1)
{
    p_rectangle->setStartPoint(ui->Xbox->value(),ui->Ybox->value());
    p_MainWindow->m_canvas->repaint();
}

void DrawRectangleDialog::on_Ybox_valueChanged(int arg1)
{
    p_rectangle->setStartPoint(ui->Xbox->value(),ui->Ybox->value());
    p_MainWindow->m_canvas->repaint();
}

void DrawRectangleDialog::on_Heightbox_valueChanged(int arg1)
{
    p_rectangle->setHeight(ui->Heightbox->value());
    p_MainWindow->m_canvas->repaint();
}

void DrawRectangleDialog::on_Widthbox_valueChanged(int arg1)
{
    p_rectangle->setWidth(ui->Widthbox->value());
    p_MainWindow->m_canvas->repaint();
}

void DrawRectangleDialog::on_pushButton_clicked()
{
    close();
}
