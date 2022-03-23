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

private:
    Ui::VentPPal *ui;
};
#endif // VENTPPAL_H
