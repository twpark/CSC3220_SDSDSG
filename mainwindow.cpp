#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    dragonModel(new DragonModel)
{
    ui->setupUi(this);
    updateView();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateView()
{
    int dHP = dragonModel->getDragonHP();
    bool dDead = dragonModel->isDragonDead();

    if (dDead) {
        // dead
        ui->dragonStatusLabel->setText("Dragon is dead I'm Sorry");
        ui->reviveButton->setEnabled(true);
        ui->hitButton->setEnabled(false);
    }
    else {
        // alive
        ui->dragonStatusLabel->setText("Dragon HP is " + QString::number(dHP));
        ui->reviveButton->setEnabled(false);
        ui->hitButton->setEnabled(true);
    }
}

void MainWindow::on_hitButton_clicked()
{
    dragonModel->hit();
    updateView();
}

void MainWindow::on_reviveButton_clicked()
{
    dragonModel->revive();
    updateView();
}
