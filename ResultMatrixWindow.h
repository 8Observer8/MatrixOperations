#ifndef RESULTMATRIXWINDOW_H
#define RESULTMATRIXWINDOW_H

#include <QDialog>
#include <QStandardItemModel>
#include <QMatrix3x3>

namespace Ui {
    class ResultMatrixWindow;
}

class ResultMatrixWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ResultMatrixWindow(QWidget *parent = 0);
    ~ResultMatrixWindow();

public slots:
    void setResultMatrix( const QMatrix3x3 &matrix );

private:
    void clearMatrix();
    Ui::ResultMatrixWindow *ui;
    QStandardItemModel *m_model;
};

#endif // RESULTMATRIXWINDOW_H
