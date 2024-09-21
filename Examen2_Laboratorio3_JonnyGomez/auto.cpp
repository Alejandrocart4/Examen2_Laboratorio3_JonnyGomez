#include "Auto.h"

Auto::Auto(QString m, int a, float k) : Vehiculo(m, a, k) {}

float Auto::calcularMantenimiento() const {
    int mantenimientoRealizado = static_cast<int>(kilometraje / 5000); // Cantidad de mantenimientos realizados
    return mantenimientoRealizado * 120; // Costo total del mantenimiento
}

