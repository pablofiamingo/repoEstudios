/*Ejercicio 47.	La fecha de Pascua corresponde al primer domingo despu�s de la primera luna llena que sigue el equinoccio de primavera,
y se calcula con las siguientes expresiones:
A = a�o mod 19
B = a�o mod 4
C = a�o mod 7
D = (19*A + 24) mod 30
E = 2*B + 4*C + 6*D +5) mod 7
N = (22 + D E)
En el que N indica el n�mero del d�a de marzo (o abril si N > 31) correspondiente al domingo de Pascua.
Realizar un programa que calcule esa fecha para los a�os 2018 y 2019. 
*/
int main(){

    int a,A,B,C,D,E,n;

    printf("Escriba el a%co: ", 164);
    scanf("%d", &a);

    A = a % 19;
    B = a % 4;
    C = a % 7;
    D = (19* A + 24) % 30;
    E = (2*B + 4*C + 6*D +5) % 7;
    n = (22 + D + E);

    if (n > 31)
        printf("\nLa fecha corresponde a un domingo de pascua.");
        else
        printf("\nLa fecha NO corresponde a un domingo de pascua.");


}
