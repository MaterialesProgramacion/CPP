/*
    @author its_anaehm
    @date 07-2020
    @version 0.1
*/

/*
Programa que calcula la sumatoria desde un i=x ingresado por el usuario, hasta un n generado de forma aleatoria o introducido por el usuario (Esto dependiendo de su elección en el menú de opciones). El n-ésimo término está definido por: (-1^i)(x^(2-*i)) / (2*i)!
*/

#include<iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

size_t Aleatorio(void);
long double sumatoria(double , size_t);
unsigned long long factorial(size_t);

int main() {
    double x;
    size_t opc , valor;
    cout<< "1. Aleatorio" <<endl;
    cout<< "2. Determinista" <<endl;
    while(opc < 1|| opc > 2) {
        cin>>opc;
    }
    if( opc == 1){
        valor=Aleatorio();
    }else{
    cin>>valor;
    }
    cin>>x;
    cout<<setprecision(16)<<sumatoria(x,valor);
    return 0;
}

size_t Aleatorio(void) {
	srand(time(0));
	size_t V= 5+rand()%(15);

}

long double sumatoria(double x , size_t v) {
    long double sum=0;
    if(x==0){
        return 1;
    }else{
	for(int i=0; i<=v; i++){
		sum=sum+(pow(-1,i))*(pow(x,2*i))/factorial(2*i);	
	}
	return sum;
}
   
}
unsigned long long factorial(size_t n){
	if(n==0||n==1){
        return 1;
    }else{
        if (n<0){
            return 0;
        }else{
            return n*factorial(n-1);
        }
    }
}
