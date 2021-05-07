//Clase 7 - Ejercicio 16
//Que tome tres números y diga si la multiplicación de los dos primeros es igual al tercero.

#include <stdio.h>

main ()
{
	int n1, n2, n3;
	
	printf ("Ingrese 3 numeros enteros: \n");
	scanf ("%d %d %d", &n1, &n2, &n3);
	
	if (n1 * n2 == n3) printf ("La multiplicaci%cn de los dos primeros numeros es igual al tercer numero", 162);
	else printf ("La multiplicaci%cn de los dos primeros numeros NO es igual al tercer numero", 162);
	
	
	
	return 0;
}
