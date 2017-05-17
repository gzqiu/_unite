#include "kvs.h"
#include "ui_kvs.h"

kvs::kvs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kvs)
{
    ui->setupUi(this);
}

kvs::~kvs()
{
    delete ui;
}
