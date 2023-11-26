//programa: Arreglos
//autor: Luis Maldonado
//fecha: 25-11-2023
//archivo: arreglos.cpp
#include<iostream>
using namespace std;
int main() 
{
  int arreglo[5], d=0;
  for (int l=0; l<5; ++l) {
  cout<<"Digite el valor "<<l+1<<":";
  cin>> arreglo[l];
  }

	  for(int l=0; l <5; ++l){
  d += arreglo[l];
  }
  cout << "Resultado de la suma de arreglos es: " <<d<<endl;
	return 0;
}
