//Macro

#include<stdio.h>
#define PI 3.1416
main () {
	int y;
	float nuevoPI;

	printf("Ingrese un valor para y: ");
	scanf ("%i", &y);

	printf ("El valor de PI es: %g\n", PI);

	nuevoPI = PI * y;

	printf ("El nuevo valor de PI es: %g", nuevoPI);

	return 0;
}
