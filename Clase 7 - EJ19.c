//Clase 7 - Ejercicio 19
//Que pase de Kg a otra unidad de medida de masa, mostrar en pantalla un menú con las opciones posibles.

#include <stdio.h>

main () {
	float kg, libra, onza, tonelada;
	int x;

	printf ("Ingrese el valor en kilogramos: \n");
	scanf ("%g", &kg);

	libra = kg * 2.2046;
	onza = kg * 35.274;
	tonelada = kg / 1000;

	printf ("Ingrese en que unidad desea la respuesta: \n");
	printf (" 1. Libra\n 2. Onza\n 3. Tonelada\n");
	scanf ("%i", &x);

	switch (x) {
		case 1:
			printf ("El valor en libras es: %g", libra);
			break;
		case 2:
			printf ("El valor en onzas es: %g", onza);
			break;
		case 3:
			printf ("El valor en toneladas es: %g", tonelada);
			break;
		default:
			printf ("El dato ingresado es incorrecto");
	}

	return 0;
}
