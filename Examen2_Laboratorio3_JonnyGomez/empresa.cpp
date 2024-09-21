#include "empresa.h"

Empresa::Empresa() {}

Empresa::~Empresa() {
    for (Empleado* empleado : empleados) {
        delete empleado;
    }
}

void Empresa::agregarEmpleado(Empleado* empleado) {
    empleados.push_back(empleado);
}

void Empresa::eliminarEmpleado(int index) {
    if (index >= 0 && index < empleados.size()) {
        delete empleados[index];
        empleados.erase(empleados.begin() + index);
    }
}

Empleado* Empresa::obtenerEmpleado(int index) const {
    if (index >= 0 && index < empleados.size()) {
        return empleados[index];
    }
    return nullptr;
}

int Empresa::obtenerCantidadEmpleados() const {
    return empleados.size();
}
