#include<string.h>
#include<stdio.h>
int main() {
    char fecha[20], fecha2[20],fecha3[20];
    int tempmax= 0, tempmin= 0, temp2=0, temp=0;
    int i; 


    printf("\tTEMPERATURA DE TODA LA SEMANA");

    for(i=1; i<=7; i++){

    printf("\n\nDia %d\nfecha: ",i);

    scanf("%s",fecha);

    printf("\nDigite la temperatura mas alta: ");
    scanf("%d",&temp);
    printf("\nDigite la temperatura mas baja: ");
    scanf("%d",&temp2);



    if(temp>tempmax){


    strcpy(fecha2,fecha);

    tempmax= temp;


    }



        if(temp2 < tempmin){

        strcpy(fecha3,fecha);

        tempmin= temp2;


        }


        }


    fflush(stdin);

    printf("\n\nEl dia %s fue el mas frio con %d grados", fecha3,tempmin);
    printf("\nEl dia %s fue el mas caluroso con %d grados",fecha2, tempmax);



    return 0;
}
