//Ejercicio 4: Operaciones aritm�ticas

#include <stdio.h>

main()
{
	
	int var1, var2, resultado;
	var1 = 2;
	var2 = 11;
	
	//Suma
	resultado = var1 + var2;
	printf ("%d + %d = %d\n", var1, var2, resultado);
	
	//Resta
	resultado = var2 - var1;
	printf ("%d - %d = %d\n", var2, var1, resultado);
	
	//Producto
	resultado = var1 * var2;
	printf ("%d * %d = %d\n", var1, var2, resultado);
	
	//Divisi�n entera
	resultado = var2 / var1;
	printf ("%d / %d = %d\n", var2, var1, resultado);
	
	//Resto de la divisi�n
	resultado = var2 % var1;
	printf ("Resto (de %d/%d) = %d \n", var2, var1, resultado);
	
	return 0;
	
	

}
