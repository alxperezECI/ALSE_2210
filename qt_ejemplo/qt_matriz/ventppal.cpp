#include "ventppal.h"
#include "./ui_ventppal.h"
#include <eigen3/Eigen/Dense>
#include <iostream>
#include <dia_escalar.h>

using Eigen::MatrixXd;

VentPPal::VentPPal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VentPPal)
{
    ui->setupUi(this);
}

VentPPal::~VentPPal()
{
    delete ui;
}

void VentPPal::on_pushButton_clicked()
{
    MatrixXd m1(2,2), m2(2,2), mr(2,2);
    m1(0,0)= ui->txt_M1_11->text().toDouble(); // Completar la lectura de las dos matrices

    switch ( ui->cmb_Operacion->currentIndex() ){ // De qué otra forma se puede saber cuál operación realizar?
    case 0: // Sería la suma
        mr = m1 + m2;
        break;
    case 1: // Sería la resta
        mr = m1 - m2;
        break;
    case 2: // Sería la multiplicación
        mr = m1 * m2;
        break;
    case 3: // Sería la división
        Dia_escalar aux(this);
        aux.show();
        aux.exec();
        mr = m1 * m2.inverse();
     }

    ui->txt_MR_11->setText( QString::number( mr(0,0) ) ); // Completar la escritura del resultado

}

void VentPPal::recibeEscalar(int tipo, double esc){
    std::cout << "Dentro del slot" << std::endl;
    _tipo = tipo;
    _escalar = esc;

}
