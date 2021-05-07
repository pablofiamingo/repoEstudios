/*Ejercicio 11: Realizar un algoritmo que permita ingresar un número correspondiente a los días de una semana y muestre el nombre del día.
Que se permita trabajar hasta que el usuario indique lo contrario.*/

#include <stdio.h>

main (){
	int dia, i=0;
	
	
	while (dia != 0){
		printf ("\nIngrese el n%cmero de d%ca. Para salir, ingrese 0: ", 163, 161);
	scanf ("%d", &dia);
	
		if (dia != 0){
			switch (dia){
				case 1: printf ("Lunes.\n"); break;
				case 2: printf ("Martes\n"); break;
				case 3: printf ("Mi%crcoles\n", 130); break;
				case 4: printf ("Jueves\n"); break;
				case 5: printf ("Viernes\n"); break;
				case 6: printf ("S%cbado\n,", 160); break;
				case 7: printf ("Domingo\n"); break;
				default: printf ("El valor ingresado es incorrecto. Debe ingresar un n%cmero entre 1 y 7.\n", 163);	
	}	
	
	
	}	else printf ("\nHa elegido salir del programa.");
	
	}
	
	
	return 0;
}
