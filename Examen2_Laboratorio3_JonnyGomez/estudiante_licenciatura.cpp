#include "estudiante_licenciatura.h"
#include <fstream>

EstudianteLicenciatura::EstudianteLicenciatura(const QString& nombre, int edad)
    : Estudiante(nombre, edad) {}

double EstudianteLicenciatura::promedio() const {
    int suma = 0;

    for (int calificacion : calificaciones) {
        suma += calificacion;
    }

    if (calificaciones.empty()) return 0.0; // Evitar división por cero

    return static_cast<double>(suma) / calificaciones.size();
}

void EstudianteLicenciatura::guardarArchivo(std::ofstream &out) const {
    out << "Licenciatura" << std::endl;  // Usa std::endl para nueva línea
    out << nombre.toStdString() << std::endl;  // Convertir QString a std::string
    out << edad << std::endl;
    out << materias.size() << std::endl;
    for (size_t i = 0; i < materias.size(); ++i) {
        out << materias[i].toStdString() << " " << calificaciones[i] << std::endl;
    }
}

void EstudianteLicenciatura::cargarArchivo(std::ifstream &in) {
    Estudiante::cargarArchivo(in);
}
