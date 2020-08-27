/*
? Crear una aplicación lógica de una calculadora matemática con funciones básicas utilizando funciones, arreglos y cadenas en C++.
! Este proyecto plantea el desarrollo de un conjunto de programas que den como resultado la simulación de una calculadora matemática con operaciones básicas (suma, resta, multiplicación, división y raíz cuadrada) y algunas de usó avanzado. 
* Descripción del Problema: Crear una aplicación lógica de una calculadora matematica con funciones básicas presentando una interfaz iterativa, es decir, que le permita al usuario realizar multiples operaciones sin salir de la ejecución del programa. El buen funcionamiento de la calculadora lógica programada en lenguaje C++ será correcto si este programa en conjunto calcula de forma adecuada las operaciones básicas matemáticas siguientes:
? Suma
? Resta
? Multiplicación
? División
? Raíz cuadrada
? Potencia.
* De la misma manera, debe utilizar algunas funciones especiales como las siguientes:
? Función exponencial 
? Logaritmo neperiano
? Redondeo al entero más cercano
? Valor absoluto
* Operaciones estadísticas:
? Mediana
? Moda
? Media armónica
? Media geométrica
? Media aritmética
? Media cuadrática
* Operaciones con conjuntos:
? Combinación 
? Permutación
? Probabilidad Binomial
? Probabilidad Normal
? Probabilidad Geométrica
! Además, el programa debe reconocer las expresiones "pi", y "e"  como los números ∏=3.1416 y e=2.7118, respectivamente y estás variables se puedan usar como argumentos en las funciones definidas en C++.
*/

#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
// include<conio.h>

using namespace std;

struct Complejo{
    float real=0, imaginaria=0;
}n1,n2;

string validacion(std::string num);
float suma(float num1, float num2);
float resta(float num1, float num2);
float multiplicacion(float num1, float num2);
float divicion(float num1, float num2);
float raizcuadrada(int num);
float potencia(float num1, float num2);
float exponencial(float num);
float logNep(float num);
float redondeo(float num);
float vabsoluto(float num);
float mediana(int elementos, float array[]);
float moda(int elementos, float array[]);
float mediaArmonica(int elementos);
float mediaGeometrica(int elementos, float array[]);
float mediaAritmetica(int elementos, float array[]);
float mediaCuadratica(int elementos);
float combinacion(float num1, float num2);
float permutacion(float num1, float num2);
float factorial(float num);
float PBinomial(float num1, float num2);
void datosComplejos();
Complejo sumaCom(Complejo, Complejo);
Complejo producto(Complejo, Complejo);
Complejo conjugado(Complejo);
void mostrarComplejo(Complejo);

