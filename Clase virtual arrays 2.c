//Vectores VC

#include <stdio.h>

int main ()
{
	
	int VEC [10], i;
	int ACUM = 0;
	float PROM;
	
	//Ingresar valores
	
	for (i =0; i < 10; i++)
	{
	printf ("\nVEC[%d] = ", i);
	scanf ("%d", &VEC[i]);
	}

	/*calcular promedio*/
	for (i = 0; i < 10; i++)
	ACUM = ACUM + VEC[i];
	PROM = ACUM / 10;

	printf ("\n\nEl promedio es %f", PROM);
	
	
}
