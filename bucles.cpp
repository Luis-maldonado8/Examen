//programa: bucle
//autor: Luis Maldonado
//fecha: 25-11-2023
//archivo: bucles.cpp
#include <iostream>
using namespace std;
int main() 
{
    int numero;
cout << "Digite un número necesario para ver tabla de multiplicar: ";
  cin >> numero;
  cout << "Tabla de multiplicar de " << numero << ":" << endl;
  for (int i = 1; i <= 10; ++i) {
  cout << numero << " x " << i << " = " << (numero * i) << endl;
		 }
  return 0;
}
