#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "Libreria.h"
using namespace std;

class Constante{
private:
	int id;
	string nombre;
public:
	Constante(int id = 0, const string &nombre = "");
	int getId()const;
	const string &getNombre()const;
	void setId(int id);
	void setNombre(const string &nombre);
	//Este metodo sobrecarga el operador << (overloading <<)
	friend ostream &operator <<(ostream &os, const Constante &constante);
};

