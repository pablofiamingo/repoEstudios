/*Ejercicio 8:	Escribir el algoritmo que permita leer un numero decimal que representa una cantidad de grados Celsius y convierta dicho valor
a la cantidad equivalente en grados Fahrenheit. La salida del programa puede ser de la siguiente forma: 100 grados Celsius son 212 grados Fahrenheit. */

#include <stdio.h>

int main ()
{
	float cel, fah;
	
	printf ("Ingrese el valor en grados Celsuis: ");
	scanf ("%g", &cel);

	fah = (cel * 1.8) + 32;
	
	printf ("%g%c Celsius equivalen a %g%c Fahrenheit.", cel, 248, fah, 248);
		
	
	return 0;
}
