#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>

namespace Ui {
    class MainWindow;
}
class myform;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots :
    void newDialog2();
private:
    myform *myForm;
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
