/*
    @author its_anaehm
    @date 07-2020
    @version 0.1
*/

/*En una escuela de 600 estudiantes se realizará la elección del Presidente del Gobierno Escolar, para lo cual los estudiantes votarán de la siguiente forma: 1 o M por María, 2 o L por Luis, 3 o T por Tania y 4 o J por de Juan. Escriba un programa determine el nombre del ganador y el número de votos nulos. Nota: no necesariamente votan todos los estudiantes y preferentemente use Repetir/Hasta Que.*/

#include <iostream>
using namespace std;

int main(){
    int maria=0, luis=0, tania=0, juan=0, nulo=0;
    char voto;
    char eleccion;
    
    do{
        cout<<"*********************************************************"<<endl;
        cout<<"Bienvenido al menú para las elecciónes estudiantiles."<<endl;
        cout<<"*********************************************************"<<endl;
        cout<<"Los candidatos a la presidencia del Gobierno Estudiantil son:"<<endl;
        cout<<"1. Maria"<<endl;
        cout<<"2. Luis"<<endl;
        cout<<"3. Tania"<<endl;
        cout<<"4. Juan"<<endl<<endl;
        cout<<"Ingrese el número o la inicial del Nombre de la persona por la que desea votar: "<<endl;
        cin>>voto;
        switch (voto)
        {
        case '1':
            maria++;
            break;
        
        case 'M':
            maria++;
            break;
        
        case '2':
            luis++;
            break;

        case 'L':
            luis++;
            break;

        case '3':
            tania++;
            break;

        case 'T':
            tania++;
            break;

        case '4':
            juan++;
            break; 

        case 'J':
            juan++;
            break; 

        default:
            cout<<"El voto es nulo.";
            nulo++;
            break;
        }
        cout<<"¿Desea ingresar un nuevo voto? [s/n]"<<endl;
        cin>>eleccion;
    }while(eleccion=='s'||eleccion=='S');
    
    if (maria>luis && maria>tania && maria>juan) {
        cout<<"Maria es la ganadora"<<endl;
    }else{
        if (luis>maria && luis>tania && luis>juan) {
            cout<<"Luis es el ganador"<<endl;
        }else{
            if (tania>maria && tania>luis && tania>juan) {
                cout<<"Tania es la ganadora"<<endl;
            }else{
                if (juan>maria && juan>luis && juan>tania) {
                    cout<<"Juan es el ganador"<<endl;
                }
            }
        }
    }
    cout<<"La cantidad de votos nulos fue de: "<<nulo<<endl;

    return 0;
}