#ifndef CFRAME_H
#define CFRAME_H

#include <QMainWindow>
#include <vector>
#include "estudiante.h"
#include "estudiante_licenciatura.h"
#include "estudiante_maestria.h"
#include "flota.h"
#include "empresa.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class cframe;
}
QT_END_NAMESPACE

class cframe : public QMainWindow
{
    Q_OBJECT

public:
    cframe(QWidget *parent = nullptr);
    ~cframe();

private slots:
    void on_btnAgregarEstudiante_clicked();

    void on_btnGuardar_clicked();

    void on_btnCargar_clicked();

    void on_btnMostrarPromedios_clicked();

    void on_anadir_clicked();

    void on_remover_clicked();

    void on_guardar_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();



private:
    void actualizarTabla();

private:
    Ui::cframe *ui;
     std::vector<Estudiante*> estudiantes;

    void agregarEstudiante(const QString& nombre, int edad, const QString& tipo);
    void guardarEstudiantes();
    void cargarEstudiantes();

    Flota flota;
    Empresa empresa;
};
#endif // CFRAME_H
