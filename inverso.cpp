/*
    @author its_anaehm
    @date 08-2020
    @version 0.1
*/

/*
Este algoritmo en C++ genera de forma automática o manual los coeficientes a,b,c de la función cuadrática f(x)=ax^2+bx+c y despliega en pantalla el valor de la concavidad, las coordenadas del vértice y le ecuación del eje de simetría.
Se le consulta al usuario si quiere generar de forma automática(aleatorio) los coeficientes de la función cuadrática o si desea ingresarlo de forma manual(determinista) a través de un menú de dos opciones. Si selecciona la opción 1 se despliega en pantalla los valores generados de forma aleatoria y si seleccionó la opción 2, deben de ser ingresados estos tres valores.
Luego el programa despliega en pantalla el informe de las características de la función cuadrática
*/
#include <iostream>
#include <random>
#include <math.h>
#include <iomanip>

void Informe(size_t, size_t, size_t);
size_t Aleatorioa(void);
size_t Aleatoriob(void);
size_t Aleatorioc(void);
void Concavidad(size_t, size_t, size_t);
float Vx(size_t, size_t, size_t);
void Vertice(size_t, size_t, size_t);
void EjeSimetria(size_t, size_t, size_t);
float evaluarFuncion(size_t, size_t, size_t, size_t);


int main() {
    double a{} , b{} , c{};
    size_t opc{};
    std::cout << "1. Aleatorio" << std::endl
            << "2. Determinista" << std::endl;
    while( opc < 1 || opc > 2 ) {
        std::cin>>opc;
    }
    if( opc == 1){
        a=Aleatorioa();
        b=Aleatoriob();
        c=Aleatorioc();
        std::cout << a << std::endl
                << b << std::endl
                << c << std::endl;
    }else{
        std::cin>>a;
        std::cin>>b;
        std::cin>>c;
    }
    Informe(a,b,c);
    return 0;
}

void Informe(size_t a, size_t b, size_t c){
    /*
    Defina las instrucciones de la funcion Informa, esta funcion solo hace el llamado a la funcion Concavidad, a la funcion Vertice y a la funcion EjeSimetria
    */
    Concavidad(a,b,c);
    Vertice(a,b,c);
    EjeSimetria(a,b,c);
}

void Concavidad(size_t a, size_t b, size_t c){
    /*
    Defina las instrucciones de la funcion Concavidad, esta funcion despliega en pantalla el mensaje "Concavidad: Positiva" o el mensaje "Concavidad: Negativa" segun el valor del coeficiente a de la funcion cuadratica y por ultimo realiza un cambio de linea 
    */
    if (a >0)
    {
        std::cout << "Concavidad: Positiva" << std::endl;
    }
    else
    {
        if (a < 0)
        {
            std::cout << "Concavidad: Negativa" << std::endl;
        }
    }
}

size_t Aleatorioa(void){

    const int range_from  = -100;
    const int range_to    = 100;
    std::random_device                  Rand_dev;
    std::mt19937                        generator(Rand_dev());
    std::default_random_engine rng(std::random_device{}()); 
    std::uniform_real_distribution<double> dist(range_from, range_to);
    return dist(rng);
}

size_t Aleatoriob(void){

    const int range_from  = -100;
    const int range_to    = 100;
    std::random_device                  Rand_dev;
    std::mt19937                        generator(Rand_dev());
    std::default_random_engine rng(std::random_device{}()); 
    std::uniform_real_distribution<double> dist(range_from, range_to);
    return dist(rng);
}

size_t Aleatorioc(void){

    const int range_from  = -100;
    const int range_to    = 100;
    std::random_device                  Rand_dev;
    std::mt19937                        generator(Rand_dev());
    std::default_random_engine rng(std::random_device{}()); 
    std::uniform_real_distribution<double> dist(range_from, range_to);
    return dist(rng);
}

float evaluarFuncion(size_t a, size_t b, size_t c, size_t x){
    float R{0};
    R = a*x*x + b*x + c;

    return R;
}

float Vx(size_t a, size_t b, size_t c){
    /*
    Defina las instrucciones de la funcion Vx la cual retorna el valor de la coordenada en x del vertice de la funcion cuadratica
    */
    float v1{0};
    v1 = -1*b/(2*a);
    return v1;
}

void Vertice(size_t a, size_t b, size_t c){
    /*
    Defina las instrucciones de la funcion Vertice la cual despliega en pantalla el mensaje "Vertice(#1,#2)" donde #1 y #2 representan los valores correspondientes a las coordenadas del vertice de la funcion cuadratica por ultimo realiza un cambio de linea
    */
    float v1{0}, v2{0};
    v1 = Vx(a,b,c);
    v2 = a * v1 * v1 + b * v1 + c;
    std::cout << "Vertice("<<v1<<','<<v2<<')'<<std::endl;
}

void EjeSimetria(size_t a, size_t b, size_t c){
    /*
    Defina las instrucciones de la funcion EjeSimetria la cual despliega en pantalla el mensaje "x=#1" donde #1 representa el valor correspondiente a la recta vertical
    */
    std::cout<<"x="<<Vx(a,b,c);
}