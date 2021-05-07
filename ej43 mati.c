#include<stdio.h>
#include<string.h>
int main() {
	char apellido[20],nombre[20];
	int socio, deporte, edad=0; 
	int tenis=0, rugby=0, voley=0, hockey=0;
	int futbol=0, padle=0;
	int promtenis=0, promrugby=0, promfutbol=0;
	int promvoley=0, promhockey=0, prompadle=0;

	
	int salir=1;
		
	while(salir==1){
		
	printf("Digite el numero de socio: ");
	scanf("%d",&socio);
	printf("\nDigite el apellido del socio: ");
	scanf("%s", apellido);
	printf("\nDigite el nombre del socio: ");
	scanf("%s", nombre);
	printf("\nDigite la edad del socio: ");
	scanf("%d", &edad);
	fflush(stdin);
    printf ("\nIngrese el numero correspondiente al deporte que practica el afliado: \n1. Tenis\n2. Rugby\n3. Voley\n4. Hockey\n5. Futbol\n6. Paddle\n");
	scanf("%d", &deporte);
	fflush(stdin);
	
	
	
	if(deporte== 1){
		
	promtenis+= edad;
	tenis++;	
	
    promtenis= promtenis/ tenis;
		
	}
	
	if(deporte== 2){
		
	promrugby+= edad;
	rugby++;	
	
	promrugby= promrugby / rugby;	
	}
	
	if(deporte== 3){
		
	promvoley+= edad;
		
	voley++;	
	promvoley= promvoley/ voley;	
	}
	
	if(deporte== 4){
		
	promfutbol+= edad;
	futbol++;	
	
	promfutbol= promfutbol/ futbol;	
	}
	
	if(deporte== 5){
	
	promhockey+= edad;
	
	hockey++;	
	
	promhockey= promhockey/ hockey;	
	}
	
	if(deporte== 6){

	prompadle+= edad;	
	
	prompadle= prompadle/ padle;
	padle++;	
		
	}
	
	system("cls");
	
	printf("\nDesea continuar?");
	printf("\n\n1:continuar\n2:salir: ");
	fflush(stdin);
	scanf("%d", &salir);
	fflush(stdin);
	
	}
	   
  
   
	
	
	
   

	
	printf("Hay %d jugadores de tenis y %d  de padle", tenis, padle);
	
	printf("\n\nEl promedio de edad de los socios de tenis es: %d ",promtenis);
	printf("\nEl promedio de edad de los socios de voley es: %d ",promvoley);
	printf("\nEl promedio de edad de los socios de futbol es: %d ",promfutbol);
	printf("\nEl promedio de edad de los socios de hockey es: %d ",promhockey);
	printf("\nEl promedio de edad de los socios de paddle es: %d ",prompadle);
	printf("\nEl promedio de edad de los socios de rugby es: %d ",promrugby);
	
	return 0;
}
