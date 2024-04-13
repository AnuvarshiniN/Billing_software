/********************************************************************************
** Form generated from reading UI file 'productlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTLOGIN_H
#define UI_PRODUCTLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ProductLogin
{
public:
    QLineEdit *lEPassword;
    QPushButton *pushButton;
    QPushButton *pBCancel;
    QPushButton *pBLogin;
    QLineEdit *lEUserName;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ProductLogin)
    {
        if (ProductLogin->objectName().isEmpty())
            ProductLogin->setObjectName("ProductLogin");
        ProductLogin->resize(400, 300);
        lEPassword = new QLineEdit(ProductLogin);
        lEPassword->setObjectName("lEPassword");
        lEPassword->setGeometry(QRect(138, 110, 201, 20));
        lEPassword->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(ProductLogin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 60, 109, 16));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QString::fromUtf8("text-align:right;\n"
"border:0px solid white;"));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(true);
        pBCancel = new QPushButton(ProductLogin);
        pBCancel->setObjectName("pBCancel");
        pBCancel->setGeometry(QRect(220, 180, 75, 30));
        pBCancel->setMinimumSize(QSize(0, 30));
        pBCancel->setFocusPolicy(Qt::NoFocus);
        pBCancel->setAutoDefault(false);
        pBLogin = new QPushButton(ProductLogin);
        pBLogin->setObjectName("pBLogin");
        pBLogin->setGeometry(QRect(130, 180, 75, 30));
        pBLogin->setMinimumSize(QSize(0, 30));
        pBLogin->setAutoDefault(false);
        lEUserName = new QLineEdit(ProductLogin);
        lEUserName->setObjectName("lEUserName");
        lEUserName->setGeometry(QRect(138, 60, 201, 20));
        pushButton_2 = new QPushButton(ProductLogin);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 110, 100, 16));
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_2->setStyleSheet(QString::fromUtf8("text-align:right;\n"
"border:0px solid white;"));
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(true);
        QWidget::setTabOrder(lEUserName, lEPassword);
        QWidget::setTabOrder(lEPassword, pBLogin);
        QWidget::setTabOrder(pBLogin, pBCancel);
        QWidget::setTabOrder(pBCancel, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(ProductLogin);

        QMetaObject::connectSlotsByName(ProductLogin);
    } // setupUi

    void retranslateUi(QDialog *ProductLogin)
    {
        ProductLogin->setWindowTitle(QCoreApplication::translate("ProductLogin", "Login Form", nullptr));
        lEPassword->setText(QString());
        pushButton->setText(QCoreApplication::translate("ProductLogin", "Login Name : ", nullptr));
        pBCancel->setText(QCoreApplication::translate("ProductLogin", "Close", nullptr));
        pBLogin->setText(QCoreApplication::translate("ProductLogin", "Login", nullptr));
        lEUserName->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("ProductLogin", "Password : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductLogin: public Ui_ProductLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTLOGIN_H
