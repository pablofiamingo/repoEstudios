//Clase virtual: vectores (arreglos / arrays / matriz unidimensional)

/*Tipo nombre¨[tamaño]

*/
#include <stdio.h>

int main (){
	/*
	int VEC [6];//vector de 6 enteros>>>>> permite guardar 6 valores enteros
	float V [4];//vector de 4 flotantes>>>>>>>> pernite guardar 4 valores con decimal
	char palabra [20]; //vector de 20 caracteres>>>>>>>>>permite guardar 20 caracteres
	*/
	
	int VEC [10], i;
	
	
	//Ingreso los valores al vector
	for (i = 0; i < 10; i++){
		
			printf ("\n VEC[%d] = ", i);
		scanf ("%d", &VEC [i]);
		
		
	}
	
	//Muestro los valores
	
	printf ("\n\n");
	for (i = 0; i<10;i++)
	printf ("%3d", VEC [i]);
	
	
	
	
	
	
}
