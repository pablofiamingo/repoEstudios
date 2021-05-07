//Ejercicio 8: Operadores lógicos

#include <stdio.h>

main ()
{
	int A = 5;
	int B = 7;
	int C = 2;
	int D = 5;
	
	// (A == B) && (A < C)
	printf ("Pregunta (A == B) && (A < C) vale %d\n", (A == B) && (A < C));
	
	// (A == 5) || (A > 7)
	printf ("Pregunta (A == 5) || (A > 7) vale %d\n", (A == 5) || (A > 7));
	
	// !(A == 5)
	printf ("Pregunta !(A == 5) vale %d\n",!(A == 5));
	
	
	return 0;
}
