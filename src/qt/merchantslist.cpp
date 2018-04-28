#include "merchantslist.h"
#include "ui_merchantslist.h"

MerchantsList::MerchantsList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MerchantsList)
{
    ui->setupUi(this);
}

MerchantsList::~MerchantsList()
{
    delete ui;
}
