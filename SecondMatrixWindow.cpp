#include "SecondMatrixWindow.h"
#include "ui_SecondMatrixWindow.h"

SecondMatrixWindow::SecondMatrixWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondMatrixWindow)
{
    ui->setupUi(this);

    m_delegate = new Delegate(this);

    m_model = new QStandardItemModel( 3, 3, this);
    ui->secondMatrixTable->setModel( m_model );
    ui->secondMatrixTable->setItemDelegate( m_delegate );

    clearMatrix();
}

SecondMatrixWindow::~SecondMatrixWindow()
{
    delete ui;
}

QMatrix3x3 SecondMatrixWindow::getMatrix() const
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

void SecondMatrixWindow::clearMatrix()
{
    QModelIndex index;
    for ( int row = 0; row < m_model->rowCount(); row++ ) {
        for ( int col = 0; col < m_model->columnCount(); col++ ) {
            index = m_model->index( row, col );
            m_model->setData( index, "0" );
        }
    }
}
