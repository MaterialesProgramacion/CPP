/*
    @author its_anaehm
    @date 08-2020
    @version 0.1
*/

/*
Problema: 10 equipos de la liga inter-barrial identificados con los números 1,2,3,...,10 participaron en un campeonato de fútbol en la modalidad todos v todos. Los goles anotados se registrarón en una tabla. Crear un programa que despliegue en pantalla el cuadro de goles generado de forma aleatoria entre valores que esten entre 0 y 7. Ademas de almacenar en otro arreglo unidimencional el total de los goles de cada equipo y retornar el número del equipo que más goles anotó.
*/

#include <iostream>
#include <math.h>
#include <iomanip>//para le setw() cout<<setw(20)
#include <stdlib.h>
#include <time.h>

using namespace std;

void tabla();

int main(){
    srand(time(NULL));
    int suma=0;
    int arrayE[10];
    int arrayF[10];
    int f, c, i, j;
    int tabla[11][11];
    for (f=0; f<=11; f++){
        for (c=0; c<=11; c++){
            if(f == c ){
                tabla[f][c]=0;
            }else{
                if (f==0){
                    tabla[f][c]=c;
                }else{
                    if (c==0){
                        tabla[f][c]=f;
                    }else{
                        tabla[f][c]=rand()%7;
                    }
                }
            }
        }
    }

    for(f=0;f<11;f++) {
        for(c=0;c<11;c++){
            cout<<setw(4)<<tabla[f][c];
        }
    cout<<endl;
    }

    for (j=1;j<11;j++){
        suma=0;
        for (i=1;i<11;i++){
            suma += tabla[i][j];
        }
        arrayE[j-1] = suma;
    }

    for (int a=0; a<10;a++){
        cout<<arrayE[a]<<" ";
    }
}