#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "DB_local.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    actualizar();
    timer = new QTimer(this);
    timer->setInterval(60000);
    connect(timer,SIGNAL(timeout()), this, SLOT(actualizar() ));
    timer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::actualizar(void){
    DB_local conexion;
    Muestra dato;
    conexion.getUltimoMin( dato ) ;
//    std::cout << "actualizar: " << dato.getAltura() << endl;
    ui->txtAltura->setText( QString::number(dato.getAltura() ) );
    ui->txtLat->setText( QString::number( dato.getLatitud() ));
    ui->txtLong->setText( QString::number( dato.getLongitud() ));
    ui->txtTemp->setText( QString::number( dato.getTemperatura() ) );
    ui->txtHumedad->setText( QString::number( dato.getHumedad() ) );
}
