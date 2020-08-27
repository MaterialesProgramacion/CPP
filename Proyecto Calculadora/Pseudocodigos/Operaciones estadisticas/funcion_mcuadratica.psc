Algoritmo funcion_mcuadratica
	suma<-0
	Escribir "Ingrese la cantidad de terminos:"
	Leer n
	
	Para i<-1 Hasta n Con Paso 1 Hacer
		suma = suma + Azar(100)
	FinPara
	Escribir "La media Geométrica es: ", Raiz(suma/n)
FinAlgoritmo
