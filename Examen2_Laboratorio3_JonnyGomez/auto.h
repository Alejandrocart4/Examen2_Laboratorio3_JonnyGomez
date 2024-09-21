#ifndef AUTO_H
#define AUTO_H

#include "Vehiculo.h"

class Auto : public Vehiculo {
public:
    Auto(QString m, int a, float k);
    float calcularMantenimiento() const override;
};

#endif // AUTO_H
