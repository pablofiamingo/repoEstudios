//Clase 7 - Ejercicio 17
//Que tome tres números y diga si el tercero es el resto de la división de los dos primeros.


#include <stdio.h>

main ()
{
	int n1, n2, n3;
	
	printf ("Ingrese 3 numeros enteros: \n");
	scanf ("%d %d %d", &n1, &n2, &n3);
	
	if (n1 % n2 == n3) printf ("El tercer n%cmero es igual al resto de la divisi%cn de los dos primeros", 163, 162);
	else printf ("El tercer n%cmero NO es igual al resto de la divisi%cn de los dos primeros", 163, 162);
	
	
	
	return 0;
}
