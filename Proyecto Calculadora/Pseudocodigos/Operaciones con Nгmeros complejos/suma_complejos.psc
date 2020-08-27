SubProceso suma_ = sumaNComplejos( numComplejo1 por referencia, numComplejo2 por referencia )
	dimension suma_[2]
	definir suma_ como real
	definir parteReal_ como real
	definir parteImaginaria_ como real
	parteReal_ = numComplejo1[1] + numComplejo2[1]
	//imprimir parteReal_
	parteImaginaria_ = numComplejo1[2] + numComplejo2[2]
	//imprimir parteImaginaria_
	
	suma_[1] = parteReal_
	suma_[2] = parteImaginaria_
	// a+bi + c+di = (a+c) + (b+d)*i //
	
	imprimir "la suma es ", ConvertirATexto(suma_[1]), "+", ConvertirATexto(suma_[2]), "*i"
Fin SubProceso

Proceso tipodedato_numerocomplejo
	Dimension numComplejo1[2];
	Definir numComplejo1 Como Real;
	
	Dimension numComplejo2[2];
	Definir numComplejo2 Como Real
	
	Dimension numComplejo3[2];
	Definir numComplejo3 Como Real
	
	imprimir "ingrese el primer numero complejo, parte real"
	leer  numComplejo1[1]
	
	imprimir "ingrese el primer numero complejo, parte imaginaria"
	leer  numComplejo1[2]
	
	imprimir "el numero complejo es ", ConvertirATexto(numComplejo1[1]), "+", ConvertirATexto(numComplejo1[2]), "*i"
	
	imprimir ""
	imprimir "ingrese el segundo numero complejo, parte real"
	leer  numComplejo2[1]
	
	imprimir "ingrese el segundo numero complejo, parte imaginaria"
	leer  numComplejo2[2]
	
	imprimir "el numero complejo es ", ConvertirATexto(numComplejo1[1]), "+", ConvertirATexto(numComplejo1[2]), "*i"
	imprimir ""
	
	imprimir sumaNComplejos(numComplejo1, numComplejo2)
	
FinProceso
