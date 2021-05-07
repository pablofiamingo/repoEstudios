//Ejercicio 4:	Diseñar un algoritmo que calcule la longitud de la circunferencia y el área del circulo de radio dado.

#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main ()
{
	float radio, area, circ;
	
	printf ("Ingrese el valor del radio: ");
	scanf ("%g", &radio);
	
	area = PI * pow (radio,2);
	
	circ = 2 * PI * radio;
	
	printf ("\nEl area del circulo es: %g", area);
	printf ("\nLa longitud de la circunferencia es: %g", circ);
	
	
	return 0;
}
