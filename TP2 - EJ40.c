/*Ejercicio 40.	Ídem al anterior, pero informando al finalizar (el ingreso de datos y los cálculos correspondientes) la cantidad de empleados 
a los que se les calculo el salario.*/


#include <stdio.h>
#include <string.h>

int main (){
	int i = 0, hor, nhor, salario, cont = 1;
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
	
	if (i == 1){
		cont ++;
	}
	
	}while (i != 0);

	
	salario = hor * nhor;	
	
	
	printf ("\nEl salario semanal de %s es de %d", nombre, salario);
	printf ("\nSe han introducido %d salarios.", cont);
	
	return 0;
}

