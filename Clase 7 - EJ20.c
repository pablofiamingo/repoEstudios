//Clase 7 - Ejercicio 20
/*Que lea un importe en bruto y calcule su importe neto, si es mayor de 15.000 se le aplicara un 16% de impuestos,
en caso contrario se aplicara un 10%. */

#include <stdio.h>

main ()
{
	float importe, total;
	
	printf ("Ingrese el importe: ");
	scanf ("%g", &importe);
	
	if (importe <= 15000){
	total = importe * 1.1;
	printf ("\nEl importe neto es: %g", total);
	}
	
	else {
	total = importe * 1.16;
	printf ("\nEl importe neto es: %g", total);
	
	}

	
	return 0;
}
