//Ejercicio 18:	Ingresar un número, entero y efectuar la suma de todos los números que le anteceden, comenzando desde 0 y mostrar el resultado por pantalla.

#include <stdio.h>

main (){
	int numero, i, suma = 0;
	
	printf ("Ingrese un numero entero: ");
	scanf ("%d", &numero);
	
	for (i = 0; i <= numero; i++)
	
	suma += i;
	
	printf ("La suma total es %d", suma);
	
	return 0;
}
