#include "Flota.h"
#include "auto.h"
#include <QFile>
#include <QTextStream>
#include <iostream>

Flota::~Flota() {
    for (auto v : vehiculos) {
        delete v; // Liberar memoria
    }
}

void Flota::agregarVehiculo(Vehiculo* v) {
    vehiculos.push_back(v);
}

void Flota::eliminarVehiculo(int index) {
    if (index >= 0 && index < vehiculos.size()) {
        delete vehiculos[index];
        vehiculos.erase(vehiculos.begin() + index);
    }
}

void Flota::guardarDatos(const QString& filename) {
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        std::cerr << "No se pudo abrir el archivo para guardar." << std::endl;
        return;
    }

    QTextStream out(&file);
    for (const auto& v : vehiculos) {
        QString tipoVehiculo = (dynamic_cast<Auto*>(v) != nullptr) ? "Auto" : "Camion"; // Determina el tipo

        out << "Tipo: " << tipoVehiculo
            << ", Modelo: " << v->getModelo()
            << ", Año: " << v->getAño()
            << ", Kilometraje: " << v->getKilometraje()
            << ", Mantenimiento: " << v->calcularMantenimiento()
            << "\n";
    }

    file.close();
}
