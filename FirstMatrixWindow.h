#ifndef FIRSTMATRIXWINDOW_H
#define FIRSTMATRIXWINDOW_H

#include <QDialog>
#include <QStandardItemModel>
#include <QMatrix3x3>
#include "Delegate.h"

namespace Ui {
    class FirstMatrixWindow;
}

class FirstMatrixWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FirstMatrixWindow(QWidget *parent = 0);
    ~FirstMatrixWindow();

    QMatrix3x3 getMatrix() const;

private:
    void clearMatrix();
    Ui::FirstMatrixWindow *ui;
    QStandardItemModel *m_model;
    Delegate *m_delegate;
};

#endif // FIRSTMATRIXWINDOW_H
