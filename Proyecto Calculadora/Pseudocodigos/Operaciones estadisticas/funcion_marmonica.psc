Algoritmo funcion_mediaarmonica
	suma <- 0
	Escribir "Ingrese la cantidad de n�meros: "
	Leer n
	
	Para i<- 1 Hasta n Con Paso 1 Hacer
		suma <- suma +(1/Azar(100))
	FinPara
	
	Escribir "La media arm�nica para el conjunto de datos es: ", n/suma 
FinAlgoritmo
