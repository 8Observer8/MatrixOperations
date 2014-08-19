#include "FirstMatrixWindow.h"
#include "ui_FirstMatrixWindow.h"

FirstMatrixWindow::FirstMatrixWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FirstMatrixWindow)
{
    ui->setupUi(this);
    m_model = new QStandardItemModel( 3, 3, this);
    ui->firstMatrixTable->setModel( m_model );
    clearMatrix();
}

FirstMatrixWindow::~FirstMatrixWindow()
{
    delete ui;
}

QMatrix3x3 FirstMatrixWindow::getMatrix() const
{
    QMatrix3x3 matrix;
    QModelIndex index;

    for ( int row = 0; row < m_model->rowCount(); row++ ) {
        for ( int col = 0; col < m_model->columnCount(); col++ ) {
            index = m_model->index( row, col );
            QString data = m_model->data( index ).toString();
            matrix( row, col ) = data.toDouble();
        }
    }

    return matrix;
}

void FirstMatrixWindow::clearMatrix()
{
    QModelIndex index;
    for ( int row = 0; row < m_model->rowCount(); row++ ) {
        for ( int col = 0; col < m_model->columnCount(); col++ ) {
            index = m_model->index( row, col );
            m_model->setData( index, "0" );
        }
    }
}