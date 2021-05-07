//Clase 7 - Ejercicio 22
/*Primer Juego: hacer un programa donde declaremos una variable de tipo entero y la iniciamos con un valor entre 1 y 10.
Por teclado pedimos ingresar un numero e indicamos si ha acertado el valor del número escondido
(el valor de la variable inicializada).*/

#include <stdio.h>

main ()
{
	int n = 9;
	int x;
	
	printf ("Ingrese un numero del 1 al 10: ");
	scanf ("%i", &x);
	
	if (x > 10 || x <= 0)
	{
	printf ("\nEl valor ingresado es incorrecto. Debe ingresar un numero entre 1 y 10");
	} 
	
	else if (x == n) 
	{
	printf ("\nUSTED HA ACERTADO!!!");
	}
	
	else printf ("\nSIGA PARTICIPANDO");
	
	
	
	return 0;
}
