/*Ejercicio 29.	Por teclado se ingresa el valor hora de un empleado. Posteriormente se ingresa el nombre del empleado, la antigüedad
y la cantidad de horas trabajadas en el mes. Se pide calcular el importe a cobrar teniendo en cuanta que al total que resulta de multiplicar
el valor hora por la cantidad de horas trabajadas, hay que sumarle la cantidad de años trabajados multiplicados por $30, y al total de todas
esas operaciones restarle el 13% en concepto de descuentos. Imprimir el recibo correspondiente con el nombre, la antigüedad, el valor hora,
el total a cobrar en bruto, el total de descuentos y el valor neto a cobrar.*/


#include <stdio.h>
main (){
	
	int ant, htrab;
	float hora, totaln, totalb, desc;
	char nombre[20];
	
	printf ("\nIngrese el valor hora del empleado: ");
	scanf ("%g", &hora);
	printf ("\nIngrese el nombre del empleado: ");
	scanf ("%s", nombre);
	printf ("\nIngrese la antig%cedad del empleado: ", 129);
	scanf ("%d", &ant);
	printf ("\nIngrese la cantidad de horas trabajadas por el empleado: ");
	scanf ("%d", &htrab);
	
	totalb = (hora * htrab) + (ant * 30);
	desc = totalb * 0.13;
	totaln = totalb - desc;
	
	
	
	printf ("\nNombre del empleado: %s", nombre);
	printf ("\nAntig%cedad: %d", 129, ant);
	printf ("\nValor hora: %g", hora);
	printf ("\nSueldo bruto: %g", totalb);
	printf ("\nTotal de descuentos: %g", desc);
	printf ("\nSueldo neto: %g", totaln);
	
	return 0;
}
