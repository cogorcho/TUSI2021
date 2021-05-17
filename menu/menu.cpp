#include <iostream>
#include <stdio.h>
#include "menu.h"

using namespace std;

Menu::Menu()
{
    pedirOpcion();
}

void Menu::listarOpciones()
{
    cls();
    titulo();
    for (string o : opciones)
    {
        listarOpcion(o);
    }
}

void Menu::listarOpcion(string opcion)
{
    cout << "\t\t - " << opcion << endl;
}

void Menu::cls()
{
    system("clear");
}

void Menu::pedirOpcion()
{
    int opc;
    while (true)
    {
        listarOpciones();
        cout << endl
             << "\t\t Ingrese su opcion: ";
        cin >> opc;
        if (opcionValida(opc))
        {
            if (opc == 0)
            {
                saludar();
                terminar();
            }
            else
            {
                //procesar(opc);
                //cls();
                cout << endl
                     << endl
                     << "\t\t ----------------------------------" << endl
                     << "\t\t -- Procesando la opcion " << opc << endl
                     << "\t\t -- " << opciones[opc - 1] << endl
                     << "\t\t -- Opcion " << opc << " procesada" << endl
                     << "\t\t ----------------------------------" << endl
                     << endl;

                esperar();
            }
        }
        else
        {
            mensaje("Opcion Inválida!");
            esperar();
        }
    }
}

void Menu::mensaje(string m)
{
    cout << endl
         << "\t\t" << m << endl;
}

void Menu::saludar()
{
    cls();
    cout << endl
         << endl
         << endl
         << "\t\t\t Ha sido un placer. Hasta la proxima!" << endl
         << endl;
    esperar();
    cls();
    terminar();
}

void Menu::terminar()
{
    exit(0);
}

int Menu::opcionValida(int opc)
{
    return (opc < nroopciones) ? 1 : 0;
    /*
    if (opc < nroopciones)
    {
        return 1;
    }
    else
    {
        return 0;
    }
*/
}

void Menu::esperar()
{
    char input;
    cout << "Press any key to continue..." << endl;
    cin.get(input);
}

void Menu::procesar(int opcion)
{
    cls();
    cout << endl
         << endl
         << "\t\t ----------------------------------" << endl
         << "\t\t -- Procesando la opcion " << opcion << endl
         << "\t\t -- " << opciones[opcion - 1] << endl
         << "\t\t -- Opcion " << opcion << " procesada" << endl
         << "\t\t ----------------------------------" << endl
         << endl;

    esperar();
}

void Menu::titulo()
{
    cout << endl
         << endl
         << "\t\t ----------------------------------" << endl
         << "\t\t -- Opciones del Menú" << endl
         << "\t\t ----------------------------------" << endl;
}