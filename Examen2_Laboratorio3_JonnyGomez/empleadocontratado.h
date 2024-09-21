#ifndef EMPLEADOCONTRATADO_H
#define EMPLEADOCONTRATADO_H

#include "empleado.h"

class EmpleadoContratado : public Empleado {
public:
    EmpleadoContratado(const QString& nombre, int edad, float tarifaPorHora, int horasTrabajadas);
    float calcularSalario() const override;

    int getHorasTrabajadas() const;
    float getTarifaPorHora() const;

private:
    float tarifaPorHora;
    int horasTrabajadas;
};

#endif // EMPLEADOCONTRATADO_H
