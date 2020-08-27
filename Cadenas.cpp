/*
    @author its_anaehm
    @date 10-08-2020
    @version 0.1
*/
/*
Programa en C++ que lea un parrafo desde el teclado y lo imprima con las siguientes modificaciones:
1) Las letras iniciales y finales de cada palabra den ser impresas en minúscula
2) Las letras intermedias de cada palabra deben ser impresas en mayuscula 
3) Si una palabra contiene solo un caracter entonces se va a imprimir sin modificación
4) Los caracteres que no forman parte del abecedario se van a imprimir sin modificación.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <ctype.h>

using namespace std;
void primeraLetra(string);

int main() {

    string texto;

    cout<<"Introduzca un parrafo: "<<endl;
    getline(cin, texto);
    
    primeraLetra(texto);

    return 0;
}

void primeraLetra(string texto){
    int a=0;
    int relleno;
    a = texto.length();

    for(relleno=0; texto[relleno]!='\0' ; relleno++) {
        texto[0] = tolower(texto[0]);
        if(texto[relleno] >= 'a' && texto[relleno] <= 'z'){
            texto[relleno] = toupper(texto[relleno]);
        }
        if(texto[relleno-1]==' ' || texto[relleno-1]=='\n') {
            texto[relleno] = tolower(texto[relleno]);
        }
        if(texto[relleno-1]==' ' || texto[relleno-1]=='\n') {
            texto[relleno-2] = tolower(texto[relleno-2]);
        }
        texto[a-1] = tolower(texto[a-1]);
    }

    cout<<"\n*************************************************************"<<endl;
    cout<<"\nTexto Modificado:\n"<<endl;
    cout<<"*************************************************************\n"<<endl;
    cout<<texto<<endl;
}
