#ifndef EMPRESA_H
#define EMPRESA_H

#include <vector>
#include "empleado.h"

class Empresa {
public:
    Empresa();
    ~Empresa();

    void agregarEmpleado(Empleado* empleado);
    void eliminarEmpleado(int index);
    Empleado* obtenerEmpleado(int index) const;
    int obtenerCantidadEmpleados() const;

private:
    std::vector<Empleado*> empleados;
};

#endif // EMPRESA_H
