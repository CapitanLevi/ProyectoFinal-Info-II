#ifndef NIVEL4_H
#define NIVEL4_H

#include <QDialog>

namespace Ui {
class Nivel4;
}

class Nivel4 : public QDialog
{
    Q_OBJECT

public:
    explicit Nivel4(QWidget *parent = 0);
    ~Nivel4();

private:
    Ui::Nivel4 *ui;
};

#endif // NIVEL4_H