/*
    @author its_anaehm
    @date 07-2020
    @version 0.1
*/

/*
Programa que lea varios números enteros entre -100 y 100; al final debe escribir la suma de los números pares y el promedio de los números impares que se leyeron.
*/

#include <iostream>
using namespace std;

int main(){
    int n=0, sum=0, prom=0, cont=0, 
    float tot_prom=0;
    char elec;
    do{
        cout<<"Ingrese un número entero entre -100 y 100: ";
        cin>>n;
        if(n>(-100) && n<100){
            if((n%2)==0){
                sum += n;
            }else{
                prom+= n;
                cont++;
            }
        }else{
            cout<<"El número ingresado no está en el rango especificado."<<endl;
        }
        cout<<"¿Desea Ingresar otro número? [s/n]: ";
        cin>>elec;
    }while (elec=='s' || elec=='S');
    tot_prom = prom/cont;
    cout<<"La suma de los números pares es: "<<sum<<endl;
    cout<<"El promedio de los números impares es: "<<tot_prom<<endl;
}