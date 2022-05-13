#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsRectItem>
#include "gameboard.h"
#include "view.h"
#include "settingswindow.h"
#include <QMessageBox>
#include <QDebug>
#include "dialog.h"

    MainWindow::MainWindow(QWidget* parent)
        : QMainWindow(parent)
        , ui(new Ui::MainWindow)
    {
       ui->setupUi(this);

    }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //ui->setupUi(this);
    QMessageBox* msg = new QMessageBox(this);
    SettingsWindow* settings = new SettingsWindow(this);
    GameBoard* board = new GameBoard(settings->get(), this);
    View* view = new View;
    view->setScene(board);
    ui->verticalLayout->addWidget(view);

    connect(ui->actionNewGame, &QAction::triggered, board, &GameBoard::resetGame);
    connect(ui->actionSettings, &QAction::triggered, settings, &SettingsWindow::show);
    connect(board, &GameBoard::sceneRectChanged, view, [=]() { view->resizeEvent(nullptr); });
    connect(board, &GameBoard::gameEnded, this, [=](int time) {
        msg->setText("Time: " + QString::number(time) + " seconds");
        msg->exec();
    });
    ui->pushButton->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_2->setVisible(false);
    ui->pushButton_4->setVisible(false);
}




void MainWindow::on_pushButton_3_clicked()
{
    Dialog Dialog;
    Dialog.setModal(true);
    Dialog.exec();
}

