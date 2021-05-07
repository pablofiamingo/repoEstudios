//Clase 7 - Ejercicio 7
//Que solo permita introducir los caracteres S y N.



#include <stdio.h>


main ()
{
	char a;
	
	printf ("Introduzca una letra: ");
		scanf ("%c",&a);

	if (a == 's' || a == 'n') {
		printf ("El caracter ingresado es correcto\n");
	}
		else {
			printf ("El caracter ingresado es incorrecto\n");
}
}


