//Circunferencia del círculo

#include <stdio.h>
#define PI 3.1416


int main (){
	
	float circ;
	float radio;
	float superficie;
	
	printf ("Ingrese el valor del radio del circulo: ");
	scanf ("%f", &radio);
	circ = 2 * PI * radio;
	superficie = PI * radio * radio;
	
	
	printf ("El valor de la circunferencia es de: %g\n", circ);
	printf ("El valor de la superficie es de: %g\n", superficie);
	
	return 0;
}
