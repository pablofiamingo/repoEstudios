//Ejercicio 20:	Hacer el algoritmo que nos permita contar los múltiplos de 3 desde la unidad hasta un número que introducimos por teclado.

#include <stdio.h>

main (){
	int i = 3, mult = 0, num;
	
	printf ("Ingrese un numero:\n");
	scanf ("%d", &num);
	
	while (i <= num)
	{
	mult++;
	i +=3;	
	}

	
	printf ("\nHay %d multiplos de 3", mult);
	
	
	
	return 0;
}
