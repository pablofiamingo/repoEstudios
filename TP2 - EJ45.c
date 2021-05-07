/*Ejercicio 45.	Un profesor de matemática de un establecimiento educativo registra década alumno N° de legajo, nombre y promedio.
Según el promedio desea saber cuántos alumnos aprobaron (promedio mayor o igual a 7), cuantos rinden en diciembre (promedio menor a 7
y mayor o igual a 4) y cuantos rinden en marzo (promedio menor a 4). Además, desea conocer el N° de legajo y nombre del alumno con mejor
promedio. 
*/

#include <stdio.h>
#include <string.h>

int main (){
	
	int apro = 0, dic = 0, mar = 0, i=1;
	float prom =0, may = 0;
	char nombre[15], nombre2[15], leg[10], legmay[10];
	
	do{
		printf ("\nIngrese el numero de legajo: ");
		fflush (stdin);
		scanf ("%s", &leg);
		
		printf ("Ingrese el nombre del alumno: ");
		fflush (stdin);
		scanf ("%s", nombre);
		
		printf ("Ingrese el promedio del alumno: ");
		fflush (stdin);
		scanf ("%g", &prom);
		
		
			if (prom > may){
			strcpy (nombre2, nombre);
			may = prom;
			strcpy (legmay, leg);
			}
				if (prom >= 7){
			apro++;
			}	
			else if (prom >= 4){
				dic++;
			}
			else mar++;
			
	printf ("\nPara ingresar los datos de un nuevo alumno, presione 1. Para terminar, presione 0.");
	scanf ("%d", &i);
	}while (i !=0);
	
	printf ("\nHay %d alumnos aprobados. ", apro);
	printf ("\nHay %d alumnos que deberan rendir en diciembre. ", dic);
	printf ("\nHay %d alumnos que deberan rendir en marzo", mar);
	
	printf ("\nEl alumno con el mayor promedio es %s, legajo nro. %s, con un promedio de %g", nombre2, legmay, may);
	return 0;
}
