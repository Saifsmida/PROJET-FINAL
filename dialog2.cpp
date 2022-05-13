#include "dialog2.h"
#include "ui_dialog2.h"

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_pushButton_2_clicked()
{
    ui->pushButton_2->setStyleSheet("background-color:red; font-size:35px; color: white; border: 1px solid #191919;");
}


void Dialog2::on_pushButton_clicked()
{
    ui->pushButton->setStyleSheet("background-color:red; font-size:35px; color: white; border: 1px solid #191919;");
}


void Dialog2::on_pushButton_3_clicked()
{
    ui->pushButton_3->setStyleSheet("background-color:red; font-size:35px; color: white; border: 1px solid #191919;");
}


void Dialog2::on_pushButton_4_clicked()
{
    ui->pushButton_4->setStyleSheet("background-color:green; font-size:35px; color: white; border: 1px solid #191919;");
}

