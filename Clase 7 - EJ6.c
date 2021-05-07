//Clase 7 - Ejercicio 6
//Que pida un número y diga si es positivo o negativo.

#include <stdio.h>

main ()
{
	int a;
	
	printf ("Ingrese un numero entero: ");
	scanf ("%d", &a);
	
	if (a>0) 
	printf ("El numero ingresado es positivo");
		
	else if (a==0) printf ("El numero ingresado es el 0, por lo cual es neutro");
	else printf ("El numero ingresado es negativo");
		
	
	
	return 0;
}
