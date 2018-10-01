#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tool.h"
#include <memory>
namespace Ui {
class MainWindow;
}
class Canvas;
class DrawCircleTool;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setActiveTool(Tool *tool);

private slots:
    void on_actionDrawRectangle_triggered();

    void on_Selection_triggered();

    void on_actionDrawLine_triggered();

    void on_actionDrawCircle_triggered();

    void on_actionCircle_triggered();

    void on_actionLine_triggered();

    void on_actionRectangle_triggered();

private:
    Ui::MainWindow *ui;
    void uncheckAllToolBar();
    Tool *m_tool;
    std::unique_ptr<DrawCircleTool> m_drawCircleTool;


public:
    Canvas *m_canvas;

};

#endif // MAINWINDOW_H
