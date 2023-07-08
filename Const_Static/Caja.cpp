#include "Caja.h"
Caja::Caja(float largo, float ancho, float alto):largo(largo), ancho(ancho),alto(alto){
	contador++;
	cout << "Constructor llamado, numero de cajas en: " << getContador() << endl;
}

int Caja::getContador(){
	return contador;
}

float Caja::getLargo()const {
	return largo;
}

float Caja::getAncho()const {
	return ancho;
}

float Caja::getAlto()const {
	return alto;
}

void Caja::setLargo(float la) {
	Caja::largo = la;
}

void Caja::setAncho(float an) {
	Caja::ancho = an;
}

void Caja::setAlto(float al) {
	Caja::alto = al;
}

void Caja::setContador(int con) {
	Caja::contador = con;
}

Caja::~Caja() {
	contador--;
	cout << "Destructor llamado, numero de cajas en: " << getContador() << endl;
}