#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>

using namespace std;

const int nroopciones = 7;

class Menu
{
private:
    string msg = "Ingrese su opcion: ";
    string opciones[nroopciones] = {
        "Opción 1",
        "Opción 2",
        "Opción 3",
        "Opción 4",
        "Opción 5",
        "Opción 6",
        "Salir 0"};
    void pedirOpcion();
    void listarOpciones();
    void listarOpcion(string);
    void cls();
    void titulo();
    int opcionValida(int);
    void esperar();
    void procesar(int);
    void saludar();
    void terminar();
    void mensaje(string);

public:
    Menu();
};

#endif