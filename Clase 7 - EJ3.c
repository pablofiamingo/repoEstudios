//Clase 7: ejercicio 3
/*Escribe un programa que acepte tres números, horas, minutos y segundos,
y devuelva la hora que será dentro de un segundo, controlando que sea una hora correcta.*/


#include <stdio.h>

main() {
	int horas, minutos, segundos;

	printf ("Ingrese el numero de horas: ");
	scanf ("%i", &horas);
	printf ("Ingrese el numero de minutos: ");
	scanf ("%i", &minutos);
	printf ("Ingrese el numero de segundos: ");
	scanf ("%i", &segundos);

	if ( horas >= 0 && horas <= 23 && minutos >= 0 && minutos <= 59 && segundos >= 0 && segundos <= 59 )
	{
		segundos ++;
		if ( segundos == 60 )
		{
			segundos = 0;
			minutos ++;
			if ( minutos == 60 )
			{
				minutos = 0;
				horas ++;
				if ( horas == 24 )
					horas = 0;
			}
		}


		printf("La hora un segundo despues es: %.2i:%.2i:%.2i", horas, minutos, segundos);
	} else
		printf("La hora ingresada es incorrecta.");


	return 0;
}
