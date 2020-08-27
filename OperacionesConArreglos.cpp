/*
    @author its_anaehm
    @date 07-2020
    @version 0.1
*/

/*
En el siguiente programa se presentan varias de las posibles formas de operar los elementos de un arreglo unidimensional.
- El usuario deberá ingresar la cantidad y los elementos que desee que el arreglo contenga.
- Posteriormente se le mostrará en pantalla un menú con las distintas opciones de los procedimientos matemáticos que el programa puede realizar con los elementos del arreglo.
- Una vez el usuario haya seleccionado una opción se desplegará en pantalla el resultado de la misma.
*/

#include <iostream>

using namespace std;
//funcion principal
int main(){
    int elementos=0, a=0, suma=0, resta=0, multiplicacion=1;
    cout<<"¿Cuantos elementos desea ingresar?"<<endl;
    cin>>elementos;

    int array[elementos];
    cout<<"Ingrese los elementos del arreglo: "<<endl;
    for (int i=0; i<elementos; i++){
        cin>>array[i];
    }

    cout<<"\nMenú:"<<endl;
    cout<<"1. Sumar los elementos del arreglo."<<endl;
    cout<<"2. Restar los elementos del arreglo."<<endl;
    cout<<"3. Multiplicar los elementos del arreglo."<<endl;
    cin>>a;

    switch (a)
    {
    case 1:
        for (int j=0; j<elementos; j++){
            suma = suma + array[j];
        }
        cout<<"La suma de los elementos del arreglo es: "<<suma<<endl;
        break;

    case 2:
        for (int j=0; j<elementos; j++){
            resta = resta - array[j];
        }
        cout<<"La resta de los elementos del arreglo es: "<<resta<<endl;
        break;

    case 3:
        for (int j=0; j<elementos; j++){
            multiplicacion = multiplicacion * array[j];
        }
        cout<<"La multiplicacion de los elementos del arreglo es: "<<multiplicacion<<endl;
        break;
    
    default:
        cout<<"Ingreso un valor incorrecto.";
        break;
    }


}