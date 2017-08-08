#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "xyz.h"
#include "vector.h"
#include "point.h"
#include <QMessageBox>
#include <QGroupBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


    QMessageBox msgBox;
    Point p = Point(0,0,0);
    Vector v = Vector(0,0,0);
    float angle;

private:

    QGroupBox *gridGroupBox;
    void createGridGroupBox();

private slots:


    void on_rotate_button_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