int main(){
    int respuesta;
    float elementos=0;
    string num1, num2;
    char resp;
    float num1Float=0, num2Float=0;
    float array[20];
    cout<<"*****************************************************"<<endl;
    cout<<"*                                                   *"<<endl;
    cout<<"*  BIENVENIDO AL MENÚ DE LA CALCULADORA MATEMÁTICA  *"<<endl;
    cout<<"*                                                   *"<<endl;
    cout<<"*****************************************************"<<endl;
    do {
        cout<<"\n¿Que operacion desea realizar? (Ingrese el número correspondiente a la operación que desea ejecutar)"<<endl;
        cout<<"Operaciones Matemáticas (Basicas):"<<endl;
        cout<<"1.- Suma"<<endl;
        cout<<"2.- Resta"<<endl;
        cout<<"3.- Multiplicación"<<endl;
        cout<<"4.- Divición"<<endl;
        cout<<"5.- Raiz Cuadrada"<<endl;
        cout<<"6.- Potencia"<<endl;
        cout<<"Funciones Especiales"<<endl;
        cout<<"7.- Factorial"<<endl;
        cout<<"8.- Exponencial"<<endl;
        cout<<"9.- Logaritmo Neperiano"<<endl;
        cout<<"10.- Redondeo"<<endl;
        cout<<"11.- Valor Absoluto"<<endl;
        cout<<"Operaciones Estadísticas"<<endl;
        cout<<"12.- Mediana"<<endl;
        cout<<"13.- Moda"<<endl;
        cout<<"14.- Media Armónica"<<endl;
        cout<<"15.- Media Geométrica"<<endl;
        cout<<"16.- Media Aritmética"<<endl;
        cout<<"17.- Media Cuadrática"<<endl;
        cout<<"Operaciones con Números Complejos"<<endl;
        cout<<"18.- Suma"<<endl;
        cout<<"19.- Producto"<<endl;
        cout<<"20.- Conjugado"<<endl;
        cout<<"Operaciones con Conjuntos"<<endl;
        cout<<"21.- Combinaciones"<<endl;
        cout<<"22.- Permutaciones\n"<<endl;
        cin>>respuesta;
    switch (respuesta) {
        case 1:
            cout<<"\nIngrese los dos numeros que desea sumar: "<<endl;
            cin>>num1; 
            cin>>num2; 
            num1Float = atof(validacion(num1).c_str());
            num2Float = atof(validacion(num2).c_str());
            cout<<"\nEl resultado de la suma es: "<<endl;
            cout<<suma(num1Float, num2Float)<<endl;
            break;
        case 2:
            cout<<"\nIngrese los dos numeros que desea restar: "<<endl;
            cin>>num1;
            cin>>num2;
            num1Float = atof(validacion(num1).c_str());
            num2Float = atof(validacion(num2).c_str());
            cout<<"\nEl resultado de la resta es: "<<endl;
            cout<<resta(num1Float, num2Float)<<endl;
            break;
        case 3:
            cout<<"\nIngrese los dos numeros que desea multiplicar: "<<endl;
            cin>>num1;
            cin>>num2;
            num1Float = atof(validacion(num1).c_str());
            num2Float = atof(validacion(num2).c_str());
            cout<<"\nEl resultado de la multiplicacion es: "<<endl;
            cout<<multiplicacion(num1Float, num2Float)<<endl;
            break;
        case 4:
            cout<<"\nIngrese el numerador y luego el denominador: "<<endl;
            cin>>num1;
            cin>>num2;
            num1Float = atof(validacion(num1).c_str());
            num2Float = atof(validacion(num2).c_str());
            cout<<"\nEl resultado de la multiplicacion es: "<<endl;
            cout<<divicion(num1Float, num2Float)<<endl;
            break;
        case 5:
            cout<<"Ingrese el valor de la Base:"<<endl;
            cin>>num1;
            num1Float = atof(validacion(num1).c_str());
            cout<<"\nLa raíz de "<<num1<<" es: "<<endl;
            cout<<raizcuadrada(num1Float)<<endl;
            break;
        case 6:
            cout<<"Ingrese el valor de la Base:"<<endl;
            cin>>num1;
            cout<<"Ingrese el valor del exponente:"<<endl;
            cin>>num2;
            num1Float = atof(validacion(num1).c_str());
            num2Float = atof(validacion(num2).c_str());
            cout<<"\nEl resultado de la potencia es: "<<endl;
            cout<<permutacion(num1Float, num2Float)<<endl;
            break;
        case 7:
            cout<<"Ingrese el número para calcular su Factorial:"<<endl;
            cin>>num1;
            num1Float = atof(validacion(num1).c_str());
            cout<<"\nEl resultado de la funcion Factorial es: "<<endl;
            cout<<exponencial(num1Float)<<endl;
            break;
        case 8:
            cout<<"Ingrese el valor del Exponente:"<<endl;
            cin>>num1;
            num1Float = atof(validacion(num1).c_str());
            cout<<"\nEl resultado de la funcion Exponencial es: "<<endl;
            cout<<exponencial(num1Float)<<endl;
            break;
        case 9:
            cout<<"Ingrese el valor al cual le desea calcular su logaritmo Neperiano:"<<endl;
            cin>>num1;
            num1Float = atof(validacion(num1).c_str());
            cout<<"\nEl resultado de la funcion Logaritmo Neperiano es: "<<endl;
            cout<<logNep(num1Float)<<endl;
            break;
        case 10:
            cout<<"Ingrese el número que desea redondear:"<<endl;
            cin>>num1;
            num1Float = atof(validacion(num1).c_str());
            cout<<"\nEl redondeo al número más sercano es: "<<endl;
            cout<<redondeo(num1Float)<<endl;
            break;
        case 11:
            cout<<"Ingrese el número del cual desea saber su valor absoluto:"<<endl;
            cin>>num1;
            num1Float = atof(validacion(num1).c_str());
            cout<<"\nEl valor absoluto del número "<<num1<<" es:"<<endl;
            cout<<vabsoluto(num1Float)<<endl;
            break;
        case 12:
            cout<<"¿Cuantos elementos desea Ingresar?"<<endl;
            cin>>elementos;
            cout<<"Ingrese los elementos: "<<endl;
            for (int i=0; i<elementos; i++){
                cin>>array[i];
            }
            cout<<"La Mediana es:"<<endl;
            cout<<mediana(elementos, array)<<endl;
            break;
        case 13:
            cout<<"¿Cuantos elementos desea Ingresar?"<<endl;
            cin>>elementos;
            cout<<"Ingrese los elementos: "<<endl;
            for (int i=0; i<elementos; i++){
                cin>>array[i];
            }
            cout<<"La Moda es:"<<endl;
            cout<<moda(elementos, array)<<endl;
            break;
        case 14:
            cout<<"¿Con uantos elementos desea realizar la acción?"<<endl;
            cin>>elementos;
            cout<<"La Media Armónica es:"<<endl;
            cout<<mediaArmonica(elementos)<<endl; 
            break;
        case 15:
            cout<<"¿Cuantos elementos desea Ingresar?"<<endl;
            cin>>elementos;
            cout<<"Ingrese los elementos: "<<endl;
            for (int i=0; i<elementos; i++){
                cin>>array[i];
            }
            cout<<"La Media Geométrica es:"<<endl;
            cout<<mediaGeometrica(elementos, array)<<endl;
            break;
        case 16:
            cout<<"¿Cuantos elementos desea Ingresar?"<<endl;
            cin>>elementos;
            cout<<"Ingrese los elementos: "<<endl;
            for (int i=0; i<elementos; i++){
                cin>>array[i];
            }
            cout<<"La Medía Aritmética es:"<<endl;
            cout<<mediaAritmetica(elementos, array)<<endl;
            break;
        case 17:
            cout<<"¿Con uantos elementos desea realizar la acción?"<<endl;
            cin>>elementos;
            cout<<"La Media Armónica es:"<<endl;
            cout<<mediaCuadratica(elementos)<<endl;
            break;
        case 18:
            datosComplejos();
            mostrarComplejo(sumaCom(n1,n2));
            break;
        case 19:
            datosComplejos();
            mostrarComplejo(producto(n1,n2));
            break;
        case 20:
            cout<<"Datos para el primer número complejo: "<<endl;
            cout<<"Ingrese la parte real: "; 
            cin>>n1.real;
            cout<<"Ingrese la parte imaginaria: "; 
            cin>>n1.imaginaria;
            mostrarComplejo(conjugado(n1));
            break;
        case 21:
            cout<<"\nIngrese los datos: "<<endl;
            cin>>num1; 
            cin>>num2; 
            num1Float = atof(validacion(num1).c_str());
            num2Float = atof(validacion(num2).c_str());
            cout<<"\nEl resultado de la combinación es: "<<endl;
            cout<<combinacion(num1Float, num2Float)<<endl;
            break;
        case 22:
            cout<<"\nIngrese los datos: "<<endl;
            cin>>num1; 
            cin>>num2; 
            num1Float = atof(validacion(num1).c_str());
            num2Float = atof(validacion(num2).c_str());
            cout<<"\nEl resultado de la permutación es: "<<endl;
            cout<<permutacion(num1Float, num2Float)<<endl;
            break;
        case 23:
            cout<<"\nIngrese los datos: "<<endl;
            cin>>num1; 
            cin>>num2; 
            num1Float = atof(validacion(num1).c_str());
            num2Float = atof(validacion(num2).c_str());
            cout<<"\nEl resultado de la Probabilidad Binomial es: "<<endl;
            cout<<PBinomial(num1Float, num2Float)<<endl;
            break;
        default:
            cout<<"Ingreso una opción incorrecta.";
            break;
        }
        cout<<"¿Desea realizar más operaciones? [s/n]"<<endl;
        cin>>resp;
    } while (resp == 's' || resp == 'S');
}

