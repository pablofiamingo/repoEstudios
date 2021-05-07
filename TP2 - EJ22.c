/*Ejercicio 22.	Diseñar en Pseudocodigo y codificar en C un algoritmo que permita ingresar 10 números, ninguno de ellos igual a cero.
Se pide sumar los positivos, obtener el producto de los negativos y luego mostrar ambos resultados.*/

int main (){
	
	int i =0, num=0, suma =0, prod =1;
	
	do{
		printf ("Ingrese un numero distinto a 0: ");
		scanf ("%d", &num);
		if (num < 0) 
		prod = prod * num;
		
		if (num > 0)
		suma = suma + num;
		i++;
		
	}while (i < 10);
	
	printf ("\nEl resultado de la suma es: %d", suma);
	printf ("\nEl resultado del producto es: %d", prod);
	
	return 0;
}
