/*38.	De las 20 participantes de un concurso de belleza se van registrando de uno en uno los siguientes datos:
-Apellido y Nombre
-Puntos por inteligencia
-Puntos por cultura general
-Puntos por belleza
Se necesita informar por pantalla:
"	Apellido y nombre de la concursante de mayor puntaje general.
"	Puntaje acumulado por todas las participantes en Cultura general, en Inteligencia y en belleza.
"	De los tres puntajes acumulados en el ítem anterior cual fue el menor. 
*/

#include <stdio.h>
#include <string.h>

int main (){
	int i = 1, intel, cult, bell, tot, may, intgral, cultgral, bellgral, men;
	char nombre[20], nombre2 [20];
	

	
	do {
		printf ("Ingrese apellido y nombre de la participante: ");
		fflush (stdin);
		scanf ("%s", nombre);
		
		printf ("Ingrese los puntos por inteligencia: ");
		fflush (stdin);
		scanf ("%d", &intel);
		
		printf ("Ingrese los puntos por cultura general: ");
		fflush (stdin);
		scanf ("%d", &cult);
		
		printf ("Ingrese los puntos por belleza: ");
		fflush (stdin);
		scanf ("%d", &bell);
		
		tot = intel + cult + bell;
		
	if (tot > may)
	{
		may = tot;
		strcpy (nombre2, nombre);
	}
	
	intgral += intel;
	cultgral += cult;
	bellgral += bell;
	
	i++;
	}while (i<=20);
	
	
	
	printf ("\nLa participante de mayor puntaje general es %s con %d puntos.", nombre2, may);
	printf ("\nEl total acumulado de inteligencia es de %d.", intgral);
	printf ("\nEl total acumulado de cultura general es de %d.", cultgral);
	printf ("\nEl total acumulado de belleza es de %d.", bellgral);
	
	if (intgral < cultgral && intgral < bellgral) 
		printf ("\nEl puntaje menor fue el de inteligencia. ");
	else if (cultgral < intgral && cultgral < bellgral) 
		printf ("\nEl puntaje menor fue el de cultura general. ");
	else if (bellgral < intgral && bellgral < cultgral) 
		printf ("\nEl puntaje menor fue el de belleza");
	
	
	
	return 0;
}
