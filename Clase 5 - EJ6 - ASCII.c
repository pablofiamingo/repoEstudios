//Imprimir caracteres ASCII

#include <stdio.h>
#include <conio.h>
main ()
{
	char a,b,c,d,e;
	
	printf ("Ingrese una palabra de 5 letras: ");
	scanf ("%c, %c, %c, %c, %c", &a, &b, &c, &d, &e);
	
	a= a+5;
	b= b+5;
	c= c+5;
	d= d+5;
	e= e+5;
		
	printf ("Las letras nuevas son: \n");
	printf ("%c %c %c %c %c", &a, &b, &c, &d, &e);
	

	return 0;
}
