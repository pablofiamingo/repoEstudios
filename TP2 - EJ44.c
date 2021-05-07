/*Ejercicio 44.	Escribir un programa que determine si un año es bisiesto. Un año es bisiesto si es múltiplo de 4.
Los años múltiplos de 100 no son bisiestos, salvo si ellos también son múltiplos de 400 (2000 es bisiesto, pero 1900 no).*/

#include <stdio.h>

int main(){
	
	int bis, a;
	
	printf ("Ingrese el a%co: ", 164);
	scanf ("%d", &a);
	
	if (a % 4 == 0) printf ("\nEl a%co %d es bisiesto.", 164, a);
	else printf ("El a%co %d NO es bisiesto. ", 164, a);
	
	
	return 0;
}

