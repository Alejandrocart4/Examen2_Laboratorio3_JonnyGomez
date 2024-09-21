#ifndef FLOTA_H
#define FLOTA_H

#include <vector>
#include "Vehiculo.h"

class Flota {
private:
    std::vector<Vehiculo*> vehiculos;

public:
    ~Flota();
    void agregarVehiculo(Vehiculo* v);
    void eliminarVehiculo(int index);
    void guardarDatos(const QString& filename);
    std::vector<Vehiculo*> getVehiculos() const { return vehiculos; }
};

#endif // FLOTA_H
