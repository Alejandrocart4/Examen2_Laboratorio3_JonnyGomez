#ifndef VEHICULO_H
#define VEHICULO_H

#include <QString>

class Vehiculo {
protected:
    QString modelo;
    int año;
    float kilometraje;

public:
    Vehiculo(QString m, int a, float k);
    virtual ~Vehiculo() {}
    virtual float calcularMantenimiento() const = 0; // Método virtual puro

    QString getModelo() const { return modelo; }
    int getAño() const { return año; }
    float getKilometraje() const { return kilometraje; }
};

#endif // VEHICULO_H
