//Clase 7 - Ejercicio 15
//Que tome dos números y diga si ambos son pares o impares.

main ()
{
	int a, b;
	
	printf ("Ingrese dos numeros enteros: ");
	scanf ("%d %d", &a, &b);
	
	if (a % 2 == 0 && b % 2 == 0) printf ("Los numeros ingresados son pares");
	else if (a % 2 != 0 && b % 2 != 0) 
	printf ("Los numeros ingresados son impares");
	else
	printf ("Al menos uno de los numeros ingresados es impar");
}
