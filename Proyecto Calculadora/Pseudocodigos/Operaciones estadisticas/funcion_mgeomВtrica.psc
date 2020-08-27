Algoritmo funcion_medG
	Definir  n, num, medG, totalMedG Como Real
	Leer n
	medG<-1;
	Para i<-1 Hasta n Con Paso 1 Hacer
		Leer num;
		medG <- medG*num
	FinPara
	totalMedG <- medG^(1/n)
	Escribir "Media Geométrica: ", totalMedG
FinAlgoritmo
