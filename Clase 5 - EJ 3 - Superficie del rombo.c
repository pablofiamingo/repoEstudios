//Area del rombo

#include <stdio.h>

int main ()
{
	int d1, d2, sup;
	
	printf ("Ingrese los valores de las diagonales del rombo: ");
	scanf ("%i %i", &d1, &d2);
	
	sup = d1 * d2 / 2;
	
	printf ("El valor del area del rombo es: %i\n", sup);
	
	
	return 0;
}
