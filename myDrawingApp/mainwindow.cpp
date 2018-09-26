#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "canvas.h"
#include "drawcircledialog.h"
#include "circle.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Selection->setChecked(true);
    m_canvas=new Canvas(this);
    setCentralWidget(m_canvas);
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

//Select ToolMenuBar actions
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

void MainWindow::on_actionCircle_triggered()
{
    Circle *m_circle=new Circle;
    DrawCircleDialog *circledialog=new DrawCircleDialog(this,m_circle);
    circledialog->show();
    m_canvas->AddShape(m_circle);
}
