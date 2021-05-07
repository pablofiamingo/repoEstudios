//Clase 7 - Ejercicio 10
//Que pida tres números y detecte si se han introducido en orden decreciente.


#include <stdio.h>

main ()
{
	int a, b, c;
	
	printf ("Ingrese 3 numeros enteros: \n");
	scanf ("%i %i %i", &a, &b, &c);
	
	if (a>b && b>c) printf ("El orden de los numeros ingresados es decreciente");
		
	else printf ("El orden de los numeros ingresados NO es decreciente");
	
	return 0;
}