string validacion(std::string num){ 
    if(num=="pi"){
        num="3.1416";
    }else{
        if(num=="e"){
            num="2.7118";
        }
    }
    return num;
}


float suma(float num1, float num2){
    return num1+num2;
}

float resta(float num1, float num2){
    return num1-num2;
}

float multiplicacion(float num1, float num2){
    return num1*num2;;
}

float divicion(float num1, float num2){
    return num1/num2;
}

float raizcuadrada(int num){
    return sqrt(num);
}

float potencia(float num1, float num2){
    return pow(num1,num2);  
}

float exponencial(float num){
    return exp(num);
}

float logNep(float num){
    return log(num);
}

float redondeo(float num){
    return round(num);
}

float vabsoluto(float num){
    return abs(num);
}

float mediana(int elementos, float array[]){
    //Utilizando Ordenamiento Burbuja
    float aux=0;
    int med=0; 
    float medianatotal=0;
    for (int i=0; i<elementos; i++){
        for (int j=0; j<elementos; j++){
            if(array[j]>array[j+1]){
                aux=array[j];
                array[j]=array[j+1];
                array[j+1]=aux;
            }
        }
    }
    med=round((elementos+1)/2);
    medianatotal=array[med];
    return medianatotal;
}

float moda(int elementos, float array[]){
    float aux=0, m=0, moda=0;
    int a=0;
    for (int i=0; i<elementos; i++){
        for (int j=0; j<elementos; j++){
            if(array[i]==array[j] && i!=j){
                aux=aux+1;
            }
        }
        if(aux>=m){
            m=aux;
            a=i;
        }
    }
    moda=array[a];
    return moda;
}

