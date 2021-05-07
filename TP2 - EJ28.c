/*28.	Dados 3 números donde le primero y el ultimo son límites de un intervalo, indicar si el tercero pertenece a dicho intervalo. */

#include <stdio.h>

main (){
	int n1, n2, n3;
	
	printf ("Ingrese 3 numeros enteros:\n");
	scanf ("%d %d %d", &n1, &n2, &n3);
	
	if (n1 > n3 && n3 > n2) printf ("\nEl tercer numero esta comprendido entre el primero y el segundo");
		else if (n2 > n3 && n3 > n1) printf ("\nEl tercer numero esta comprendido entre el primero y el segundo");
		 else printf ("\nEl tercer numero NO pertenece al intervalo comprendido entre los dos primeros.");
	
	
	
	return 0;
}

