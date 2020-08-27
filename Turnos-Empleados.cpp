/*
    @author its_anaehm
    @date 08-2020
    @version 0.1
*/

/*
Una fábrica de autos tiene varios empleados trabajando en dos turnos: por la mañana 0 y por la tarde 1. De acuerdo al número de horas diarias trabajadas, se desea calcular el sueldo semanal
devengado por cada empleado si se sabe que todos trabajan 5 días a la semana y bajo las siguientes tarifas: 
* L.70.00 por hora, si el turno es matutino y
* L.90.00 por hora, si trabaja en la jornada vespertina.
Además, si se pasan de las 40 horas semanales, las horas se consideran extras y se pagan a razón de: 
* 2 veces la hora ordinaria para el turno matutino y
* 3 veces la hora ordinaria para el turno vespertino.
*/

#include <iostream>
using namespace std;

int main(){
    char t;
    int h=0, pago=0, h_ext=0, h_lab;
    cout<<"Ingrese el turno en el cual lavoro: "<<endl;
    cin>>t;
    cout<<"Ingrese la cantidad de horas de trabajo: "<<endl;
    cin>>h;
    h_lab=h;
    if(t=='A'){
        if(h<=40 && h>0){
            pago = h*70;
        }else{
            if(h>40){
                h_ext = h-40;
                h = h - h_ext;
                pago= (h*70)+(h_ext*70*2);
            }else{
                cout<<"*************Error. Valor Invalido.";
            }
        }
    }else{
        if (t=='B') {
            if(h<=40 && h>0){
                pago = h*90;
            }else{
                if(h>40){
                    h_ext = h-40;
                    h = h - h_ext;
                    pago= (h*90)+(h_ext*90*3);
                }else{
                    cout<<"*************Error. Valor Invalido.";
                }
            }
        }else{
            cout<<"*************Error. Variable Incorrecta.";
        }    
    }
    cout<<endl;
    cout<<"El empleado(a)"<<endl;
    cout<<"Lavoró en el turno "<<t<<endl;
    cout<<"Un total de: "<<h_lab<<" horas."<<endl;
    cout<<"De las cuales "<<h_ext<<" son horas extras. "<<endl;
    cout<<"El total de su sueldo es de: "<<pago<<endl;
}