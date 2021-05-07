//Ejercicio 7:	Hacer el algoritmo que nos permita introducir un numero por teclado y nos informe si es par o impar.

#include <stdio.h>


main ()
{
	int n;
	
	printf ("Ingrese un n%cmero: ", 163);
	scanf ("%d", &n);
	
	if (n % 2 == 0){
		printf ("El n%cmero %d es par.", 163, n);
	}	else printf ("El n%cmero %d es impar.", 163, n);
	
	
	return 0;
}
