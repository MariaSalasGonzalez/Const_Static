#include "Constante.h"
#include "Caja.h"

//Primer_Main
//int main() {
//	Constante objConst1;
//	objConst1.setId(1);
//	objConst1.setNombre(" Manuel ");
//	cout << objConst1 << endl;
//	return 0;
//}

//Segundo_Main
int Caja::contador = 0;
int main() {
	cout << "Iniciemos, cantidad de cajas:" << Caja::contador << endl;
	Caja caja1(5, 5, 5);
	Caja caja2(8, 8, 8);
	cout << "Al finalizar, cantidad de cajas:" << Caja::getContador() << endl;
	return 0;
}