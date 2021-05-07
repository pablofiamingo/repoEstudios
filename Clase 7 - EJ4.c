//Clase 7 - Ejercicio 4
//Que pida 3 números y los muestre en pantalla de menor a mayor.


#include <stdio.h>

int main ()
{
	int n1, n2, n3;
	
	printf ("Ingrese 3 numeros naturales diferentes entre si: ");
	scanf ("%d %d %d", &n1, &n2, &n3);
	
	if (n1<n2 && n1<n3) {
		if (n2<n3) printf ("El orden es %d %d %d", n1, n2, n3);
			else printf ("El orden es %d %d %d", n1, n3, n2);
	}
	
	if (n2<n1 && n2<n3) {
		if (n1<n3) printf ("El orden es: %d %d %d", n2, n1, n3);
		else printf ("El orden es: %d %d %d", n2, n3, n1);
	}
	
	if (n3<n2 && n3< n1) {
		if (n2<n1) printf ("El orden es %d %d %d", n3, n2, n1);
		else printf ("El orden es %d %d %d", n3, n1, n2);
	}
	
	return 0;
}
