/*Ejercicio 25.	Diseñar en Pseudocodigo y codificar en C un algoritmo que permita registrar de los empleados de una fábrica
(no se sabe cuántos) su peso y saber cuántos pesan hasta 80 Kg. inclusive y cuántos pesan más de 80 kg.*/

#include <stdio.h>

int main(){
	
	int may = 0, men = 0, peso = 0;
	
	
	do
	{
		printf ("Ingrese el peso del empleado. Para finalizar ingrese 0: ");
		scanf ("%d", &peso);
		
		if (peso <= 80)
		men ++;
		
		if (peso > 80)
		may ++;
		
	}while (peso !=0);	
	
	men--;
	
	printf ("\nHay %d empleados que pesan menos de 80 kg y %d que pesan mas de 80 kg. ", men, may);
	
	
	
	return 0;
}



