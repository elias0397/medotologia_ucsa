//4) Calcular el perimetro del rectangulo, cuyas dimensiones son ingresadas por el usuario.
#include<stdlib.h>		//libreria	
#include<iostream>		//libreria
using namespace std;	//namespace	
int main()	
{
int b, l, perim;
cout<<"ingresar base del rectangulo:";
cin>> b;
cout<<"ingresar lado del rectangulo";
cin>> l;
perim= 2*(l+b);
cout<<"el perimetro es"<<" "<<perim;
return 0;
}
