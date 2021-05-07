// Ejercicio 1:	Ingresar 5 números y calcular su media.

#include <stdio.h>

int main (){
	
	int n1, n2, n3, n4, n5;
	float med;
	
	printf ("Ingrese 5 numeros enteros: ");
	scanf ("%i %i %i %i %i", &n1, &n2, &n3, &n4, &n5);
	
	med = (n1 + n2 + n3 + n4 + n5) / 5;
	
	printf ("\n La media es: %g", med);
	
	
	
	return 0;
}
