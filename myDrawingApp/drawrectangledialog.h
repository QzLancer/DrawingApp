#ifndef DRAWRECTANGLEDIALOG_H
#define DRAWRECTANGLEDIALOG_H

#include <QDialog>

namespace Ui {
class DrawRectangleDialog;
}

class DrawRectangleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DrawRectangleDialog(QWidget *parent = 0);
    ~DrawRectangleDialog();

private:
    Ui::DrawRectangleDialog *ui;
};

#endif // DRAWRECTANGLEDIALOG_H
