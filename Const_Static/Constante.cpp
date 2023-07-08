#include "Constante.h"

Constante::Constante(int id, const string &nombre):id(id),nombre(nombre) {
}

int Constante::getId()const {
	return id;
}

//Valor que retorna una funcion
//Aplicado tambien al metodo, esto obliga a
//getNombre(), a no poder modificar a 
//Ninguna cart privada interna de la clase
const string &Constante::getNombre()const {
	return nombre;
}

//Direccion memoria RAM
//Estamos trabajando la variable original
void Constante::setNombre(const string &nombre) {
	this->nombre = nombre;
}

void Constante::setId(int id) {
	this->id = id;
}

ostream &operator<<(ostream &os, const Constante &constante) {
	os << "Id: " << constante.id << "Nombre: " << constante.nombre;
	return os;
}
