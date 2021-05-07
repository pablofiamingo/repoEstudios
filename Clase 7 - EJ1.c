//Clase 7, ejercicio 1:
//Que pida un número del 1 al 12 y diga el nombre del mes correspondiente.

#include <stdio.h>

main () {
	int x;

	printf ("Ingrese un numero del 1 al 12: ");
	scanf ("%i", &x);

	switch (x) {

		case 1:
			printf ("Enero");
			break;
		case 2:
			printf ("\nFebrero");
			break;
		case 3:
			printf ("\nMarzo");
			break;
		case 4:
			printf ("\nAbril");
			break;
		case 5:
			printf ("\nMayo");
			break;
		case 6:
			printf ("\nJunio");
			break;
		case 7:
			printf ("\nJulio");
			break;
		case 8:
			printf ("\nAgosto");
			break;
		case 9:
			printf ("\nSeptiembre");
			break;
		case 10:
			printf ("\nOctubre");
			break;
		case 11:
			printf ("\nNoviembre");
			break;
		case 12:
			printf ("\nDiciembre");
			break;
		default:
			printf ("El dato ingresado es incorrecto");
	}




}
