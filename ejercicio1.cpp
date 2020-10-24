#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    b=sqrt(a);
    if(b*b==a){
        cout<<"Es un cuadrado perfecto"<<endl;
    }else{
        cout<<"No es un cuadrado perfecto"<<endl;
    }
    return 0;
}