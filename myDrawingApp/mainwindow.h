#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tool.h"
#include <memory>
#include <QPen>

namespace Ui {
class MainWindow;
}
class Canvas;
class DrawCircleTool;
class DrawLineTool;
class DrawRectangleTool;
class SelectionTool;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setActiveTool(Tool *tool);
    QPen getPen();
    QBrush getBrush();

private slots:
    void on_actionDrawRectangle_triggered();

    void on_Selection_triggered();

    void on_actionDrawLine_triggered();

    void on_actionDrawCircle_triggered();

    void on_actionCircle_triggered();

    void on_actionLine_triggered();

    void on_actionRectangle_triggered();

    void on_LineWidthBox_valueChanged(int arg1);

    void on_LineColorButton_clicked();

    void on_FillColorButton_clicked();

private:
    Ui::MainWindow *ui;
    void uncheckAllToolBar();
    Tool *m_tool;
    std::unique_ptr<DrawCircleTool> m_drawCircleTool;
    std::unique_ptr<DrawLineTool> m_drawLineTool;
    std::unique_ptr<DrawRectangleTool> m_drawRectangleTool;
    std::unique_ptr<SelectionTool> m_SelectionTool;
    QColor lineColor;
    int lineWidth;
    QColor fillColor;
    QPen pen;
    QBrush brush;

public:
    Canvas *m_canvas;

};

#endif // MAINWINDOW_H
