/*
    @author its_anaehm
    @date 06-2020
    @version 0.1
*/

//Prrograma que calcula el facturial de un número cualquiera ingresado por el usuario.

#include <iostream>
using namespace std;
int Factorial(int);

int main(){
    int n;
    cout<<"Introduzca el número al cual le desea calcular su factorial: "<<endl;
    cin>>n;
    cout<<"El factorial de "<<n<<" es "<<Factorial(n)<<endl;
}

int Factorial(int n){
    if (n==0 || n==1){
        return 1;
    }else{
        return n*Factorial(n-1);
    }
}