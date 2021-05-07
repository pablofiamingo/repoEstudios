/*Ejercicio 36.	Diseñar un algoritmo que permita calcular el promedio de un alumno sabiendo que se ingresa por alumno la nota de 6 materias
y su nombre. No se sabe la cantidad de alumnos. Se pide mostrar: 
NOMBRE DEL ALUMNO:            PROMEDIO:
*/

#include <stdio.h>

int main (){
	
	int i = 1;
	float prom, nota;
	char nombre[20];
	
	printf ("Ingrese el nombre del alumno: ");
	scanf ("%s", nombre);
		
	do{
		printf ("Ingrese la nota del alumno: ");
		scanf ("%g", &nota);
		
		prom +=nota;
				
		i++;
		
	}while (i <= 6);
	
	prom = prom / 6;
	
	
	printf ("NOMBRE\tPROMEDIO\n");
	printf ("%s", nombre);
	printf ("\t%.2f", prom);
	
	
	
	return 0;
}
