#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "canvas.h"
#include "drawcircledialog.h"
#include "circle.h"
#include "drawlinedialog.h"
#include "rectangle.h"
#include "drawrectangledialog.h"
enum ToolAction{Selection, ActionLine, ActionCircle, ActionRectangle} Action;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Selection->setChecked(true);
    m_canvas = new Canvas(this);
    setCentralWidget(m_canvas);
    Action = Selection;
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
    Action = ActionRectangle;
}

void MainWindow::on_Selection_triggered()
{
    uncheckAllToolBar();
    ui->Selection->setChecked(true);
    Action = Selection;
}

void MainWindow::on_actionDrawLine_triggered()
{
    uncheckAllToolBar();
    ui->actionDrawLine->setChecked(true);
    Action = ActionLine;
}

void MainWindow::on_actionDrawCircle_triggered()
{
    uncheckAllToolBar();
    ui->actionDrawCircle->setChecked(true);
    Action = ActionCircle;
}

void MainWindow::on_actionCircle_triggered()
{
    Circle *m_circle=new Circle;
    DrawCircleDialog *circledialog=new DrawCircleDialog(this, m_circle);
    circledialog->show();
    m_canvas->AddShape(m_circle);
}

void MainWindow::on_actionLine_triggered()
{
    Line *m_line=new Line;
    DrawLineDialog *linedialog=new DrawLineDialog(this, m_line);
    linedialog->show();
    m_canvas->AddShape(m_line);
}

void MainWindow::on_actionRectangle_triggered()
{
    Rectangle *m_rectangle=new Rectangle;
    DrawRectangleDialog *recdialog=new DrawRectangleDialog(this, m_rectangle);
    recdialog->show();
    m_canvas->AddShape(m_rectangle);
}
