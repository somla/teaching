#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , isVisible(true)
{
    ui->setupUi(this);
    changeNameVisibility();
    connect(ui->pushButton,   SIGNAL (released()), this, SLOT (handleButton()));
    connect(ui->pushButton_2, SIGNAL (released()), this, SLOT (handleButtonMyName()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleButton()
{
    std::cout<<"Hello World"<<std::endl;
    ui->label->setText("Hello world.");
    changeNameVisibility();
    int i = 0;
    for(auto element : ui->formLayout->children())
    {
       std::cout<<"i:"<<(i++)<<std::endl;
    }
}

void MainWindow::handleButtonMyName()
{
    std::string helloSentence = "Hello " + ui->lineEdit->text().toStdString() + "!";
    ui->label_3->setText( helloSentence.c_str() );
}
void MainWindow::changeNameVisibility()
{
    isVisible = !isVisible;
    ui->lineEdit->setVisible(isVisible);
    ui->pushButton_2->setVisible(isVisible);
    ui->label_2->setVisible(isVisible);
}
