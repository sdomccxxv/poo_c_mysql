#pragma once
#include "Persona.h"
#include <iostream>
#include <mysql.h>
#include "db_conexion.h"

using namespace std;

class Cliente :
    public Persona
{
		// atributos
	private: string nit;
		   // constructor
	public:
		Cliente() {
		}
		Cliente(string nom, string ape, string dir, int tel, string fn, string n) : Persona(nom, ape, dir, tel, fn) {
			nit = n;
		}
		//metodos
		//set (modificar)
		void setNit(string n) { nit = n; }
		void setNombres(string nom) { nombres = nom; }
		void setApellidos(string ape) { apellidos = ape; }
		void setDireccion(string dir) { direccion = dir; }
		void setTelefono(int tel) { telefono = tel; }
		//get (mostrar)
		string getNit() { return nit; }
		string getNombres() { return nombres; }
		string getApellidos() { return apellidos; }
		string getDireccion() { return direccion; }
		int getTelefono() { return telefono; }

		void leer() {
			db_conexion cn = db_conexion();
			int q_estado;
			MYSQL_ROW fila;
			MYSQL_RES* resultado;

			cn.abrir_conexion();

			if (cn.getConectar()) {
				string consulta = "SELECT * FROM clientes";
				const char* c = consulta.c_str();
				q_estado = mysql_query(cn.getConectar(), c);

				if (!q_estado) {
					resultado = mysql_store_result(cn.getConectar());
					while (fila = mysql_fetch_row(resultado)) {
						cout << fila[0] << " - " << fila[1] << " - " << fila[2] << " - " << fila[3] << " - " << fila[4] << " - " << fila[5] << " - " << fila[6] << endl;
					}
				}
				else {
					cout << "Error al consultar..." << endl;
				}
			}
			else {
				cout << "Conexion fallida..." << endl;
			}
			cn.cerrar_conexion();
		}
};

