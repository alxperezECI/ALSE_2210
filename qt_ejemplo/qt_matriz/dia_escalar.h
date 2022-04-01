#ifndef DIA_ESCALAR_H
#define DIA_ESCALAR_H

#include <QDialog>

namespace Ui {
class Dia_escalar;
}

class Dia_escalar : public QDialog
{
    Q_OBJECT

public:
    explicit Dia_escalar(QWidget *parent = nullptr);
    ~Dia_escalar();

private slots:
    void on_rbt_M1_clicked();

    void on_rbt_M2_clicked();

    void on_rbt_M1M2_clicked();

    void on_buttonBox_accepted();

signals:
    void envioEscalar(int tipo, double escalar );

private:
    Ui::Dia_escalar *ui;
};

#endif // DIA_ESCALAR_H
