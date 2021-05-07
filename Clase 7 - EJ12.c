//Clase 7 - Ejercicio 12
//Que pida tres números e indicar si el tercero es igual a la suma del primero y el segundo.

#include <stdio.h>

main ()
{
	int a,b,c;
	
	printf ("Ingrese 3 numeros enteros: \n");
	scanf ("%d %d %d", &a, &b, &c);
	
	if (c == (b + a)) printf ("El tercer numero es igual a la suma de los dos primeros");
	else printf ("El tercer numero NO es igual a la suma de los dos primeros");
	
	
	return 0;
}
