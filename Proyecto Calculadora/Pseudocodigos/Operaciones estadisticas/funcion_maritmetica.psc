Algoritmo funcion_maritmetica
	
	suma <- 0
	cont <- 0
	Escribir "Introduzca un n�mero positivo (n�mero negativo para terminar)"
	leer num
	
	mientras num >= 0 hacer
		suma <- suma + num
		cont <- cont +1
		
		escribir "Introduzca un n�mero positivo (n�mero negativo para Terminar)"
		leer num
		
	Fin Mientras
		
		media <- suma / cont
		
		escribir "La media de los n�meros introducidos es: ", media
	
FinAlgoritmo
