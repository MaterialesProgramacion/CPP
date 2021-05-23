#include <iostream>
#include <math.h>
#include <iomanip>//para le setw() cout<<setw(20)
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;

void tabla();

int main(){
    srand(time(NULL));
    int sumaf=0, sumaC=0;
    int arrayE[10];
    int arrayF[10];
    int arrayG[10];
    int f, c, i, j, r, x, cont=0;
    int tabla[11][11];
    
    //Generando la tabla de Goles
	for (f=0; f<=11; f++)
	{
        for (c=0; c<=11; c++)
		{
            /*
			Como un equipo no puede anotarse goles a si mismo entonces por cada pocion en la 
			tabla que haga referencia a un encuentro con si mismo se le asignar el valor de 0
			*/
			if(f == c ){
                tabla[f][c]=0;
            // De lo contrario definimos los valores de la primera fila de acuerdo al numero de equipo
			}else{
                if (f==0){
                    tabla[f][c]=c;
                // De lo contrario definimos los valores de la primera columna de acuerdo al numero de equipo
				}else{
                    if (c==0){
                        tabla[f][c]=f;
                    // Llenamos la tabla con los goles anotados por equipo de forma aleatoria entre 0 y 9
                    }else{
                        tabla[f][c]=rand()%9;
                    }
                }
            }
        }
    }

	// Codigo que muestra la tabla de goles
    cout<<endl;
	cout<<"-------------- Cuadro de Goles ---------------"<<endl;
	for(f=0;f<11;f++) 
	{
        for(c=0;c<11;c++)
		{
            cout<<setw(4)<<tabla[f][c];
        }
    cout<<endl;
    }
	// Sumando las columnas de la tabla para saber los goles recibidos por equipo
    for (j=1;j<11;j++)
	{
        sumaf=0;
        for (i=1;i<11;i++)
		{
            sumaf += tabla[i][j];
        }
        arrayE[j-1] = sumaf;
    }
    cout<<endl;
	cout<<"-------- Goles recibidos por equipo: ---------"<<endl;
    for (int a=0; a<10;a++)
	{
        cout<<"El equipo "<<a+1<<" Recibio: "<<arrayE[a]<<" Goles."<<endl;
    }
    
    // Sumando las filas de la tabla para saber los goles anotados por equipo
	for(j=1;j<11;j++)
	{
	    sumaC=0;
	    for(i=1;i<11;i++)
		{
	        sumaC += tabla[j][i];
	    }
	    arrayG[j-1]=sumaC;
	}
	cout<<endl;
	//Codigo de prueba para saber el total de goles anotados por equipo
	/*
	cout<<"-------- Goles anotados por equipo: ---------"<<endl;
    for (int a=0; a<10;a++){
        cout<<"El equipo "<<a+1<<" anoto: "<<arrayG[a]<<" Goles."<<endl;
    }
    */
    r=0;
    for(i=1;i<11;i++)
	{
        if(arrayG[i-1]>r){
            r=arrayG[i-1];
            x=i;
        }
    }
    cout<<"El equipo que mas goles anoto es: "<<x<<endl;
    //Codigo que muestra la cantidad de empates
	for(f=0;f<11;f++) 
	{
        for(c=0;c<11;c++)
		{
            
			if(tabla[f][c]==tabla[c][f]){
            	cont++;
			}
        }
    }
    cout<<"La cantidad de empates es: "<<cont-20<<endl;
}
