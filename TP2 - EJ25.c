/*Ejercicio 25.	Dise�ar en Pseudocodigo y codificar en C un algoritmo que permita registrar de los empleados de una f�brica
(no se sabe cu�ntos) su peso y saber cu�ntos pesan hasta 80 Kg. inclusive y cu�ntos pesan m�s de 80 kg.*/

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



