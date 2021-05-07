//Clase 7 - Ejercicio 14
//Que tome dos números del 1 al 5 y diga si ambos son primos.

#include <stdio.h>

main ()
{
	int n1, n2;
	
	printf ("Ingrese dos numeros enteros del 1 al 5: ");
	scanf ("%d %d", &n1, &n2);
	
	if (n1 < 1 || n1 > 5 || n2<1 || n2 > 5)
	{
		printf ("El valor ingresado es incorrecto. Debe ingresar dos numeros entre 1 y 5.");
	}
	else if (n1 != 4 && n2 !=4)
	{
	printf ("Ambos numeros son primos");
	}
		
	else printf ("Al menos uno de los numeros NO es primo.");
	

	return 0;
}
