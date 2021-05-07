//Ejercicio 5: Diseñar un algoritmo que calcule la superficie de un triángulo a partir del ingreso de su base y altura y muestre el resultado.

#include <stdio.h>

int main (){
	
	float base, altura, sup;
	
	printf ("\nIngrese la altura del tri%cngulo: ", 160);
	scanf ("%g", &altura);
	printf ("\nAhora ingrese la base: ");	
	scanf ("%g", &base);
	
	sup = base * altura / 2;
	
	printf ("\nLa superficie del tri%cngulo es: %g", 160, sup);
	
	
	return 0;
}
