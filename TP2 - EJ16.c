//Ejercicio 16.	Dise�ar un algoritmo que imprima y sume la serie de n�meros 3, 6, 9, 12, �.,99.

#include <stdio.h>

main (){
	int i = 3,suma = 0;
	
	while (i <= 99)
	{
	printf ("\n%d", i);
	suma = suma + i;
	i +=3;
	}
	
	printf ("\nLa suma total es: %d", suma);
	
	return 0;
}
