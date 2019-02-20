//2) Calcular el perimetro de un triangulo equilatero, cuyas dimensiones son ingresadas por el usuario.
#include<stdlib.h>		//libreria	
#include<iostream>		//libreria
using namespace std;	//namespace	
int main()				//
{		
	int l, perim;	//declaracion de variable
	cout<< "ingresar un lado del triangulo equilatero:";
	cin>> l;										
	perim= l*3;					
	cout<<"el perimetro es:"<<" "<<perim;
	return 0;
}
