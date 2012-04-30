#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QWidget>
#include <QString>
#include "myform.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myForm = new myform;
    ui->pushButton->setText("CLICK");

    connect(ui->pushButton , SIGNAL(clicked()) , this , SLOT(newDialog2()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::newDialog2(){
   MainWindow::myForm->str = "This str changed in main window class ";
   QString str2 = MainWindow::myForm->str ;
   MainWindow::myForm->label->setText(str2);
}
