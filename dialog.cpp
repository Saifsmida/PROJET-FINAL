#include "dialog.h"
#include "ui_dialog.h"
#include "dialog1.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_2_clicked()
{
    ui->pushButton_2->setStyleSheet("background-color:red; font-size:35px; color: white; border: 1px solid #191919;");
    hide();
    Dialog1 Dialog1;
    Dialog1.setModal(true);
    Dialog1.exec();
}


void Dialog::on_pushButton_clicked()
{
    ui->pushButton->setStyleSheet("background-color:green; ");
    hide();
    Dialog1 Dialog1;
    Dialog1.setModal(true);
    Dialog1.exec();
}


void Dialog::on_pushButton_3_clicked()
{
    ui->pushButton_3->setStyleSheet("background-color:red; font-size:35px; color: white; border: 1px solid #191919;");
    hide();
    Dialog1 Dialog1;
    Dialog1.setModal(true);
    Dialog1.exec();
}


void Dialog::on_pushButton_4_clicked()
{
    ui->pushButton_4->setStyleSheet("background-color:red; font-size:35px; color: white; border: 1px solid #191919;");
    hide();
    Dialog1 Dialog1;
    Dialog1.setModal(true);
    Dialog1.exec();
}

