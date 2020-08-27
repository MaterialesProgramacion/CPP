Algoritmo funcion_moda
	Definir media,cont,suma Como Real;
	
	Definir n,a,b,moda,m Como Entero;
	
	n<-10;
	
	Dimension num[10];
	
	Limpiar Pantalla;
	
	Para a<-1 Hasta n Con Paso 1 Hacer
		
		Escribir Sin Saltar "Ingrese un numero entero [",a,"]: ";
		
		Leer num[a];
		
		suma<-suma+num[a];
		
	FinPara
	
	moda<-0;
	
	m<-0;
	
	Para a<-1 Hasta n-1 Con Paso 1 Hacer
		
		cont<-0;
		
		Para b<-a+1 Hasta n Con Paso 1 Hacer
			
			Si num[a]==num[b] Entonces
				
				cont<-cont+1;
				
			FinSi
			
		FinPara
		
		Si cont>m Entonces
			
			m<-cont;
			
			moda<-num[a];
			
		FinSi
		
	FinPara
	
	media<-suma/n;
	
	Escribir "";
	
	Escribir "La media es : ",media;
	
	Escribir "La moda es : ",moda;
FinAlgoritmo
