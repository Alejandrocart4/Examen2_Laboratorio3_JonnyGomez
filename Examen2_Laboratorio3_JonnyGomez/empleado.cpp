#include "empleado.h"

Empleado::Empleado(const QString& nombre, int edad, float salario)
    : nombre(nombre), edad(edad), salario(salario) {}

Empleado::~Empleado() {}

QString Empleado::getNombre() const {
    return nombre;
}

int Empleado::getEdad() const {
    return edad;
}

float Empleado::getSalario() const {
    return salario;
}
