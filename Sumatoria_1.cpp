/*
    @author its_anaehm
    @date 07-2020
    @version 0.1
*/

/*
Programa que calcula la sumatoria desde un i=x ingresado por el usuario, hasta un n generado de forma aleatoria o introducido por el usuario (Esto dependiendo de su elección en el menú de opciones). El n-ésimo término está definido por: x^i / i!
*/

#include<iostream>
#include <ctime>
#include <math.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

long double sumatoria(double x , size_t v);
int Aleatorio(int x, int y);
unsigned long long factorial(size_t n);


int main() {
    double x=0;
    size_t opc=0 , valor=0;
    cout << "1. Aleatorio" << endl
        << "2. Determinista" << endl;
    while( opc < 1 || opc > 2 ) {
        cin>>opc;
    }
    if( opc == 1){
        valor = Aleatorio(-3, 17);
    }else{
        cin>>valor;
    }
    cin>>x;
    cout<<setprecision(16)<<sumatoria(x,valor);
    return 0;
}

int Aleatorio(int x, int y){
    /*La definicion de la funcion aleatorio que genera de forma aleatoria la cota
    superior de la sumatoria, que debe estar entre 3 y 17 inclusive.*/
    srand(time(NULL));
    int  aleatorio=0;
    aleatorio = rand() % (y - x + 1) + x;
    return aleatorio;
}

long double sumatoria(double x , size_t v){
    /*Escriba la definicion de la funcion sumatoria cuyo objetivo es realizarla la sumatoria pedida.*/
    long double sum=0;
    if(x==0){
        return 1;
    }else{
        for(int i=0; i<=v; i++){
            sum += (pow(x,i))/factorial(i);	
        }
        return sum;
    }
}

unsigned long long factorial(size_t n){
    /*Escriba la definicion de la funcion factorial que calcula de forma recursiva el factorial de su parametro*/
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