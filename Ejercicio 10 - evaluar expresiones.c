//Ejercicio 10: evaluar expresiones

#include <stdio.h>

main ()
{
	int A = 5;
	int B = 3;
	int C = 12;
	
	printf ("La respuesta a si A > 3 vale: %i\n", A > 3);
	printf ("La respuesta a si A > C vale: %i\n", A > C);
	printf ("La respuesta a si A < C vale: %i\n", A < C);
	printf ("La respuesta a si B < C vale: %i\n", B < C);
	printf ("La respuesta a si B != C  vale: %i\n", B != C);
	printf ("La respuesta a si A == 3 vale: %i\n", A == 3);
	printf ("La respuesta a si A*B == 15 vale: %i\n", A*B == 15);
	printf ("La respuesta a si A * B == -30 vale: %i\n", A * B == -30);
	printf ("La respuesta a si C / B < A vale: %i\n", C / B < A);
	printf ("La respuesta a si C/B == -10 vale: %i\n", C/B == -10);
	printf ("La respuesta a si C / B == -4 vale: %i\n", C / B == -4);
	printf ("La respuesta a si A + B + C == 5 vale: %i\n", A + B + C == 5);
	printf ("La respuestab a si (A + B == 8) && (A - B == 2) vale: %i\n", (A + B == 8) && (A - B == 2));
	printf ("La respuesta a si (A + B == 8) || (A - B == 6) vale: %i\n", (A + B == 8) || (A - B == 6));
	printf ("La respuesta a si (A > 3 && B > 3 && C < 3) vale: %i\n", (A > 3 && B > 3 && C < 3));
	printf ("La respuesta a si A > 3 && B >= 3 && C < -3 vale: %i\n", A > 3 && B >= 3 && C < -3);
	
	
	
	return 0;
}
