//Ejercicio 3: De 10 números ingresados indicar cuantos son mayores a cero y cuantos son menores a cero.

#include <stdio.h>

int main ()
{
	int numero, i=1, men=0, may=0;
	
	
	
	do{
		printf ("Ingrese un numero: ");
		scanf ("%d",&numero);
		
		if (numero < 0)
		men++;
		if (numero > 0)
		may++;
		
		
		i++;
	}while (i <= 10);
	
	
	
	printf ("Hay %d numeros menores a 0 y %d numeros mayores a 0", men, may);
	
		
	return 0;
}
