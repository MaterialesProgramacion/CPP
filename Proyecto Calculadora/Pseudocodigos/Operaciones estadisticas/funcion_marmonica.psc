Algoritmo funcion_mediaarmonica
	suma <- 0
	Escribir "Ingrese la cantidad de números: "
	Leer n
	
	Para i<- 1 Hasta n Con Paso 1 Hacer
		suma <- suma +(1/Azar(100))
	FinPara
	
	Escribir "La media armónica para el conjunto de datos es: ", n/suma 
FinAlgoritmo
