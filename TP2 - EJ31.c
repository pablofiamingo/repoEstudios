/*Ejercicio 31.	Hacer un algoritmo que luego de ingresar 2 n�meros por teclado, imprima los n�meros naturales que hay entre ambos empezando
por el m�s peque�o, contar cuantos n�meros hay y cu�ntos de ellos son pares. */

#include <stdio.h>

main (){
	int i, n1, n2, par=0, cont=0;
	
	printf ("Ingrese el numero mas bajo: ");
	scanf ("%d",&n1);
	printf ("Ingrese el numero mas alto: ");
	scanf ("%d", &n2);
	
	for (i=n1; i<=n2; i++)
	{
	printf ("\n%d", i);
	cont++;
	if (i%2 ==0)
	{
	par++;
	}
	}
	
	printf ("\n\nEntre %d y %d inclusive hay %d numeros.", n1, n2, cont);
	printf ("\n\nHay %d numeros pares entre %d y %d", par, n1, n2);
	return 0;
}
