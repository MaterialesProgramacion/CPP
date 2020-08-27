/*
    @author its_anaehm
    @date 08-2020
    @version 0.1
*/

#include <iostream>
#include <string>
/*
* Realizar un Programa que permita al usuario ingresar una palabra y que se verfíque si ésta es un palíndromo (Una palabra que se lee de la misma manera al derecho y al revés) Utilizando cadenas y funciones.
*/
using namespace std;

void palindromo(string);

int main() {
    string texto;

    cout << "Ingrese la palabra a evaluar: ";
    getline(cin >> ws, texto);

    palindromo(texto);

    return 0;
}

void palindromo(string texto){

    int aux = 0, igual = 0;

    for(int ind = texto.length() - 1; ind >= 0; ind--){
        if(texto[ind] == texto[aux]){
            igual++;
        }
        aux++;
    }

    if(texto.length() == igual){
        cout<<"La palabra ingresada es palindromo."<<endl;
    }else{
        cout<<"La palabra ingresada no es palindromo."<<endl;
    }
}