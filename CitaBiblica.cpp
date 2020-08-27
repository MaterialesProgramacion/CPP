/*
    @author its_anaehm
    @date 08-2020
    @version 0.1
*/

/*
Programa que dado una cadena que contiene un verso biblico utilicé una función para encontrar una subcadena ingresada por el ususario y muestre en pantalla una cita bíblica de la forma: "Salmos 18: en el confiare", donde la cadena "Salmos 18: " es el versículo y la cadena "en el confiare" es la frase seleccionada, además es la unica entrada del programa. Se pide realizar el procedimiento siguiente:

1) Crear una función que verifica si la frase ingresada está contenida en el verso bíblico. De no cumplirse, entonces se debe mostrar como salida el mensaje "Frase no valida".
2) La función utilizada para crear la cita bíblica deberá tener un prototipo de  la forma:
char  *CrearCita (char  Verso[],  char  *AptrFrase);

Salmos 18:
Te amo, oh Jehova, fortaleza mia. Roca mia y castillo mio, y mi libertador; Dios mio, fortaleza mia, en el confiare.
*/
#include <iostream>
//include <conio.h>
#include <string.h>
#include <string> 

using namespace std;
// Prototipo de funciones
char *CrearCita (char Verso[], char *AptrFrase, char *cad);


int main() {
    // ****** Delaramos las cadenas *******
    char Verso[] = "Te amo, oh Jehova, fortaleza mia. Roca mia y castillo mio, y mi libertador; Dios mio, fortaleza mia, en el confiare";
    char Versiculo[] = "Salmo 18: ";
    char texto[100];
    char cad[50];
    
    // Solicitar al usuario ingresar su frase favorita dentro del texto 'Verso'
    cout << "Mi frase favorita del verso es: " <<endl;
    cin.getline(texto, 100);
    
    if (strstr(Verso, texto) != NULL) {
        CrearCita(Versiculo, texto, cad);
        int longitud=sizeof(cad)/sizeof(*cad);
        for(int i=0; i<longitud; i++){
            cout<<cad[i];
        }
        cout<<endl;
    } else {
        cout<<"Frase no valida"<<endl;
    }
return 0;
}

// Definición de las funciones
char *CrearCita (char Versiculo[], char *texto3, char *cad) { 
    int i=0,j=0;
    do{
        cad[i]= Versiculo[i];
        i++;
    }while(Versiculo[i]!='\0');

    do{
        cad[i]=texto3[j];
        i++;
        j++;
    }while(texto3[j-1]!='\0');
    //strcpy(Versiculo, texto3);
    return cad;
}