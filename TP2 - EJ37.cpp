/*Ejercicio 37.	Del registro de partes meteorol�gico por cada d�a se registra la fecha, temperatura m�xima y temperatura 
m�nima. Dise�ar en Pseudocodigo un algoritmo que permita informar:
"	El d�a mas frio y cual fue esa temperatura.
"	El d�a m�s c�lido y cual fue esa temperatura. 
*/

#include <stdio.h>
#include <string.h>

int main(){
	
	int i=0, tmin=0, tmax=0, min=0, max=0;
	char fechamin[10], fechamin2[10], fechamax[10], fechamax2[10];
	
	
	do{
	printf ("Ingrese la fecha: ");
	fflush (stdin);
	scanf ("%s", fecha);
	printf ("Ingrese la temperatura minima: ");
	fflush (stdin);
	scanf ("%d", &min);
	printf ("Ingrese la temperatura maxima: ");
	fflush (stdin);
	scanf ("%d", &max);


	if (tmin<min)
	{
	min = tmin;
	strcpy (fechamin2, fechamin);
	}

	if (tmax<max)
	{
	max = tmax;
	strcpy (fechamax2, fechamax);
	
	}

	printf ("Para continuar ingrese 1. Para terminar ingrese 0: ");
	fflush (stdin);
	scanf ("%d", &i);


	}while (i == 1);
	
	printf ("El dia de mayor temperatura fue el %s con %d grados", fechamax2, max);	
	printf ("El dia de menor temperatura fue el %s con %d grados", fechamin2, min);
	
	return 0;
}
