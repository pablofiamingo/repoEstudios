/*Ejercicio 10: Escribir en Pseudocodigo y codificar en C un programa que lea 20 caracteres.
Luego de la lectura indicar cuantas "a" se ingresaron, cuantas "e, i, o, u"*/

#include <stdio.h>

main ()
{
	char c;
	int cont, a=0, e=0, i=0, o=0, u=0;

	for (cont=1; cont <= 20; cont++)
	
	{
	printf ("Ingrese una letra: ");
	fflush (stdin);
	scanf ("%c", &c);
	
	
	if (c == 'a' || c == 'A') {a++;}
	else if (c == 'e' || c == 'E') {e++;}
	else if (c == 'i' || c == 'I') {i++;}
	else if (c == 'o' || c == 'O') {o++;}
	else if (c == 'u' || c == 'U') {u++;}
	}
	
	
	
		
	printf ("\nHay %d letras A", a);
	printf ("\nHay %d letras E", e);
	printf ("\nHay %d letras I", i);
	printf ("\nHay %d letras O", o);
	printf ("\nHay %d letras U", u);
	
	return 0;
}
