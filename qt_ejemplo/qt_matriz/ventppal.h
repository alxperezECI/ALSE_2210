#ifndef VENTPPAL_H
#define VENTPPAL_H

#include <QMainWindow>

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
    void recibeEscalar(int tipo, double esc);

private:
    Ui::VentPPal *ui;
    int      _tipo;
    double   _escalar;
};
#endif // VENTPPAL_H
