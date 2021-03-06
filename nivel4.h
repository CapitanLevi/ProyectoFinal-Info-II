#ifndef NIVEL4_H
#define NIVEL4_H

#include <QDialog>
#include <QMovie>
// *************** BACK END ***************** //
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QPixmap>
#include <QTimer>
#include <QFile>
#include <QKeyEvent>
#include "Backend/esferasim.h"
#include "Backend/esferagraf.h"
#include "Backend/esferasimmovcirgraf.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
// *************** BACK END ***************** //

namespace Ui {
class Nivel4;
}

class Nivel4 : public QDialog
{
    Q_OBJECT

public:
    explicit Nivel4(QWidget *parent = 0);
    ~Nivel4();
    QMovie *movie;

    int bandera=0;
    int numero_obstaculos=4;
    int contador=0;
    int banderacontador=0;
private slots:
    void actualizar();
private:
    Ui::Nivel4 *ui;
    // *************** BACK END ***************** //
    QTimer *timer;              //timer para los intervalos de tiempo entre cada frame
    QGraphicsScene *scene;      //scene que muestra los objetos animados
    QGraphicsRectItem *rectangle;
    QList<QGraphicsRectItem *> rectangles;
    float dt;                   //intervalo de tiempo entre frames
    int h_limit;                //longitud en X del mundo
    int v_limit;                //longitud en Y del mundo
    void bordercollision(EsferaSim *b);   //metodo para las colisiones con los bordes del mundo

    QList<EsferaGraf*> bars;
    EsferaGraf *parabolico;
    QList<esferasimmovcirgraf*> bars2;
    float e;
    float tiros=0;
    int Ganador=0;
    QPainter *obstaculo1;


    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    bool Pressed=false;
    // *************** BACK END ***************** //
};

#endif // NIVEL4_H
