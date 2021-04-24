// poo_c_mysql.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include "Cliente.h"

using namespace std;

int main()
{
    string nombres, apellidos, direccion, fecha_nac, nit;
    int telefono;

    cout << "Ingrese el NIT: ";
    cin >> nit;

    cout << "Ingrese los nombres del cliente: ";
    getline(cin, nombres);
    cin.ignore();

    cout << "Ingrese los apellidos del cliente: ";
    getline(cin, apellidos);
    cin.ignore();

    cout << "Ingrese la direccion del cliente: ";
    getline(cin, direccion);
    cin.ignore();

    cout << "Ingrese el telefono del cliente: ";
    cin >> telefono;
    cin.ignore();

    cout << "Ingrese la fecha de nacimiento del cliente (año-mes-dia): ";
    cin >> fecha_nac;

    Cliente c = Cliente(nombres, apellidos, direccion, telefono, fecha_nac, nit);
    
    c.crear();
    c.leer();
}

