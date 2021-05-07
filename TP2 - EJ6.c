//Ejercicio 6: Hacer el algoritmo que nos permita introducir un numero por teclado y nos informe si es positivo o negativo.

#include <stdio.h>

int main ()
{
	int n;
	
	printf ("Ingrese un n%cmero: ", 163);
	scanf ("%d", &n);
	
	
	if (n == 0) {
		printf ("El n%cmero ingresado es 0, por lo cual es neutro.", 163);
	}
	else if (n < 0) {
		printf ("El n%cmero %d es negativo", 163, n);
	}
	else printf ("El n%cmero %d es positivo", 163, n);
	

	return 0;
}
