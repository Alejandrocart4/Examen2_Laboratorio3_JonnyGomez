/********************************************************************************
** Form generated from reading UI file 'cframe.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFRAME_H
#define UI_CFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cframe
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QWidget *page_2;
    QLineEdit *lineEditNombre;
    QSpinBox *spinBoxEdad;
    QComboBox *comboBoxTipoEstudiante;
    QPushButton *btnAgregarEstudiante;
    QPushButton *btnGuardar;
    QPushButton *btnCargar;
    QPushButton *btnMostrarPromedios;
    QPushButton *pushButton_5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEditMateria;
    QSpinBox *spinBoxUV;
    QLabel *label_6;
    QLabel *label_7;
    QDoubleSpinBox *spinBoxCalificacion;
    QWidget *page_3;
    QLabel *label_8;
    QPushButton *anadir;
    QLabel *label_9;
    QSpinBox *viajesSpinBox;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *guardar;
    QComboBox *tipocomboBox;
    QSpinBox *anospinBox;
    QPushButton *remover;
    QDoubleSpinBox *capacidadCargaDoubleSpinBox;
    QTableWidget *tableWidget;
    QDoubleSpinBox *kilometrajedoubleSpinBox;
    QLabel *label_12;
    QLineEdit *modeloEdit;
    QWidget *page_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName("cframe");
        cframe->resize(1227, 737);
        centralwidget = new QWidget(cframe);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 10, 1221, 691));
        page = new QWidget();
        page->setObjectName("page");
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(480, 180, 201, 71));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(480, 540, 201, 71));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(460, 30, 311, 111));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Historic")});
        font.setPointSize(36);
        label->setFont(font);
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(480, 420, 201, 71));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(480, 300, 201, 71));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        lineEditNombre = new QLineEdit(page_2);
        lineEditNombre->setObjectName("lineEditNombre");
        lineEditNombre->setGeometry(QRect(110, 70, 371, 41));
        spinBoxEdad = new QSpinBox(page_2);
        spinBoxEdad->setObjectName("spinBoxEdad");
        spinBoxEdad->setGeometry(QRect(110, 170, 201, 31));
        comboBoxTipoEstudiante = new QComboBox(page_2);
        comboBoxTipoEstudiante->setObjectName("comboBoxTipoEstudiante");
        comboBoxTipoEstudiante->setGeometry(QRect(110, 260, 201, 31));
        btnAgregarEstudiante = new QPushButton(page_2);
        btnAgregarEstudiante->setObjectName("btnAgregarEstudiante");
        btnAgregarEstudiante->setGeometry(QRect(520, 340, 171, 61));
        btnGuardar = new QPushButton(page_2);
        btnGuardar->setObjectName("btnGuardar");
        btnGuardar->setGeometry(QRect(910, 410, 161, 61));
        btnCargar = new QPushButton(page_2);
        btnCargar->setObjectName("btnCargar");
        btnCargar->setGeometry(QRect(170, 590, 141, 71));
        btnMostrarPromedios = new QPushButton(page_2);
        btnMostrarPromedios->setObjectName("btnMostrarPromedios");
        btnMostrarPromedios->setGeometry(QRect(160, 450, 161, 71));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(1070, 630, 141, 41));
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 29, 231, 31));
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 130, 131, 41));
        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 220, 231, 41));
        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(760, 40, 221, 20));
        lineEditMateria = new QLineEdit(page_2);
        lineEditMateria->setObjectName("lineEditMateria");
        lineEditMateria->setGeometry(QRect(760, 60, 271, 28));
        spinBoxUV = new QSpinBox(page_2);
        spinBoxUV->setObjectName("spinBoxUV");
        spinBoxUV->setGeometry(QRect(760, 180, 101, 29));
        label_6 = new QLabel(page_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(760, 160, 171, 20));
        label_7 = new QLabel(page_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(760, 100, 191, 20));
        spinBoxCalificacion = new QDoubleSpinBox(page_2);
        spinBoxCalificacion->setObjectName("spinBoxCalificacion");
        spinBoxCalificacion->setGeometry(QRect(760, 120, 141, 29));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_8 = new QLabel(page_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(320, 150, 91, 31));
        anadir = new QPushButton(page_3);
        anadir->setObjectName("anadir");
        anadir->setGeometry(QRect(150, 130, 111, 41));
        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(320, 80, 91, 31));
        viajesSpinBox = new QSpinBox(page_3);
        viajesSpinBox->setObjectName("viajesSpinBox");
        viajesSpinBox->setGeometry(QRect(480, 250, 61, 31));
        label_10 = new QLabel(page_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(320, 220, 91, 31));
        label_11 = new QLabel(page_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(480, 220, 91, 31));
        guardar = new QPushButton(page_3);
        guardar->setObjectName("guardar");
        guardar->setGeometry(QRect(150, 240, 111, 41));
        tipocomboBox = new QComboBox(page_3);
        tipocomboBox->addItem(QString());
        tipocomboBox->addItem(QString());
        tipocomboBox->setObjectName("tipocomboBox");
        tipocomboBox->setGeometry(QRect(450, 110, 111, 24));
        anospinBox = new QSpinBox(page_3);
        anospinBox->setObjectName("anospinBox");
        anospinBox->setGeometry(QRect(320, 180, 61, 31));
        anospinBox->setMaximum(2030);
        remover = new QPushButton(page_3);
        remover->setObjectName("remover");
        remover->setGeometry(QRect(150, 180, 121, 41));
        capacidadCargaDoubleSpinBox = new QDoubleSpinBox(page_3);
        capacidadCargaDoubleSpinBox->setObjectName("capacidadCargaDoubleSpinBox");
        capacidadCargaDoubleSpinBox->setGeometry(QRect(480, 180, 61, 31));
        capacidadCargaDoubleSpinBox->setMaximum(100000.990000000005239);
        tableWidget = new QTableWidget(page_3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(790, 310, 331, 281));
        kilometrajedoubleSpinBox = new QDoubleSpinBox(page_3);
        kilometrajedoubleSpinBox->setObjectName("kilometrajedoubleSpinBox");
        kilometrajedoubleSpinBox->setGeometry(QRect(320, 250, 71, 31));
        kilometrajedoubleSpinBox->setMaximum(1000000000.990000009536743);
        label_12 = new QLabel(page_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(480, 150, 151, 31));
        modeloEdit = new QLineEdit(page_3);
        modeloEdit->setObjectName("modeloEdit");
        modeloEdit->setGeometry(QRect(300, 110, 113, 24));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        stackedWidget->addWidget(page_4);
        cframe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cframe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1227, 25));
        cframe->setMenuBar(menubar);
        statusbar = new QStatusBar(cframe);
        statusbar->setObjectName("statusbar");
        cframe->setStatusBar(statusbar);

        retranslateUi(cframe);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(cframe);
    } // setupUi

    void retranslateUi(QMainWindow *cframe)
    {
        cframe->setWindowTitle(QCoreApplication::translate("cframe", "cframe", nullptr));
        pushButton->setText(QCoreApplication::translate("cframe", "EJERCICIO #1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("cframe", "EJERCICIO #4", nullptr));
        label->setText(QCoreApplication::translate("cframe", "EXAMEN 2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("cframe", "EJERCICIO #3", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cframe", "EJERCICIO #2", nullptr));
        btnAgregarEstudiante->setText(QCoreApplication::translate("cframe", "Agregar Estudiante", nullptr));
        btnGuardar->setText(QCoreApplication::translate("cframe", "Guardar", nullptr));
        btnCargar->setText(QCoreApplication::translate("cframe", "Cargar", nullptr));
        btnMostrarPromedios->setText(QCoreApplication::translate("cframe", "Mostrar Promedios", nullptr));
        pushButton_5->setText(QCoreApplication::translate("cframe", "Volver", nullptr));
        label_2->setText(QCoreApplication::translate("cframe", "Ingrese el Nombre del estudiante:", nullptr));
        label_3->setText(QCoreApplication::translate("cframe", "Digite la edad: ", nullptr));
        label_4->setText(QCoreApplication::translate("cframe", "Seleccione El tipo de estudiante: ", nullptr));
        label_5->setText(QCoreApplication::translate("cframe", "Ingrese nombre de la clase:", nullptr));
        label_6->setText(QCoreApplication::translate("cframe", "Ingrese U.V de la clase:", nullptr));
        label_7->setText(QCoreApplication::translate("cframe", "Ingrese la nota de la clase:", nullptr));
        label_8->setText(QCoreApplication::translate("cframe", "A\303\261o:", nullptr));
        anadir->setText(QCoreApplication::translate("cframe", "A\303\261adir", nullptr));
        label_9->setText(QCoreApplication::translate("cframe", "Modelo:", nullptr));
        label_10->setText(QCoreApplication::translate("cframe", "Kilometraje", nullptr));
        label_11->setText(QCoreApplication::translate("cframe", "Vaijes", nullptr));
        guardar->setText(QCoreApplication::translate("cframe", "Guardar", nullptr));
        tipocomboBox->setItemText(0, QCoreApplication::translate("cframe", "Auto", nullptr));
        tipocomboBox->setItemText(1, QCoreApplication::translate("cframe", "Camion", nullptr));

        remover->setText(QCoreApplication::translate("cframe", "Eliminar", nullptr));
        label_12->setText(QCoreApplication::translate("cframe", "Capacidad de Carga", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
