SubProceso  resultado <- Potencia (base, exponente)
    Si exponente=0 Entonces
        resultado <- 1;
    sino 
        resultado <- base*Potencia(base,exponente-1); 
    FinSi
FinSubProceso

Algoritmo funcion_pow
	Definir base, exponente, pow Como Real
	Escribir "Ingrese la base:"
	Leer base
	Escribir "Ingrese el exponente:"
	Leer exponente
	pow = Potencia(base,exponente)
	Escribir "El resultado es: ", pow
FinAlgoritmo