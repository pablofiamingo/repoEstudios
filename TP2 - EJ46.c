/*46.	Dise�ar un algoritmo que le presente al usuario u men� de opciones con las cuatro operaciones b�sicas
(suma, resta, multiplicaci�n, divisi�n). Seg�n la operaci�n elegida ingresara 2 n�meros enteros, se realizar� la misma y se mostrara
por pantalla el resultado. El usuario podr� trabajar en el programa hasta que indique lo contrario. Recordar que la divisi�n por cero es
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

