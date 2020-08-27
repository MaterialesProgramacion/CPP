/*
    @author its_anaehm
    @date 07-2020
    @version 0.1
*/

/*Se leen varios números entre 1 y 9, ambos inclusive, que no tienen que estar en orden y que pueden o no estar repetidos. Calcule e imprima:
    * la cantidad de números menores que o iguales a 7;
    * la cantidad de números mayores que 7.
Al final se lee el número –1 para indicar que no hay más números por leer.*/

#include <iostream>
using namespace std;

int main(){
    
    int num=0, menores=0, mayores=0;
    char eleccion;
    do
    {
        cout<<"Ingrese un número entre 1 - 9: "<<endl;
        cin>>num;
        if (num<=7 && num>0) {
            menores++;
        }else{
            if(num>7 && num<=9){
                mayores++;
            }else{
                cout<<"El número ingresado no cumple con las especificaciones"<<endl;
            }
        }
        cout<<"¿Desea ingresar un nuevo número? [s/n]"<<endl;
        cin>>eleccion;
    } while (eleccion=='s'||eleccion=='S');
    
    cout<<"La cantidad de valores ingresados menores o iguales a 7 son: "<<menores<<endl;
    cout<<"La cantidad de valores ingresados mayores a 7 son: "<<mayores<<endl;
    
}

    