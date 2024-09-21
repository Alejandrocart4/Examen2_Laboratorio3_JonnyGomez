#ifndef ESTUDIANTE_LICENCIATURA_H
#define ESTUDIANTE_LICENCIATURA_H

#include "estudiante.h"

class EstudianteLicenciatura : public Estudiante {
public:
    EstudianteLicenciatura(const QString& nombre, int edad);
    double promedio() const override;

    void guardarArchivo(std::ofstream &out) const override;
    void cargarArchivo(std::ifstream &in) override;
};

#endif // ESTUDIANTE_LICENCIATURA_H
