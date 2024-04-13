#include "productlogin.h"
#include "ui_productlogin.h"

#include <QMessageBox>
#include <products.h>

ProductLogin::ProductLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProductLogin)
{
    ui->setupUi(this);
    ui->lEUserName->setFocus();
}

ProductLogin::~ProductLogin()
{
    delete ui;
}

void ProductLogin::on_pBLogin_clicked()
{
    if (ui->lEUserName->text().simplified() == "PRODUCT" && ui->lEPassword->text().simplified() == "PRODUCT") {
        this->close();
        Products *product = new Products();
        product->show();
    }
    else {
        QMessageBox::information(this, "User Data", "Wrong Credientials");
        ui->lEUserName->setFocus();
    }
}

void ProductLogin::on_pBCancel_clicked()
{
    this->close();
}
