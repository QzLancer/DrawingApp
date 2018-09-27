#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}
class Canvas;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

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

public:
    Canvas *m_canvas;
};

#endif // MAINWINDOW_H
