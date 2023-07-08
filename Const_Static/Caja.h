#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Caja{
private:
	float largo;
	float ancho;
	float alto;
public:
	//static se trabaja en el bloque publico
	//este me retornala info guardada en contador
	static int contador;
	Caja(float = 0, float = 0, float = 0);
	static int getContador();
	float getLargo()const;
	float getAncho()const;
	float getAlto()const;
	void setLargo(float);
	void setAncho(float);
	void setAlto(float);
	void setContador(int);
	~Caja();
};

