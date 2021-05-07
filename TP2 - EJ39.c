/*Ejercicio 39.	Escribir un programa que calcule el salario semanal de cada trabajador de una empresa dada la tarifa horaria y
el número de horas trabajadas además del nombre. Se debe permitir al usuario indicar cuando desea dejar de ingresar de ingresar datos.*/


#include <stdio.h>
#include <string.h>

int main (){
	int i = 0, hor, nhor, salario;
	char nombre[20];
	
	do{
	printf("Ingrese el nombre: ");
	fflush (stdin);
	scanf ("%s", nombre);
	
	printf ("Ingrese las horas trabajadas: ");
	fflush (stdin);
	scanf ("%d", &nhor);
	
	printf ("Ingrese la tarifa horaria: ");
	fflush (stdin);
	scanf ("%d", &hor);
	
	printf ("Para ingresar los datos de otro empleado, ingrese 1. Para terminar, ingrese 0. ");
	scanf ("%d", &i);
	
	}while (i != 0);

	
	salario = hor * nhor;	
	
	
	printf ("\nEl salario semanal de %s es de %d", nombre, salario);
	
	
	return 0;
}

