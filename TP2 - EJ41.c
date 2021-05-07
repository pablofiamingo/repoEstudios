/*Ejercicio 41.	Ídem al anterior agregando en el informe final nombre del empleado de mayor salario con el monto del salario correspondiente
y nombre del empleado de menor salario con el monto del salario correspondiente.*/


#include <stdio.h>
#include <string.h>

int main (){
	int i = 0, hor, nhor, salario, cont = 1, may = 0, men = 0;
	char nombre[20], nombre2[20], nombre3[20];
	
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
	salario = hor * nhor;
	
	if (salario < men){
		strcpy (nombre2, nombre);
		men = salario;
	}
	if (salario > may){
		strcpy (nombre3, nombre);
		may = salario;
	}
	
	}while (i != 0);

	printf ("\nEl salario semanal de %s es de %d", nombre, salario);
	printf ("\nSe han introducido %d salarios.", cont);
	printf ("\El alumno con el promedio mas bajo es %s con un promedio de %d. ", nombre2, men);
	printf ("\El alumno con el promedio mas alto es %s con un promedio de %d. ", nombre3, may);
	return 0;
}

