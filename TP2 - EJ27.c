/*Ejercicio 27.	Ingresar por teclado 3 números correspondientes a los lados de un triángulo.
Teniendo en cuenta que la suma de los dos lados menores tiene que ser superior al lado mayor para que formen un triángulo,
indicar si los números indicados forman un triángulo y si lo forman que tipo de triangulo es (según sus lados).*/

#include <stdio.h>

main ()
{
	float l1, l2, l3;
	
	
	printf ("Ingrese el valor del primer lado: ");
	scanf ("%g", &l1);
	printf ("Ingrese el valor del segundo lado: ");
	scanf ("%g", &l2);
	printf ("Ingrese el valor del tercer lado: ");
	scanf ("%g", &l3);
	
	if(l1+l2<l3 || l2+l3<l1 || l1+l3<l2)
		printf ("\nNo puede formarse un triangulo.");
	else if (l1 == l2 && l1 == l3) printf ("\nEl triangulo es equilatero");
		else if (l1 == l2 || l1 == l3 || l2 == l3) printf ("\nEl triangulo es isosceles");
			else if (l1 != l2 && l1 != l3 && l2 != l3) printf ("\nEl triangulo es escaleno");
			
	
	return 0;
}

