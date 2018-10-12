#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "canvas.h"
#include "drawcircledialog.h"
#include "circle.h"
#include "drawlinedialog.h"
#include "rectangle.h"
#include "drawrectangledialog.h"
#include "tools/drawcircletool.h"
#include "tools/drawlinetool.h"
#include "tools/drawrectangletool.h"
#include "tools/selectiontool.h"
#include <QPainter>
#include <QColorDialog>
#include <QPalette>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    lineWidth = 1;
    fillColor = Qt::gray;
    brush.setColor(fillColor);
    ui->setupUi(this);
    ui->Selection->setChecked(true);
    m_canvas = new Canvas(this);
    setCentralWidget(m_canvas);
    m_tool = new Tool(m_canvas);
    m_drawCircleTool = std::unique_ptr<DrawCircleTool>
            (new DrawCircleTool(m_canvas));
    m_drawLineTool = std::unique_ptr<DrawLineTool>
            (new DrawLineTool(m_canvas));
    m_drawRectangleTool = std::unique_ptr<DrawRectangleTool>
            (new DrawRectangleTool(m_canvas));
    m_SelectionTool = std::unique_ptr<SelectionTool>
            (new SelectionTool(m_canvas));
    setActiveTool(m_SelectionTool.get());
    ui->dockWidget->setBaseSize(199,335);
    QPalette palette = ui->LineColorButton->palette();
    palette.setColor(QPalette::Button, Qt::black);
    ui->LineColorButton->setPalette(palette);
    ui->LineColorButton->setAutoFillBackground(true);
    ui->LineColorButton->setFlat(true);
    palette.setColor(QPalette::Button, Qt::gray);
    ui->FillColorButton->setPalette(palette);
    ui->FillColorButton->setAutoFillBackground(true);
    ui->FillColorButton->setFlat(true);
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
    setActiveTool(m_drawRectangleTool.get());
}

void MainWindow::on_Selection_triggered()
{
    uncheckAllToolBar();
    ui->Selection->setChecked(true);
    setActiveTool(m_SelectionTool.get());
}

void MainWindow::on_actionDrawLine_triggered()
{
    uncheckAllToolBar();
    ui->actionDrawLine->setChecked(true);
    setActiveTool(m_drawLineTool.get());
}

void MainWindow::on_actionDrawCircle_triggered()
{
    uncheckAllToolBar();
    ui->actionDrawCircle->setChecked(true);
    setActiveTool(m_drawCircleTool.get());
}

void MainWindow::on_actionCircle_triggered()
{
    Circle *m_circle=new Circle;
    m_circle->setPenColor(lineColor);
    m_circle->setPenWidth(lineWidth);
    m_circle->setFillColor(fillColor);
    DrawCircleDialog *circledialog=new DrawCircleDialog(this, m_circle);
    circledialog->show();
    m_canvas->AddShape(m_circle);
}

void MainWindow::on_actionLine_triggered()
{
    Line *m_line=new Line;
    m_line->setPenColor(lineColor);
    m_line->setPenWidth(lineWidth);
    DrawLineDialog *linedialog=new DrawLineDialog(this, m_line);
    linedialog->show();
    m_canvas->AddShape(m_line);
}

void MainWindow::on_actionRectangle_triggered()
{
    Rectangle *m_rectangle=new Rectangle;
    m_rectangle->setPenColor(lineColor);
    m_rectangle->setPenWidth(lineWidth);
    m_rectangle->setFillColor(fillColor);
    DrawRectangleDialog *recdialog=new DrawRectangleDialog(this, m_rectangle);
    recdialog->show();
    m_canvas->AddShape(m_rectangle);
}

void MainWindow::setActiveTool(Tool *tool)
{
    m_tool = tool;
    m_canvas->setActiveTool(m_tool);
}

void MainWindow::on_LineWidthBox_valueChanged(int arg1)
{
    lineWidth = ui->LineWidthBox->value();
    pen.setWidth(lineWidth);
}

QPen MainWindow::getPen()
{
    return pen;
}

QBrush MainWindow::getBrush()
{
    return brush;
}

void MainWindow::on_LineColorButton_clicked()
{
    lineColor = QColorDialog::getColor();
    QPalette palette = ui->LineColorButton->palette();
    palette.setColor(QPalette::Button,lineColor);
    ui->LineColorButton->setPalette(palette);
    pen.setColor(lineColor);
}

void MainWindow::on_FillColorButton_clicked()
{
    fillColor = QColorDialog::getColor();
    QPalette palette = ui->FillColorButton->palette();
    palette.setColor(QPalette::Button,fillColor);
    ui->FillColorButton->setPalette(palette);
    brush.setColor(fillColor);
}
