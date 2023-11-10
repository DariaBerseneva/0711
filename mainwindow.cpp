#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <Clock/include/clock.h>
MainWindow::MainWindow(QWidget *parent)
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
    Clock *cl = new Clock(this);
    cl->setParent(this);
    cl->show();
}

