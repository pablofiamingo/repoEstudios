//Ejercicio 12: Escribir en Pseudocodigo y codificar en C un programa que muestre los números impares entre 0 y 100 y que imprima cuantos impares hay.
#include <stdio.h>

int main (){
	
	int i, imp=0;
	
	for (i = 1; i <= 100; i = i + 2, imp++)
	printf ("\n%d", i);
	
	printf ("\nHay %d numeros impares", imp);
	
	return 0;
}
