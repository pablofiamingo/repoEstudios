/*30.	Realizar la tabla de multiplicar de un numero entre 0 y 10 de forma que se visualice de la siguiente forma:
4 X 1  = 4
4 X 2 = 8
*/

#include <stdio.h>

int main (){
	int i = 1, num=0, mult=0;
	
	printf ("Ingrese el numero entre 0 y 10 del cual desea saber su tabla: ");
	scanf ("%d", &num);
	
	if (num <=10)
	
	for (i = 1; i<=10; i++)
	{
	mult = i * num;	
	printf ("\n%d x %d = %d", num, i, mult);
	}
	
	else printf ("\nError. Debe ingresar un numero entre 0 y 10.");
	
	return 0;
}



