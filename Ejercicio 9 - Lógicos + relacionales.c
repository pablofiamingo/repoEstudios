//Ejercicio 9: Lógicos + relacionales

#include <stdio.h>

main ()
{
	
	int a = 3;
	int b = 5;
	int c = 3;
	int resultado;
	
	resultado = !((a < b) && (b <c));
	printf ("La pregunta !((a < b) && (b <c)) vale %i\n", resultado);
	
	resultado = (a < b) || (b < c);
	printf ("La pregunta (a<b) || (b<c) vale %i\n", resultado);
	
	resultado = !(a != c);
	printf ("La pregunta !(a!=c) vale %i\n", resultado);	
	
	return 0;
}
