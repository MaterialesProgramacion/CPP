Algoritmo fibonacci
	
	pre <- 0
	pos <- 1
	
	Escribir "Ingrese la cantida de números que desea generar:"
	Leer n
	
	Escribir pre
	Escribir pos
	
	Para x<-3 Hasta n Hacer
		val<- pre+pos
		pre<-pos
		pos<-val
		Escribir val," "
		suma<-pre+pos+val
	FinPara
	
	Escribir suma-1
	
FinAlgoritmo
