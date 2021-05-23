// Hackzel Nahun Delcid Fugon - 20191003745
// Ejercicio #4

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main(){
	int participantes, sumatoria, promedio, mayorPromedio=0, participante;
	cout<<"Ingrese la cantidad de participantes ---> ";
	cin>>participantes;
	int resultados[participantes+1][6];
	int arregloPromedio[participantes];
	srand(time(NULL));
	for (int i=0; i<participantes+1; i++){
		for(int j=0; j<6; j++){
			if (i==0){
                    resultados[i][j]=j;
			}else{
               if (j==0){
                    resultados[i][j]=i;
                }else{
                    resultados[i][j]=rand()%101;
                }
            }
        }
	}
	cout<<"\n";
	for(int k=0;k<participantes+1;k++){
        for(int h=0;h<6;h++){
            cout<<setw(4)<<resultados[k][h];
        }
    cout<<"\n";
    }
    for(int l=0;l<participantes+1;l++){
    	promedio=0;
    	sumatoria=0;
		for(int m=0;m<6;m++){
    		sumatoria = sumatoria + resultados[l+1][m];
		}
		promedio=sumatoria/5;
		arregloPromedio[l]=promedio;
	}
	cout<<"\n\n";
	for(int n=0;n<participantes;n++){
		cout<<"La nota promedio del participante "<<n+1<<" es ---> "<<arregloPromedio[n]<<"\n";
	}
	for(int a=0;a<participantes;a++){
        if(arregloPromedio[a]>mayorPromedio){
            mayorPromedio=arregloPromedio[a];
            participante=a;
        }
    }
    cout<<"\n\n";
    cout<<"El participante "<<participante+1<<" obtuvo el mayor promedio con ---> "<<mayorPromedio<<"\n";
	return 0;
}
