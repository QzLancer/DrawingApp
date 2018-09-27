#include "drawrectangledialog.h"
#include "ui_drawrectangledialog.h"

DrawRectangleDialog::DrawRectangleDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DrawRectangleDialog)
{
    ui->setupUi(this);
}

DrawRectangleDialog::~DrawRectangleDialog()
{
    delete ui;
}
