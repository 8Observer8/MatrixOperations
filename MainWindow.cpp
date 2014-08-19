#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_firstMatrixWindow = new FirstMatrixWindow;
    m_secondMatrixWindow = new SecondMatrixWindow;
    m_resultMatrixWindow = new ResultMatrixWindow;

    ui->mdiArea->addSubWindow( m_firstMatrixWindow );
    ui->mdiArea->addSubWindow( m_secondMatrixWindow );
    ui->mdiArea->addSubWindow( m_resultMatrixWindow );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSum_triggered()
{
    QMatrix3x3 firstMatrix = m_firstMatrixWindow->getMatrix();
    QMatrix3x3 secondMatrix = m_secondMatrixWindow->getMatrix();
    QMatrix3x3 resultMatrix = firstMatrix + secondMatrix;
    m_resultMatrixWindow->setResultMatrix( resultMatrix );
}

void MainWindow::on_actionMul_triggered()
{
    QMatrix3x3 firstMatrix = m_firstMatrixWindow->getMatrix();
    QMatrix3x3 secondMatrix = m_secondMatrixWindow->getMatrix();
    QMatrix3x3 resultMatrix = firstMatrix * secondMatrix;
    m_resultMatrixWindow->setResultMatrix( resultMatrix );
}

void MainWindow::on_actionSub_triggered()
{
    QMatrix3x3 firstMatrix = m_firstMatrixWindow->getMatrix();
    QMatrix3x3 secondMatrix = m_secondMatrixWindow->getMatrix();
    QMatrix3x3 resultMatrix = firstMatrix - secondMatrix;
    m_resultMatrixWindow->setResultMatrix( resultMatrix );
}
