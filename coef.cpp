#include <iostream>
#include <math.h>

int factorial(int);
float binomial(int, float);
float eval_sumatoria(int, float, float);

using namespace std;

int main(){
    int n=0;
    float x=0, y=0, a=0;
    cout<<"n=";
    cin>>n;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    a=eval_sumatoria(n,x,y);
    cout<<"El resultado es: "<<a<<endl;
    return 0;
}

int factorial(int a){
    if (a==0){
        return 1;
    }else{
        if(a>=1){
            return a*factorial(a-1);
        }
    }
}

float binomial(int a, float b){
    int binomial=0;
    binomial=factorial(a)/(factorial(b))*(factorial(a-b));
    return binomial;
}

float eval_sumatoria(int a, float b, float c){
    float sumatoria=0;
    for(int i=0; i<a; i++){
        sumatoria = (binomial(a,i))*pow(b,(a-i))*pow(c,i);
    }
    return sumatoria;
}
