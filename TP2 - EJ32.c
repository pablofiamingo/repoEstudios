/*Ejercicio 32.	Se registran de los empleados de una empresa Numero de legajo, sueldo y sexo (1 femenino y 2 masculino).
Diseñar un Pseudocódigo y codificar en C un algoritmo que permita informar cuantas mujeres ganan más de $16000 y cuantos hombres
ganan menos de $10000. */


#include <stdio.h>

int main ()
{
	int leg=0, sueldo=0, sexo=0, hom=0, muj=0;
	
	do
	{
	printf ("Ingrese el numero de legajo. Para terminar, ingrese 0: ");
	scanf ("%d", &leg);
	if (leg !=0){
		
	printf ("Ingrese el sexo del empleado/a: Si es femenino, ingrese 1; si es masculino, ingrese 2. ");
	scanf ("%d", &sexo);
	printf ("Ingrese el sueldo: ");
	scanf ("%d", &sueldo);
	
	if (sexo == 2 && sueldo < 10000) hom++;
	if (sexo == 1 && sueldo > 16000) muj++;
	}
	}
	while (leg !=0);
	

	printf ("\nHay %d hombres cuyo sueldo es menor a $10000.", hom);
	printf ("\nHay %d mujeres que ganan mas de $16000", muj);
	
	
	
	return 0;
	
}

