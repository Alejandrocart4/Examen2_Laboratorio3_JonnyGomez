#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <QString>

class Empleado {
public:
    Empleado(const QString& nombre, int edad, float salario);
    virtual ~Empleado();

    virtual float calcularSalario() const = 0;

    QString getNombre() const;
    int getEdad() const;
    float getSalario() const;

protected:
    QString nombre;
    int edad;
    float salario;
};

#endif // EMPLEADO_H
