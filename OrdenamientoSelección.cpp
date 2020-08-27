/*
    @author its_anaehm
    @date 07-2020
    @version 0.1
*/

/*
Problema: Escriba un programa en C++, que utilicé arreglos y funciones para realizar la ordenación de un vector de una dimensión usando el método de “Ordenación de selección”. Una ordenación de selección recorre un arreglo buscando el elemento más pequeño del mismo. Cuando encuentra el más pequeño, es intercambiado con el primer elemento del arreglo. El proceso a continuación se repite para el subarreglo que empieza con el segundo elemento del arreglo. Cada pasada del arreglo resulta en un elemento colocado en su posición correcta. Esta ordenación requiere de capacidades de procesamiento similares a la ordenación de tipo burbuja para un arreglo de n elementos, deberán de hacerse n-1 pasada, y para cada subarreglo, se harán n-1 comparaciones para encontrar el valor más pequeño. Cuando el subarreglo bajo proceso contenga un solo elemento, el arreglo habrá quedado terminado y ordenado.
*/

#include <iostream>

using namespace std;

void ordenamiento(int[]);

int main(){
    int array[7];
    
    cout<<"Ingrese 7 números enteros: "<<endl;
    for(int i=0; i<7; i++){
        cin>>array[i];
    }

    ordenamiento(array);

}

void ordenamiento(int array[]){
    int aux, min;
    for (int j=0; j<7; j++){
        min=j;
        for (int k=j; k<7; k++){
            if (array[k] < array[min]){
                min=k;
            }
        }
        aux= array[j];
        array[j] = array[min];
        array[min] = aux;
    }

    cout<<"El arreglo ordenado es: "<<endl;
    for (int m=0; m<7; m++){
        cout<<array[m]<<" ";
    }

    cout<<endl;
}