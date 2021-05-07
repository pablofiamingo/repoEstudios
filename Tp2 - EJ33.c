/*Ejercicio 33.	Se ingresa por teclado la cantidad de agua caída, en milímetros día a día durante un mes.
Se pide determinar el día de mayor lluvia, el de menor y el promedio. */


#include <stdio.h>

int main (){
	
	int may = 0, men = 0, mm = 0, i = 1;
	float prom = 0;
	char fecha[10], fechamin[10], fechamax[10];
	

	do{
		printf ("\nIngrese la fecha: ");
		scanf ("%s", fecha);
		
		printf ("Ingrese el valor de lluvia en milimetros: ");
		scanf ("%d", &mm);
		
		if (mm < men) {
			men = mm;
			strcpy (fechamin, fecha);
		}
		if (mm > may){
			may = mm;
			strcpy (fechamax, fecha);
		}
		
			
		prom = prom + mm;
		i++;
		
	}while (i <=30);
	
	prom = prom / 30;
	
	printf ("\nEl dia de menor lluvia fue el %s con %d milimetros", fechamin, men);
	printf ("\nEl dia de mayor lluvia fue el %s con %d milimetros", fechamax, may);
	printf ("\nEl promedio de precipitaciones en el mes fue de %g", prom);
	
	
	return 0;
}
