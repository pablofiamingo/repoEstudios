//Clase 7 - Ejercicio 18
/*Que muestre un men� donde las opciones sean "Equil�tero", "Is�sceles" y "Escaleno",
pida una opci�n y calcule per�metro del tri�ngulo seleccionado.*/

#include <stdio.h>

main ()
{
	int lado1, lado2, lado3, perimetro;
	
	printf ("Seleccione un tipo de tri%cngulo: ", 160);
	printf ("\n 1. Equil%ctero\n 2. Is%csceles\n 3. Escaleno: \n", 160, 162);
	system ("pause");
	
	printf ("Ingrese la longitud de los 3 lados del tri%cngulo: \n", 160);
	scanf ("%d %d %d", &lado1, &lado2, &lado3);
	
	perimetro = lado1 + lado2 + lado3;
	
	printf ("El per%cmetro del tri%cngulo es de %d ", 161, 160, perimetro);
	
	return 0;
}
