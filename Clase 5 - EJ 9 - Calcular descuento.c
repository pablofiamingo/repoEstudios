//Ingreso de un descuento

#include <stdio.h>


int main (){
	
	float valor1, valor2, descuento, resultado;
	
	printf ("Ingrese el valor de la factura: ");
	scanf("%g", &valor1);
	
	printf ("Ingrese el porcentaje de descuento: ");
	scanf ("%g", &descuento);
	
	valor2 = valor1 * (descuento / 100);
	
	resultado = valor1 - valor2;
	
	printf ("El monto total a pagar es de: %g", resultado);
	
	
	
	return 0;
}
