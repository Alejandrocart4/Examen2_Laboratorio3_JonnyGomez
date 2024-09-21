#ifndef ESTUDIANTE_MAESTRIA_H
#define ESTUDIANTE_MAESTRIA_H

#include "estudiante.h"

class EstudianteMaestria : public Estudiante {
public:
    EstudianteMaestria(const QString& nombre, int edad);
    double promedio() const override;

    void guardarArchivo(std::ofstream &out) const override;
    void cargarArchivo(std::ifstream &in) override;
};

#endif // ESTUDIANTE_MAESTRIA_H
