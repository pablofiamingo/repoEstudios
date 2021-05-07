//Ejercicio 6: Otras operaciones

#include <stdio.h>
#include <math.h>
main ()
{
	int x,y;
	x = 10;
	y = 2;
	
	//OTRAS OPERACIONES
	
	//Potencia
	x = pow (y,x);
	printf ("El valor de y elevado a x es = %i\n",x);

	//Raiz cuadrada
	x = sqrt (x);
	printf ("La raiz cuadrada de x = %i \n", x);

	//x = x + y	
	x += y;
	printf ("El valor de x + y = %i\n", x);
	
	//x = x - y
	x -= y;
	printf ("El valor de x - y= %i \n", x);
	
	//x = x * y
	x *= y;
	printf ("El valor de x * y= %i \n", x);
	
	//x = x / y
	x /= y;
	printf ("El valor de x / y= %i\n",x);
	
	//x = x % y
	x %= y;
	printf ("El valor de x resto y= %i \n",x);
	
	//x++ = x + 1
	x++;
	printf ("EL valor de x++ es: %i\n",x);
	
	//x-- = x - 1
	x--;
	printf ("El valor de x-- es: %i\n",x);
	
	
	
	return 0;
}
