#include "empleadocontratado.h"

EmpleadoContratado::EmpleadoContratado(const QString& nombre, int edad, float tarifaPorHora, int horasTrabajadas)
    : Empleado(nombre, edad, tarifaPorHora * horasTrabajadas), tarifaPorHora(tarifaPorHora), horasTrabajadas(horasTrabajadas) {}

float EmpleadoContratado::calcularSalario() const {
    return tarifaPorHora * horasTrabajadas;
}

int EmpleadoContratado::getHorasTrabajadas() const {
    return horasTrabajadas;
}

float EmpleadoContratado::getTarifaPorHora() const {
    return tarifaPorHora;
}
