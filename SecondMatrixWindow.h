#ifndef SECONDMATRIXWINDOW_H
#define SECONDMATRIXWINDOW_H

#include <QDialog>
#include <QStandardItemModel>
#include <QMatrix3x3>
#include "Delegate.h"

namespace Ui {
    class SecondMatrixWindow;
}

class SecondMatrixWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecondMatrixWindow(QWidget *parent = 0);
    ~SecondMatrixWindow();

    QMatrix3x3 getMatrix() const;

private:
    void clearMatrix();
    Ui::SecondMatrixWindow *ui;
    QStandardItemModel *m_model;
    Delegate *m_delegate;
};

#endif // SECONDMATRIXWINDOW_H
