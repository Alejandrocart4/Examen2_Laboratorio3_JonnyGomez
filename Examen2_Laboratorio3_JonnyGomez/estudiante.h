#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <QString>
#include <vector>

class Estudiante {
protected:
    QString nombre;
    int edad;
    std::vector<QString> materias;
    std::vector<int> calificaciones;
    std::vector<int> unidadesValorativas;

public:
    Estudiante(const QString& nombre, int edad);
    virtual ~Estudiante() = default;//***//

   void agregarMateria(const QString& materia, int calificacion, int uv);

    QString getNombre() const { return nombre; }

    // Método virtual puro para cálculo de promedio
    virtual double promedio() const = 0;

    // Métodos para guardar/cargar información
      virtual void guardarArchivo(std::ofstream& out) const = 0;
    virtual void cargarArchivo(std::ifstream &in);

      const std::vector<QString>& getMaterias() const { return materias; }
      const std::vector<int>& getCalificaciones() const { return calificaciones; }
      const std::vector<int>& getUnidadesValorativas() const { return unidadesValorativas; }
};

#endif // ESTUDIANTE_H
