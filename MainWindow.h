#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMatrix3x3>
#include "FirstMatrixWindow.h"
#include "SecondMatrixWindow.h"
#include "ResultMatrixWindow.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionSum_triggered();

    void on_actionMul_triggered();

    void on_actionSub_triggered();

private:
    Ui::MainWindow *ui;
    FirstMatrixWindow *m_firstMatrixWindow;
    SecondMatrixWindow *m_secondMatrixWindow;
    ResultMatrixWindow *m_resultMatrixWindow;
};

#endif // MAINWINDOW_H
