#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Selection->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::uncheckAllToolBar()
{
    ui->actionDrawCircle->setChecked(false);
    ui->actionDrawLine->setChecked(false);
    ui->actionDrawRectangle->setChecked(false);
    ui->Selection->setChecked(false);
}

void MainWindow::on_actionDrawRectangle_triggered()
{
    uncheckAllToolBar();
    ui->actionDrawRectangle->setChecked(true);
}

void MainWindow::on_Selection_triggered()
{
    uncheckAllToolBar();
    ui->Selection->setChecked(true);
}

void MainWindow::on_actionDrawLine_triggered()
{
    uncheckAllToolBar();
    ui->actionDrawLine->setChecked(true);
}

void MainWindow::on_actionDrawCircle_triggered()
{
    uncheckAllToolBar();
    ui->actionDrawCircle->setChecked(true);
}
