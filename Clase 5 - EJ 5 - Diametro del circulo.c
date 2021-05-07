//Calcular el diametro de un circulo conociendo su superficie

#include<stdio.h>
#include<math.h>
#define PI 3.1416


int main ()
{
	float radio, area, diametro;
	
	printf ("Ingrese el valor de la superficie del circulo:");
	scanf ("%g", &area);
	
	radio = sqrt (area / PI);
	
	diametro = radio * 2;
	
	printf ("El valor del diametro es de: %g", diametro);	
	
	
	
	
	return 0;
}
