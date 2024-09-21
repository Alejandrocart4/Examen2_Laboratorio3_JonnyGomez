#include "estudiante_maestria.h"
#include <fstream>
#include <algorithm>

EstudianteMaestria::EstudianteMaestria(const QString& nombre, int edad)
    : Estudiante(nombre, edad) {}

double EstudianteMaestria::promedio() const {
    int sumaNotas = 0;
    int sumaUV = 0;

    for (size_t i = 0; i < calificaciones.size(); ++i) {
        sumaNotas += calificaciones[i] * unidadesValorativas[i]; // Calificación ponderada por UV
        sumaUV += unidadesValorativas[i]; // Suma de UV
    }

    if (sumaUV == 0) return 0.0; // Evitar división por cero

    return static_cast<double>(sumaNotas) / sumaUV;
}

void EstudianteMaestria::guardarArchivo(std::ofstream &out) const {
    out << "Maestria" << std::endl;  // Usa std::endl para nueva línea
    out << nombre.toStdString() << std::endl;  // Convertir QString a std::string
    out << edad << std::endl;
    out << materias.size() << std::endl;
    for (size_t i = 0; i < materias.size(); ++i) {
        out << materias[i].toStdString() << " " << calificaciones[i] << std::endl;
    }
}

void EstudianteMaestria::cargarArchivo(std::ifstream &in) {
    Estudiante::cargarArchivo(in);
}
