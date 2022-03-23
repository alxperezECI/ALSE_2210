#include "ventppal.h"
#include "./ui_ventppal.h"

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

