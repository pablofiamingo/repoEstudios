//Ejercicio 19.	Hacer el algoritmo que imprima todos los n�meros naturales que hay desde la unidad hasta un n�mero que introducimos por teclado.

#include <stdio.h>

int main (){
	
	int i, num;
	
	printf ("Ingrese un numero: ");
	scanf ("%d", &num);
	
	
	
	for (i=1; i<=num; i++)
	
	printf ("\n%d", i);
	
	
	
	return 0;
}
