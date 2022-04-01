#include "dia_escalar.h"
#include "ui_dia_escalar.h"
#include <iostream>

Dia_escalar::Dia_escalar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dia_escalar)
{
    ui->setupUi(this);
}

Dia_escalar::~Dia_escalar()
{
    delete ui;
}

void Dia_escalar::on_rbt_M1_clicked()
{
    ui->txt_Escalar->setReadOnly( false );
}

void Dia_escalar::on_rbt_M2_clicked()
{
    ui->txt_Escalar->setReadOnly( false );
}

void Dia_escalar::on_rbt_M1M2_clicked()
{
    ui->txt_Escalar->setReadOnly( true );
    ui->txt_Escalar->setText( "" );
}

void Dia_escalar::on_buttonBox_accepted()
{
    double esc = (ui->txt_Escalar->text()).toDouble();
    int tipo = 0;

    if( ui->rbt_M1M2->isChecked() ) tipo = 0;
    if( ui->rbt_M1->isChecked() ) tipo = 1;
    if( ui->rbt_M2->isChecked() ) tipo = 2;

    emit envioEscalar( tipo, esc );
}
