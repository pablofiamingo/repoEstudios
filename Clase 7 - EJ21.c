/*Ejercicio 21.	Escribir en Pseudocodigo y codificar en C un programa que muestre los números primos comprendidos entre 0 y 100. */


#include <stdio.h>

int main (){
	
	int i, resto, primo;
	
	for (i = 1; i <=100; i++)
	{
		resto = 100 % i;
		
		if (resto == 0)
		{
		primo = 1;
		}
		
		if (primo ==1)
		printf ("\n%d ", resto);
		
		
	}
	
	return 0;
}
