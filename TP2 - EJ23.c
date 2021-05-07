/*Ejercicio 23.	Diseñar el algoritmo necesario para habiéndose leído el valor de 2 variables NUM1 y NUM2 se intercambien los valores de las variables,
es decir que el valor que tenía NUM1 ahora lo contenga NUM2 y viceversa.*/

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
