/*Ejercicio 23.	Dise�ar el algoritmo necesario para habi�ndose le�do el valor de 2 variables NUM1 y NUM2 se intercambien los valores de las variables,
es decir que el valor que ten�a NUM1 ahora lo contenga NUM2 y viceversa.*/

#include <stdio.h>

int main (){
	
	int NUM1, NUM2, aux;
	
	printf ("Ingrese un valor para NUM1: ");
	scanf ("%d", &NUM1);
	printf ("Ingrese un valor para NUM2: ");
	scanf ("%d", &NUM2);
	aux = NUM1;
	NUM1 = NUM2;
	NUM2 = aux;
	
	printf ("\nEl valor de NUM1 es: %d", NUM1);
	printf ("\nEl valor de NUM2 es: %d", NUM2);
	
}
