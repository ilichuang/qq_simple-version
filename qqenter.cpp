#include "qqenter.h"
#include "ui_qqenter.h"

qqenter::qqenter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::qqenter)
{
    ui->setupUi(this);
}

qqenter::~qqenter()
{
    delete ui;
}
