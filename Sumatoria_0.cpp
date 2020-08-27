/*
    @author its_anaehm
    @date 07-2020
    @version 0.1
*/

/*
Desarrolle un algoritmo en C++ que tome como entrada un número n que pertenece a los enteros positivos y despliega en pantalla el resultado de la sumatoria cuyo término n-ésimo es i^2-2i+3. Si el valor de entrada es negativo, se despliega el mensaje de error "NDF".
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int numero=0, suma=0, total=0;
    cin>>numero;
    if(numero>=0){
        for (int i=0; i<=numero; i++){
            suma=(pow(i,2)-(2*i)+3);
            total = total + suma;
        }
        cout<<total<<endl;
    }else{
        cout<<"NDF";
    }
    return 0;
}