Algoritmo Guia_de_Ejercico1_4K
	definir turno Como Caracter
	definir h, pago, h_ext, h_lab Como Real
	Escribir "Ingrese el turno en el cual laboro:"
	Leer turno
	Escribir "Ingrese la cantidad de hora de trabajo:"
	Leer h
	h_lab=h
	si turno == 'A'
		si h<=40 & h>0
			pago = h*70
		SiNo
			si h>40
				h_ext = h-40
				h = h - h_ext
				pago = (h*70)+(h_ext *70*2)
			SiNo
				Escribir "Error. Valor Invalido."
			FinSi
		FinSi
	SiNo
		si turno == 'B'
			si h<=40 & h>0
				pago = h*90
			SiNo
				si h>40
					h_ext = h-40
					h = h-h_ext;
					pago = (h*90)+(h_ext*90*3)
				SiNo
					Escribir "Error. Valor Invalido."
				FinSi
			FinSi
		SiNo
			Escribir "Error. Valor Invalido."
		FinSi
	FinSi
	
	Escribir " "
	Escribir "El empleado(a)"
	Escribir "Laboró en el turno ", turno
	Escribir "Un total de: ", h_lab, " horas."
	Escribir "De las cuales ", h_ext, " son horas extras."
	Escribir "El total de su sueldo es de: ", pago
	
FinAlgoritmo