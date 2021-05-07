/*Ejercicio 17: Escribir en Pseudocodigo y codificar en C un programa que muestre los múltiplos de 2 y de 3
y de ambos comprendidos entre 0 y 100.*/

#include <stdio.h>

int main ()
{
	int i2, i3;
	
	printf ("\nMultiplos de 2: \n");
	
	for (i2 = 2; i2 <= 100; i2 += 2)
	printf ("\n%d", i2);

	printf ("\n\nMultiplos de 3: \n");
	
	for (i3 = 3; i3 <= 100; i3 += 3)
	printf ("\n%d", i3);
	
	return 0;
}
