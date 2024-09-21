#include "empleadofijo.h"

EmpleadoFijo::EmpleadoFijo(const QString& nombre, int edad, float salario)
    : Empleado(nombre, edad, salario) {}

float EmpleadoFijo::calcularSalario() const {
    return salario;
}
