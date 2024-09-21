#include "Camion.h"

Camion::Camion(QString m, int a, float k, float c, int v)
    : Vehiculo(m, a, k), capacidadCarga(c), viajesLargos(v) {}

float Camion::calcularMantenimiento() const {
    int mantenimientoRealizado = static_cast<int>(kilometraje / 3000); // Cantidad de mantenimientos realizados
    return mantenimientoRealizado * 100; // Costo total del mantenimiento
}

