//Ejercicio 21.	Escribir en Pseudocodigo y codificar en C un programa que muestre los números primos comprendidos entre 0 y 100. 

#include <stdio.h>

int main()
{
    int i, n, primo;

    for (n = 1 ; n <= 100 ; n++)
    {
        primo = 1;
        i = 2;

        while (i <= n / 2 && primo)
        {
            if (n % i == 0)
                primo = 0;

            i++;
        }

        if (primo)
            printf("%d ", n);
    }
}
