/*
Crear un programa que mediante un ciclo for permita ingresar cinco voltajes y calcule su promedio, haga esto mediante una función llamada voltaje, que no recibe ningún parámetro y retorna el promedio de dichos voltajes que sería un dato tipo float, es decir que la lectura de los voltajes tiene que hacerse dentro de la función, al igual que el cálculo del promedio. Luego en la función main haga la validación de que si el promedio que retorna la función voltaje es mayor a 220 que muestre el mensaje "ALTO VOLTAJE" y de lo contrario muestre el mensaje "VOLTAJE CORRECTO".
*/

#include <iostream>

float voltaje();

using namespace std;

int main(){
    float respuesta=0;
    cout<<"Ingrese los cinco voltajes"<<endl;
    respuesta=voltaje();
    if (respuesta > 220){
        cout<<"ALTO VOLTAJE"<<endl;
    }else{
        if (respuesta <= 220){
            cout<<"VOLTAJE CORRECTO"<<endl;
        }
    }
    
    return 0;
}

float voltaje(){

    float volt[5];
    float dato=0, suma=0, promedio=0;

    for (int i=0; i<5; i++){
        cin>>dato;
        volt[i] = dato;
        suma = suma + volt[i];
    }

    promedio = suma/5;

    return promedio;
}