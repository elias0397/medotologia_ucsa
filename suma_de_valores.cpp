//1) Escribe un programa que permita ingresar dos némeros e imprime la suma.
#include<stdlib.h>		//libreria	
#include<iostream>		//libreria
using namespace std;	//namespace	
int main()				//
{
	int n1, n2, suma; 				//declaracion de variables	
	cout<< ("ingresar un numero:" );//impresion "ingresar un numero"
	cin>>n1;						//guardar valor de la variale	
	cout<<("ingresar otro numero:"); //impresion "ingresar otro numero"
	cin>>n2;						//guardar valor de la variable
	suma= n1+n2;					//efectuacion de la operacion	
	cout<<"el resultado de la suma es:"<<" "<<suma;//impresion
	return 0;
}
