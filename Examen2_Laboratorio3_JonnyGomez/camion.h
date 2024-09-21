#ifndef CAMION_H
#define CAMION_H

#include "Vehiculo.h"

class Camion : public Vehiculo {
private:
    float capacidadCarga; // en toneladas
    int viajesLargos;

public:
    Camion(QString m, int a, float k, float c, int v);
    float calcularMantenimiento() const override;
};

#endif // CAMION_H
