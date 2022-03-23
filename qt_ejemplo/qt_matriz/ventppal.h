#ifndef VENTPPAL_H
#define VENTPPAL_H

#include <QMainWindow>
#include <iostream>
#include <eigen3/Eigen/Dense>

using Eigen::MatrixXd;

QT_BEGIN_NAMESPACE
namespace Ui { class VentPPal; }
QT_END_NAMESPACE

class VentPPal : public QMainWindow
{
    Q_OBJECT

public:
    VentPPal(QWidget *parent = nullptr);
    ~VentPPal();

private slots:
    void on_pushButton_clicked();

private:
    Ui::VentPPal *ui;
    Eigen::MatrixXd m1(2,2);
    MatrixXd m2(2,2);
    MatrixXd mr(2,2);

};
#endif // VENTPPAL_H
