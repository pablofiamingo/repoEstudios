//Ejercicio 34.	Hacer un algoritmo que imprima el mayor y el menor de una serie de 5 números que vamos introduciendo por teclado.

#include <stdio.h>

int main (){
	int num, i =1, men = 0, may = 0;
	
	do{
		printf ("Introduzca un numero: ");
		scanf ("%d", &num);
		
		if (num > may)
		may = num;
		
		if (num < men)
		men = num;
		
		i++;
	}while (i <= 5);
	
	printf ("\nEl mayor numero es: %d", may);
	printf ("\nEl menor numero es: %d", men);
	
	
	return 0;
}
