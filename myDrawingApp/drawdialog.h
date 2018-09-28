#ifndef DRAWDIALOG_H
#define DRAWDIALOG_H

#include <QDialog>

namespace Ui {
class DrawDialog;
}

class DrawDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DrawDialog(QWidget *parent = 0);
    ~DrawDialog();

private slots:
    void on_OKButton_clicked();

    void on_pushButton_2_clicked();

    void on_FillColorButton_clicked();

    void on_OutLineColorButton_clicked();

private:
    Ui::DrawDialog *ui;
};

#endif // DRAWDIALOG_H
