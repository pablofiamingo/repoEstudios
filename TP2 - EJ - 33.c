/*33.	Se ingresa por teclado la cantidad de agua ca�da, en mil�metros d�a a d�a durante un mes. Se pide determinar el d�a de mayor lluvia,
el de menor y el promedio. */

#include <stdio.h>

int main (){
	
	int mm=0, i, may=0, men=0, prom=0;
	
	do
	{
	printf ("Ingrese el valor de agua caida en milimetros: ");
	scanf ("%d", &mm);
	
	if (mm < men)
	men = mm;
	
	if (mm > may)
	may = mm;
	
	prom += mm;
	
	prom = prom/30;
	
	i++;
	}while (i<=30);

	
	return 0;
}
