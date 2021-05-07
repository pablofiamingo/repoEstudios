//Sacar promedio de 3 numeros

#include<stdio.h>

int main ()
{
	int a, b, c, resultado;
	
	printf ("Digite los 3 numeros: ");
	scanf ("%d %d %d", &a, &b, &c);
	
	resultado = (a+b+c)/3;
	 printf ("El resultado del promedio es: %i", resultado);
	
	
	
	
	return 0;
}
