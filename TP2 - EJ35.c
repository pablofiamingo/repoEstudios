/*Ejercicio 35.	De los alumnos de la escuela se registra su apellido y su nombre y su altura. Diseñar en Pseudocodigo un algoritmo que
indique el nombre del alumno más alto y su altura (solo uno es el más alto).*/

#include <stdio.h>
#include <string.h>


int main (){
	
	int i=1, altura = 0, may =0;
	char nombre[20], apellido[20], nombre2[20], apellido2[20];
	
	do {
	
	printf ("Introduzca el apellido del alumno. ");
	fflush (stdin);
	scanf ("%s", apellido);
	
	printf ("Introduzca el nombre del alumno. ");
	fflush (stdin);
	scanf ("%s", nombre);
		
	printf ("Ingrese la estatura del alumno en centimetros: ");
	fflush (stdin);
	scanf ("%d", &altura);
	
	if (altura > may) {
	may = altura;
	strcpy (apellido2, apellido);
	strcpy (nombre2, nombre);
	}
	
	printf ("Para continuar ingrese 1. Para terminar ingrese 0: ");
	fflush (stdin);
	scanf ("%d", &i);
	
	}	while (i == 1);
	
	printf ("El alumno con la altura mayor es %s %s con una altura de %d centimetros", apellido2, nombre2, may);
	
	return 0;
}
