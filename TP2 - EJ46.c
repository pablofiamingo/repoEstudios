/*46.	Diseñar un algoritmo que le presente al usuario u menú de opciones con las cuatro operaciones básicas
(suma, resta, multiplicación, división). Según la operación elegida ingresara 2 números enteros, se realizará la misma y se mostrara
por pantalla el resultado. El usuario podrá trabajar en el programa hasta que indique lo contrario. Recordar que la división por cero es
indeterminada.*/

#include <stdio.h>

int main (){
	int op, n1, n2;
	float res;
	printf ("Elija la operacion que desea realizar: \n 1. Suma\n 2. Resta\n 3. Multiplicacion\n 4. Division\n");
	scanf ("%d", &op);
	
	printf ("Ingrese los numeros con los que desea hacer el calculo: ");
	scanf ("%d %d", &n1, &n2);
	
	if (op == 1)
		res = n1 + n2;
		else if (op == 2)
			res = n1 - n2;
				else if (op == 3)
					res = n1 * n2;
						else if (op == 4)
							res = n1 / n2;
								else printf ("\nLa operacion ingresada es invalida. ");
	
	printf ("\nEl resultado es: %g ", res);
	
	
	
	return 0;
}

