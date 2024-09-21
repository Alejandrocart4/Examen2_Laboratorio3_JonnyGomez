#include "estudiante.h"
#include <fstream>
#include <iostream>

Estudiante::Estudiante(const QString& nombre, int edad)
    : nombre(nombre), edad(edad) {}

//Estudiante::~Estudiante() {}


void Estudiante::agregarMateria(const QString& materia, int calificacion, int uv) {
    materias.push_back(materia);
    calificaciones.push_back(calificacion);
    unidadesValorativas.push_back(uv);
}

void Estudiante::guardarArchivo(std::ofstream &out) const {
    out << nombre.toStdString() << "\n";
    out << edad << "\n";
    out << materias.size() << "\n";
    for (size_t i = 0; i < materias.size(); ++i) {
        out << materias[i].toStdString() << " " << calificaciones[i] << "\n";
    }
}

void Estudiante::cargarArchivo(std::ifstream &in) {
    std::string nombreEst;
    in >> nombreEst;
    nombre = QString::fromStdString(nombreEst);
    in >> edad;

    size_t numMaterias;
    in >> numMaterias;
    materias.clear();
    calificaciones.clear();

    for (size_t i = 0; i < numMaterias; ++i) {
        std::string materia;
        int calificacion;
        in >> materia >> calificacion;
        materias.push_back(QString::fromStdString(materia));
        calificaciones.push_back(calificacion);
    }
}
