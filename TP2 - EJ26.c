/*Ejercicio 26.	En una tienda de art�culos para caballeros al final del d�a se cargan en la computadora las boletas
que confeccionaron los distintos vendedores para saber cu�nto fue la comisi�n del d�a de cada uno de ellos.
Los datos que se ingresan (por boleta) son: el n�mero de vendedor y el importe. Cuando no hay m�s boletas para cargar se ingresa 0.
Teniendo en cuanta que el ejercicio tiene 3 vendedores y que el porcentaje sobre las ventas es del 5%,
indicar cuanto gano cada vendedor en el d�a.
*/


#include<stdio.h>
int main() {
	int imp,bol,ventas;
	int com1=0, com2=0, com3=0;
	
	while (bol!=0) {
	
	printf("\n\nIngrese numero de vendedor. Para terminar, ingrese 0: ");
	scanf("%d", &bol);
	if(bol ==0) break;
	
	printf("\ningrese el importe obtenido: ");
	
	scanf("%d", &imp);

	ventas= imp *0.05;
		

	if(bol== 1){
		
		com1= imp * 0.05;	
		
	}
		
	if(bol ==2){
		
		com2= imp *0.05;	
		
	}
		
	if(bol==3){
		
		com3= imp *0.05;	
		
	}

	}
	
 	 printf("\nvendedor 1: %d \nVendedor 2: %d\nVendedor 3: %d",com1, com2, com3);	
	
	
	return 0;
}
