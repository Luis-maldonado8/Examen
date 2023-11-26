//programa: Estructura de control
//autor: Luis Maldonado
//fecha: 25-11-2023
//archivo: estructurecontrol.cpp
#include <iostream>
using namespace std;
int main() 
{
	int numero;
	cout << "Ingrese un número: ";
	cin >> numero;
	if (numero > 0) {
	cout << "El número ingresado es positivo." << endl;
        } else if (numero < 0) {
       cout << "El número ingresado es negativo." << endl;             } else {
       cout << "El número ingresado es cero." << endl;
       }
       return 0;
}
