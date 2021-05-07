//Ejercicio 5: Operadores de asignación

#include <stdio.h>

main ()
{
	int x, y;
	
	x = 10;
	y= 2;
	
	x = x + y;
	printf ("El valor de x + y = %i \n", x);
	
	x = x - y;
	printf ("El valor de x - y = %i\n", x);
	
	x = x * y;
	printf ("El valor de x * y =%i\n", x);
	
	x = x / y;
	printf ("El valor de x / y =%i\n", x);
	
	x = x % y;
	printf ("El valor de x resto y = %i\n", x);
	
	
}
