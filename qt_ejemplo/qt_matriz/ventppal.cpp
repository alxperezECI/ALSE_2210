#include "ventppal.h"
#include "./ui_ventppal.h"
#include <string>

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

/*
 *
int main()
{
  MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout << m << std::endl;
}
*/
void VentPPal::on_pushButton_clicked()
{
    QString a = ui->txt_M1_11->text();
    ui->txt_MR_11->setText("Hola Alse");
    ui->txt_MR_11->insert( a  );
}
