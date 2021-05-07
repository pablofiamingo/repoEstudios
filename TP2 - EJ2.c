/*Ejercicio 2: Escribir el algoritmo necesario para calcular y mostrar el cuadrado de un número.
El numero debe ser mayor que cero, en caso de error que aparezca el mensaje "ERROR, el numero debe ser mayor que cero."*/

#include <stdio.h>
#include <math.h>

int main (){
	int x, y;
	
	printf ("Ingrese un numero mayor a cero: ");
	scanf ("%d", &x);
	
	if (x > 0)
	{y = pow (x, 2); printf ("\nEl cuadrado de %d es %d.\n", x, y);
	}
	
	else printf ("ERROR, el numero debe ser mayor a 0");	
	
	
	return 0;
}
