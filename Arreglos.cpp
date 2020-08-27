/*
    @author its_anaehm
    @date 07-2020
    @version 0.1
*/

/*
En el siguiente programa usted debe ingresar los elementos de un arreglo y posteriormente seleccionar una opción (ingresando el número correspondiente) que represente la operación que desea realizar con los elementos del arreglo unidimencional..
*/

#include <iostream>

using namespace std;

int main (){
    char respuesta;
    int suma=0, resta=0, mult=1, a=0, elementos=0;
    double prom=0;
    cout<<"\n********* Bienvenido **********"<<endl;
    cout<<"\nEn el siguiente programa usted debe ingresar los elementos de un arreglo y posteriormente seleccionar una opción (ingresando el número correspondiente) que represente la operación que desea realizar con los elementos del arreglo unidimencional..\n"<<endl;
    
    cout<<"\n¿Cuantos elementos desea ingresar?"<<endl;
    cin>>elementos;
    
    int array[elementos];

    cout<<"Ingrese los elementos del arreglo:"<<endl;
    for(int i=0; i<elementos; i++){
        cin>>array[i];
    }

    cout<<"\nMenú: \n"<<endl;
    cout<<"1. Sumar los elementos del arreglo."<<endl;
    cout<<"2. Restar los elementos del arreglo."<<endl;
    cout<<"3. Multiplicar los elementos del arreglo."<<endl;
    cout<<"4. Calcular el promerido de los elementos del arreglo."<<endl;
    cin>>a;
    
    switch (a){
    case 1:
        for(int j=0; j<elementos; j++){
            suma += array[j];
        }
        cout<<"\nLa suma de los elementos del arreglo es de: "<<suma<<endl;
        break;

    case 2:
        for(int j=0; j<elementos; j++){
            resta = resta - array[j];
        }
        cout<<"\nLa resta de los elementos del arreglo es de: "<<resta<<endl;
        break;

    case 3:
        for(int j=0; j<elementos; j++){
            mult *= array[j];
        }
        cout<<"\nLa multiplicación de los elementos del arreglo es de: "<<mult<<endl;
        break;

    case 4:
        for(int j=0; j<elementos; j++){
            suma += array[j];
            prom = suma/elementos;
        }
        cout<<"\nEl promedio de los elementos del arreglo es de: "<<prom<<endl;
        break;

    default:
        cout<<"El elemento que ingresó no es válido.";
        break;
    }
    
}