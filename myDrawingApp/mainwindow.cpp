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

void MainWindow::setActiveTool(Tool *tool)
{
    m_tool = tool;
    m_canvas->setActiveTool(m_tool);
}

void MainWindow::on_ColorButton_clicked()
{
    lineColor = QColorDialog::getColor();
    QPalette palette = ui->ColorButton->palette();
    palette.setColor(QPalette::Button,lineColor);
    ui->ColorButton->setPalette(palette);
    ui->ColorButton->setAutoFillBackground(true);
    ui->ColorButton->setFlat(true);
    pen.setColor(lineColor);
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
