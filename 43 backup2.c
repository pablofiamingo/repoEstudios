/*43.	En un club se registran de uno en uno los siguientes datos de sus socios:
Numero de socio
Apellido y Nombre
Edad
Tipo de deporte que practica (1. Tenis, 2. Rugby, 3. Vóley, 4. Hockey, 5. Fútbol, 6. Paddle)
Diseñar en Pseudocódigo un algoritmo que permita emitir por pantalla cuantos socios practican tenis y cuantos paddle
y el promedio de edad de los jugadores de cada deporte. 
*/




#include <stdio.h>
#include <string.h>

int main (){
	int i=0, soc=0, edad, prompad=0, promten = 0, dep, ten=0, pad=0;
	char nombre[25];
	
	do {
	printf ("\nIngrese el numero de afiliado: ");
	fflush (stdin);
	scanf ("%d", &soc);
	
	printf ("\nIngrese el apellido y nombre: ");
	fflush (stdin);
	scanf ("%s", nombre);
	
	printf ("\nIngrese la edad: ");
	fflush (stdin);
	scanf ("%d", &edad);
	
	printf ("\nIngrese el numero correspondiente al deporte que practica el afliado: \n1. Tenis\n2. Rugby\n3. Voley\n4. Hockey\n5. Futbol\n6. Paddle\n");
	fflush (stdin);
	scanf ("%d", &dep);
	
	if (dep == 1) {		
		promten += edad;
		ten++;
			}
	if (dep == 6){
		prompad += edad;
		pad++;
	}
	printf ("Para continuar, ingrese 1. Para terminar, 0: ");
	scanf ("%d", &i);
	
	}while (i == 1);
	
	promten = promten / ten;
	prompad = prompad / pad;
	
	printf ("\nLa cantidad de socios que practican tenis es de %d, y su promedio de edad es de %d a%cos", ten, promten, 164);
	printf ("\nLa cantidad de socios que practican paddle es de %d, y su promedio de edad es de %d a%cos", pad, prompad, 164);
	
	return 0;
}
