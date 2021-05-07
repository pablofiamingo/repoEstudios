/* Ejercicio 42. Ídem al anterior agregando en el informe final el costo de la empresa en salarios y el salario promedio.*/


#include <stdio.h>
#include <string.h>

int main (){
	int i = 0, hor =0, nhor =0, salario =0, cont = 1, salmay = 0, salmin = 0, saltot =0, salprom =0;
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
	
	salario = hor * nhor;
	
	if (i == 1){
		cont ++;	
	}
	if (salario > salmay){
		salmay = salario;
		strcpy (nombre2, nombre);
		
	}
	if (salario < salmin){
		salmin = salario;
		strcpy (nombre3, nombre);
	}
	saltot += salario;
	
	}while (i != 0);

	salprom = saltot / cont;
	
	
	printf ("\nEl salario semanal de %s es de %d", nombre, salario);
	printf ("\nSe han introducido %d salarios.", cont);
	printf ("\nEl empleado con mayor salario es %s con un sueldo de %d.", nombre2, salmay);
	printf ("\nEl empleado con menor salario es %s con un sueldo de %d.", nombre3, salmin);
	printf ("\nEl coste total de la emprese en salarios es de %d", saltot);
	printf ("\El salario promedio es de %d", salprom);
	return 0;
}


