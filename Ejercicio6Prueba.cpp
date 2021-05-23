// Francis Atena Sanchez Lezema - 20141002331
 
/*
Ejercicio 6: Haga un programa que haga las operaciones con matrices: suma, resta, producto escalar, multiplicación, opuesta y transpuesta.
*/

#include<iostream>
using namespace std;
int main(){
	int m,n,e;
	cout<<"Ingrese el tamaño de las matrices:"<<endl;
  	cin>>m>>n;
  	cout<<"Ingrese los elementos de la matriz A[][]: "<<endl;
	int  A[m][n],B[m][n],S[m][n], R[m][n], M[m][n], PE[m][n], O[m][n];
  	for( int i=0;i<m;i++){
     	for(int j=0;j<n;j++){
            cout<<"A["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
      	}
  	}
	cout<<"Ingrese los elementos de la matriz B[][]: "<<endl;
    for( int i=0;i<m;i++){
      	for(int j=0;j<n;j++){
            cout<<"B["<<i<<"]["<<j<<"]:";
            cin>>B[i][j];
      	}
   	}
   	cout<<"Ingrese el valor del escalar con el cual desea hacer el calculo del producto escalar: ";
   	cin>>e;
   	//Sumando las matrices
 	for( int i=0;i<m;i++){
     	for(int j=0;j<n;j++){
            S[i][j]=A[i][j]+B[i][j];
      	}
 	}
 	cout<<"El resultado de la suma de las matrices es: "<<endl;
 	// Mostrando el resultado de la suma:
 	for( int i=0;i<m;i++){
     	for(int j=0;j<n;j++){
            cout<<S[i][j]<<" ";
      	}
      	cout<<endl;
  	}
 	//Restando las matrices
 	for( int i=0;i<m;i++){
     	for(int j=0;j<n;j++){
            R[i][j]=A[i][j]-B[i][j];
      	}
 	}
 	cout<<"El resultado de la resta de las matrices es: "<<endl;
 	// Mostrando el resultado de la resta:
 	for( int i=0;i<m;i++){
     	for(int j=0;j<n;j++){
            cout<<R[i][j]<<" ";
      	}
      	cout<<endl;
  	}
  	//Multiplicando las matrices
 	for( int i=0;i<m;i++){
     	for(int j=0;j<n;j++){
            M[i][j]=A[i][j]*B[i][j];
      	}
 	}
 	cout<<"El resultado de la multiplicacion de las matrices es: "<<endl;
 	// Mostrando el resultado de la multiplicación:
 	for( int i=0;i<m;i++){
     	for(int j=0;j<n;j++){
            cout<<M[i][j]<<" ";
      	}
      	cout<<endl;
  	}
  	//Producto Escalar por la matriz A
  	for( int i=0;i<m;i++){
     	for(int j=0;j<n;j++){
            PE[i][j]=e*A[i][j];
      	}
 	}
 	cout<<"El resultado del producto escalar de la matriz A es: "<<endl;
 	// Mostrando el resultado del producto escalar:
 	for( int i=0;i<m;i++){
     	for(int j=0;j<n;j++){
            cout<<PE[i][j]<<" ";
      	}
      	cout<<endl;
  	}
  	//Matriz Opuesta de la matriz A
  	for( int i=0;i<m;i++){
     	for(int j=0;j<n;j++){
            O[i][j]=(-1)*A[i][j];
      	}
 	}
 	cout<<"La matriz opuesta de la matriz A es: "<<endl;
 	// Mostrando el resultado de la matriz opuesta:
 	for( int i=0;i<m;i++){
     	for(int j=0;j<n;j++){
            cout<<O[i][j]<<" ";
      	}
      	cout<<endl;
  	}
  	cout<<"La matriz transpuesta de la matriz A es: "<<endl;
  	//Mostrando la matriz transpuesta de A:
  	for( int i=0;i<m;i++){
     	for(int j=0;j<n;j++){
            cout<<A[j][i]<<" ";
      	}
      	cout<<endl;
  	}
}








