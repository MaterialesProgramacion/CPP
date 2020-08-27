/*
    @author its_anaehm
    @date 08-2020
    @version 0.1
*/

/*
Crear un programa que dado un arreglo bidimensional de 3x3 le pida al usuario ingresar un número cualquiera.
Se pide que el programa realicé las instrucciones siguientes:
1. Definir una función real cómo 'F(x)', la cual está determinada por:
F(x) = xMod(9) + x. Ésto es la función Módulo 9 del valor x (residuo %) más x.
2. Definir una función como 'Diagonal()', la cuál calcula la suma 'Sum' de los elementos de la diagonal del arregló dado (3x3), y retorna la evaluación de dicha suma en la función 'F(x)'. Es decir, 'F(Sum)'.
3. En la función 'main()', el número de lista ingresado debé ser evaluado dentro de la función 'F(x)' y mostrar el resultado de su evaluación como primer salida del programa.
4. La función 'main()' debé llamar a la función 'F(x)', y está a su vez debé utilizar como argumentó a la función 'Diagonal()', y finalmente mostrar su resultado cómo la segunda salida del programa.
*/

#include <iostream>

using namespace std;

float diagonalSum(int M[3][3]);
float funcion(int);


int main( ){
// Aquí se declara e inicializa un arreglo bidimensional o Matriz de 3x3
    int M[3][3] = {{5, 2, 3}, {5, 6, 7}, {9, 10, 11}};
    int nlista=0;
    float a=0, b=0;
    cout<<"Mi numero de lista:"<<endl;
    cin>>nlista;
    a=diagonalSum(M);
    b=funcion(nlista);
    cout<<"Resultados:"<<endl;
    cout<<b<<endl;
    cout<<a<<endl;

    return 0;
}

float funcion(int x){
    int f=0;
    f = (x%9)+x;
    return f;
}
// Aquí debé definir las funciones declaradas 'F' y 'Diagonal'
float diagonalSum(int M[3][3]){
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) {
            if(i==j){
                sum=sum+M[i][j];
            }
        }
    }
    return funcion(sum);
}