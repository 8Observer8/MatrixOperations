#include "ResultMatrixWindow.h"
#include "ui_ResultMatrixWindow.h"

ResultMatrixWindow::ResultMatrixWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ResultMatrixWindow)
{
    ui->setupUi(this);
    m_model = new QStandardItemModel( 3, 3, this);
    ui->resultTable->setModel( m_model );
    clearMatrix();
}

ResultMatrixWindow::~ResultMatrixWindow()
{
    delete ui;
}

void ResultMatrixWindow::setResultMatrix( const QMatrix3x3 &matrix )
{
    QModelIndex index;
    for ( int row = 0; row < m_model->rowCount(); row++ ) {
        for ( int col = 0; col < m_model->columnCount(); col++ ) {
            index = m_model->index( row, col );
            QString value = QString::number( matrix( row, col ) );
            m_model->setData( index, value );
        }
    }
}

void ResultMatrixWindow::clearMatrix()
{
    QModelIndex index;
    for ( int row = 0; row < m_model->rowCount(); row++ ) {
        for ( int col = 0; col < m_model->columnCount(); col++ ) {
            index = m_model->index( row, col );
            m_model->setData( index, "0" );
        }
    }
}
