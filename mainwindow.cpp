#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QToolBar>
#include <iostream>
#include <QMessageBox>
#include <QProcess>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    toolBar = new QToolBar;
    toolBar->addAction("Excitation");
    toolBar->addAction("Plotting");
    toolBar->addAction("Model");
    this->setWindowTitle(tr("ezAMI1.0"));
    this->addToolBar(toolBar);

    plot = new plotting;

}

MainWindow::~MainWindow()
{
    delete ui;
    delete plot;
}

void MainWindow::on_simulateButton_clicked()
{
    plot->show();
    ui->statusWindow->append("Simulation is running...");

}
void MainWindow::on_generateAmiButton_clicked()
{
    ui->statusWindow->append("AMI model generation is running...");
    QMessageBox msgBox;
    msgBox.setText("I am still working on it ....");
    msgBox.exec();

}


void MainWindow::on_compileButton_clicked()
{
    QProcess process;
    process.startDetached("cmd.exe");
    ui->statusWindow->append("Compiling");
    //process.waitForFinished(-1);
    //QString output = process.readAllStandardOutput();
    //ui->statusWindow->append(output);
}
