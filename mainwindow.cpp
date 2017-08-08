#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>
#include <QGridLayout>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    createGridGroupBox();
    ui->setupUi(this);
    ui->angle_inp->setValidator(new QIntValidator());
    ui->P_x_inp->setValidator(new QIntValidator());
    ui->P_y_inp->setValidator(new QIntValidator());
    ui->P_z_inp->setValidator(new QIntValidator());
    ui->V_x_inp->setValidator(new QIntValidator());
    ui->V_y_inp->setValidator(new QIntValidator());
    ui->V_z_inp->setValidator(new QIntValidator());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createGridGroupBox(){

    gridGroupBox = new QGroupBox(tr("Grid layout"));

    QGridLayout *layout = new QGridLayout;


}


void MainWindow::on_rotate_button_clicked()
{
    if(true){

         p.setX(ui->P_x_inp->text().toDouble());
         p.setY(ui->P_y_inp->text().toDouble());
         p.setZ(ui->P_z_inp->text().toDouble());

         v.setX(ui->V_x_inp->text().toDouble());
         v.setY(ui->V_y_inp->text().toDouble());
         v.setZ(ui->V_z_inp->text().toDouble());


        angle = ui->angle_inp->text().toDouble();
    v.countLength();
    Point temp = p.rotate(angle,v);

//    qInfo()<<temp.getX();
//    qInfo()<<temp.getY();
//    qInfo()<<temp.getZ();

    auto lambda = [](QString s){if (s == "-0.000") s = "0.000"; return s;};
    ui->x_result_l->setText(lambda(QString::number(temp.getX(),'f',3)));
    ui->y_result_l->setText(lambda(QString::number(temp.getY(),'f',3)));
    ui->z_result_l->setText(lambda(QString::number(temp.getZ(),'f',3)));






    } else {

        msgBox.setText("Set all parameters");
        msgBox.exec();
    }
}

void MainWindow::on_pushButton_clicked()
{

    p.setX(ui->P_x_inp->text().toDouble());
    p.setY(ui->P_y_inp->text().toDouble());
    p.setZ(ui->P_z_inp->text().toDouble());

    Point temp = p.scale(ui->Sx_imp->text().toDouble(),ui->Sy_inp->text().toDouble(),ui->Sz_inp->text().toDouble(), Point(ui->ref_p_x_inp->text().toDouble(),ui->ref_p_y_inp->text().toDouble(),ui->ref_p_z_inp->text().toDouble()));

    auto lambda = [](QString s){if (s == "-0.000") s = "0.000"; return s;};
    ui->x_result_l_2->setText(lambda(QString::number(temp.getX(),'f',3)));
    ui->y_result_l_2->setText(lambda(QString::number(temp.getY(),'f',3)));
    ui->z_result_l_2->setText(lambda(QString::number(temp.getZ(),'f',3)));

}
