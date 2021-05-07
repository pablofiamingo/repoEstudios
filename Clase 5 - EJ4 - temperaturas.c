//Escalas de temperatura

#include<stdio.h>

main ()
{
	int celsius, celsius2, fahrenheit, fahrenheit2, kelvin, kelvin2, temperatura;

	printf ("Ingrese un valor de temperatura: ");
	scanf ("%i", &temperatura);

	//Si ingresó Celsius
	
	fahrenheit = temperatura * 1.8 + 32;
	kelvin = temperatura + 273;
	
	printf ("Si usted ingreso la temperatura en Celsius, los resultados son los siguientes:\n");
	printf ("Fahrenheit: %i\n",fahrenheit); printf ("Kelvin: %i\n", kelvin);
	
	//Si ingresó Fahrenheit
	
	celsius = (temperatura - 32) / 1.8;
	kelvin2 = ((5 * (temperatura - 32)) / 9) + 273;
	
	printf ("\n\nSi usted ingreso la temperatura en Fahrenheit, los resultados son los siguientes:\n");
	printf ("Celsius: %i\n", celsius); printf ("Kelvin: %i\n", kelvin2);
	
	//Si ingresó Kelvin
	
	celsius2 = temperatura - 273;
	fahrenheit2 = 1.8 * (temperatura - 273) + 32;
	
	printf ("\n\nSi usted ingreso la temperatura en Kelvin, los resultados son los siguientes:\n");
	printf ("Celsius: %i\n", celsius2); printf ("Fahrenheit: %i\n", fahrenheit2);
	
	return 0;
}
