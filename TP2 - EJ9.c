/*Ejercicio 9: Dados ciertos centímetros como entrada de tipo decimal, escribir su equivalente a pies (enteros) y pulgadas (decimal),
dando las pulgadas con una precisión de 1 lugar decimal. Considerar 2.54 cm por pulgada y 12 pulgadas por pie.
La salida podrá ser: 333.3 cm son 10 pies y 11.2 pulgadas.*/

#include <stdio.h>

int main(){
	
	float cent, pul;
	int pie;
	
	
	printf ("Ingrese un valor en cent%cmetros: ", 161);
	scanf ("%g", &cent);
	
	pul = cent * 0.39370;
	pie = cent * 0.032808;
	
	printf ("\n%.1f cent%cmetros equivalen a %d pies y %.1f pulgadas.\n", cent, 161, pie, pul);
	
	return 0;
}