float mediaArmonica(int elementos){
    srand(time(NULL));

    float suma=0, num=0, medArm=0;
    for(int i=0; i<elementos; i++){
        num= rand() % 100;
        suma += (1/num);
    }
    medArm=(elementos/suma);
    return medArm;
}

float mediaGeometrica(int elementos, float array[]){
    float producto=1, productoTotal=0;
    for(int i=1; i<=elementos; i++){
        producto *= array[i];
    }
    productoTotal=sqrt(producto);
    return productoTotal;
}

float mediaAritmetica(int elementos, float array[]){
    float suma=0, medArit=0;
    for(int i=0; i<elementos; i++){
        suma += array[i];
    }
    medArit=suma/(elementos-1);
    return medArit;
}

float mediaCuadratica(int elementos){
    srand(time(NULL));
    float suma=0, medCuad=0;
    for(int i=0; i<elementos; i++){
        suma += (rand()%100);
    }
    medCuad=sqrt(suma/elementos);
    return medCuad;
}

float combinacion(float num1, float num2){
    return factorial(num1)/(factorial(num1-num2)*factorial(num2));
}
float permutacion(float num1, float num2){
    return factorial(num1)/factorial(num1-num2);
}

float factorial(float num1){
    if (num1==0 || num1==1){
        return 1;
    }else{
        if(num1>1){
            return num1*factorial(num1-1);
        }else{
            return NULL;
        }
    }
}

float PBinomial(float num1, float num2){
    return factorial(num1)/(factorial(num2)*factorial(num1-num2));
}

void datosComplejos(){
    cout<<"Datos para el primer número complejo: "<<endl;
    cout<<"Ingrese la parte real: "; 
    cin>>n1.real;
    cout<<"Ingrese la parte imaginaria: "; 
    cin>>n1.imaginaria;

    cout<<"Datos para el segundo número complejo: "<<endl;
    cout<<"Ingrese la parte real: "; 
    cin>>n2.real;
    cout<<"Ingrese la parte imaginaria: "; 
    cin>>n2.imaginaria;
}

Complejo sumaCom(Complejo n1, Complejo n2){
    n1.real += n2.real;
    n1.imaginaria += n2.imaginaria;
    return n1;
}

Complejo producto(Complejo n1, Complejo n2){
    Complejo z;

    z.real=n1.real*n2.real-n1.imaginaria*n2.imaginaria;
    z.imaginaria=n1.real*n2.imaginaria+n1.imaginaria*n2.real;
    return z;
}

Complejo conjugado(Complejo n1){
    n1.real = n1.real;
    n1.imaginaria = -n1.imaginaria;
    return n1;
}

void mostrarComplejo(Complejo com){
    cout<<"El resultado de la suma de complejos es ("<<com.real<<" , "<<com.imaginaria<<"i)"<<endl;
}