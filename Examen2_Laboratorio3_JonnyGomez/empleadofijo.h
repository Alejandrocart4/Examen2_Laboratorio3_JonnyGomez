#ifndef EMPLEADOFIJO_H
#define EMPLEADOFIJO_H

#include "empleado.h"

class EmpleadoFijo : public Empleado {
public:
    EmpleadoFijo(const QString& nombre, int edad, float salario);
    float calcularSalario() const override;
};

#endif // EMPLEADOFIJO_H
