#include "dialog1.h"
#include "ui_dialog1.h"
#include "dialog2.h"
Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::on_pushButton_2_clicked()
{
    ui->pushButton_2->setStyleSheet("background-color:red; font-size:35px; color: white; border: 1px solid #191919;");
    hide();
    Dialog2 Dialog2;
    Dialog2.setModal(true);
    Dialog2.exec();
}


void Dialog1::on_pushButton_clicked()
{
    ui->pushButton->setStyleSheet("background-color:red; font-size:35px; color: white; border: 1px solid #191919;");
    hide();
    Dialog2 Dialog2;
    Dialog2.setModal(true);
    Dialog2.exec();
}


void Dialog1::on_pushButton_4_clicked()
{
    ui->pushButton_4->setStyleSheet("background-color:green; font-size:35px; color: white; border: 1px solid #191919;");
    hide();
    Dialog2 Dialog2;
    Dialog2.setModal(true);
    Dialog2.exec();
}


void Dialog1::on_pushButton_3_clicked()
{
    ui->pushButton_3->setStyleSheet("background-color:red; font-size:35px; color: white; border: 1px solid #191919;");
    hide();
    Dialog2 Dialog2;
    Dialog2.setModal(true);
    Dialog2.exec();
}

