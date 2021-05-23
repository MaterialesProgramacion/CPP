/*
	Desarrolle la clase Funcionradical la cual representa a las funciones radicales y tiene las siguientes 
	funciones:
		. Funcionradical()
		. ~Funcionradical()
		. Dom(): despliega en pantalla el dominio de la funcion.
		. Solucion(): despliega en pantalla la solucion de f(x)=0
	
	Realizado por: HACKZEL NAHUN DELCID FUGON
	Asignación: Foro 4C
	Fecha: 18/04/2021
*/

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class Funcionradical
{
	private:
		int a, b, c;
	public: 
		Funcionradical();
		setFuncionradical(int, int, int);
		void Dom(int, int, int);
		void Solucion(int, int, int);
};

Funcionradical::Funcionradical()
{
	a=0;
	b=0;
	c=0;
}

Funcionradical::setFuncionradical(int a, int b, int c)
{
	this->a=a;
	this->b=b;
	this->c=c;
}

void Funcionradical::Dom(int a, int b, int c)
{
	float dominio=0;
	
	dominio=-b/a;
	
	cout<<"El dominio es todos los numeros reales positivos mayores que --> "<<dominio<<endl;
}

void Funcionradical::Solucion(int a, int b, int c)
{
	float respuesta1=0;
	float respuesta2=0;
	float respuesta3=0;
	
	respuesta1=pow(-c,2);
	respuesta2=respuesta1-b;
	respuesta3=sqrt(a*respuesta2+b)-c;
	
	cout<<"La solucion de la funcion radical es --> "<<respuesta3<<endl;
}

int main()
{
	int a=0,b=0,c=0;
	cout<<"Valores de a, b, c --> "<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	
	Funcionradical Rad;
	Rad.Dom(a,b,c);
	Rad.Solucion(a,b,c);
	
	system("pause");
	return 0;
}





