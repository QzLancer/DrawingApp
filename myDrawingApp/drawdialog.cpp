#include "drawdialog.h"
#include "ui_drawdialog.h"
#include <QColorDialog>
DrawDialog::DrawDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DrawDialog)
{
    ui->setupUi(this);
}

DrawDialog::~DrawDialog()
{
    delete ui;
}

void DrawDialog::on_OKButton_clicked()
{
    close();
}

void DrawDialog::on_FillColorButton_clicked()
{
    QColorDialog *fillcolor=new QColorDialog(this);
    ui->FillColorButton->setPalette(fillcolor->colorSelected());

}

void DrawDialog::on_OutLineColorButton_clicked()
{
    QColorDialog *outlinecolor=new QColorDialog(this);
    outlinecolor->exec();
}
