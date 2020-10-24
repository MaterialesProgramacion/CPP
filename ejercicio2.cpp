#include <iostream>
using namespace std;

int main(){
    int num, suma=0, entero=0;
    cin>>entero;
    if(entero<0){
        entero = -entero;
    }
    while(entero!=0){
        num=entero%10;
        entero/=10;
        suma+=num;
    }
    cout<<suma<<endl;
    return 0;
}