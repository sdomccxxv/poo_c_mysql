// poo_c_mysql.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include "Cliente.h"

using namespace std;

void crear();
void leer();
void update();
void eliminar();

int main()
{
    //crear();
    update();
    //eliminar();
    leer();

    system("pause");
    return 0;
}

void crear() {
    string nombres, apellidos, direccion, fecha_nac, nit;
    int telefono;

    cout << "Ingrese el NIT: ";
    getline(cin, nit);

    cout << "Ingrese los nombres del cliente: ";
    getline(cin, nombres);

    cout << "Ingrese los apellidos del cliente: ";
    getline(cin, apellidos);

    cout << "Ingrese la direccion del cliente: ";
    getline(cin, direccion);

    cout << "Ingrese el telefono del cliente: ";
    cin >> telefono;
    cin.ignore();

    cout << "Ingrese la fecha de nacimiento del cliente (anio-mes-dia): ";
    cin >> fecha_nac;

    Cliente c = Cliente(nombres, apellidos, direccion, telefono, fecha_nac, nit);

    c.crear();
    
}

void leer() {

    Cliente c = Cliente();

    c.leer();
}

void update() {
    string nombres, apellidos, direccion, fecha_nac, nit;
    int telefono, idcliente;
    
    leer();

    cout << "Ingrese el id del cliente que desea actualizar: ";
    cin >> idcliente;

    cout << "-----------------------------------------------------------"<<endl;
    cin.ignore();

    cout << "Ingrese el nuevo NIT: ";
    getline(cin, nit);

    cout << "Ingrese los nuevos nombres del cliente: ";
    getline(cin, nombres);

    cout << "Ingrese los nuevos apellidos del cliente: ";
    getline(cin, apellidos);

    cout << "Ingrese la nueva direccion del cliente: ";
    getline(cin, direccion);

    cout << "Ingrese el nuevo telefono del cliente: ";
    cin >> telefono;
    cin.ignore();

    cout << "Ingrese la nueva fecha de nacimiento del cliente (anio-mes-dia): ";
    cin >> fecha_nac;

    Cliente c = Cliente(nombres, apellidos, direccion, telefono, fecha_nac, nit);

    c.actualizar(idcliente);
}

void eliminar() {

    leer();

    Cliente c = Cliente();

    c.eliminar();

}

