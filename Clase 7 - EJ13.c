//Clase 7 - Ejercicio 13
/*Que muestre un menú que contemple las opciones "Archivo", "Buscar", y "Salir",
en caso de que no se introduzca una opción correcta se notificará por pantalla.*/

#include <stdio.h>

main ()
{
	int menu;
	
	
	printf ("Selecione una opcion: \n 1 - Archivo\n 2 - Buscar\n 3 - Salir\n\n");
	scanf ("%d", &menu);
	
	
	if (menu != 1 && menu != 2 && menu != 3) printf ("\nLa opcion ingresada es incorrecta\n");
	else printf ("\nLa opcion ingresada es correcta\n");
	
	
	
}
