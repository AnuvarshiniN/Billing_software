#ifndef PRODUCTLOGIN_H
#define PRODUCTLOGIN_H

#include <QDialog>

namespace Ui {
class ProductLogin;
}

class ProductLogin : public QDialog
{
    Q_OBJECT

public:
    explicit ProductLogin(QWidget *parent = nullptr);
    ~ProductLogin();

private slots:
    void on_pBLogin_clicked();

    void on_pBCancel_clicked();

private:
    Ui::ProductLogin *ui;
};

#endif // PRODUCTLOGIN_H
