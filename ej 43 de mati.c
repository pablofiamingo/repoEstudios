/*43.En un club se registran de uno en uno los siguientes datos de sus socios:
Numero de socio
Apellido y Nombre
Edad
Tipo de deporte que practica (1. Tenis, 2. Rugby, 3. Vóley, 4. Hockey, 
5. Fútbol, 6. Paddle)
Diseñar en Pseudocódigo un algoritmo que permita emitir por pantalla 
cuantos socios (practican tenis  ycuantos paddle)
 y el promedio de edad de los jugadores de cada deporte.*/
#include<stdio.h>
#include<string.h>
int main() {
	char apellido[20],nombre[20];
	int socio, deporte=0, edad=0; 
	int tenis=0, rugby=0, voley=0, hockey=0;
	int futbol=0, paddle=0;
	int promtenis=0, promrugby=0, promfutbol=0;
	int promvoley=0, promhockey=0, prompaddle=0;
	int salir=1;
	int edadtenis=0, edadrugby=0, edadfutbol=0;
	int edadvoley=0, edadhockey=0, edadpaddle=0;
	
	
	while(salir==1){
	
	
	printf("Digite el numero de socio: ");
	scanf("%d",&socio);
	printf("\nDigite el apellido del socio: ");
	scanf("%s", apellido);
	printf("\nDigite el nombre del socio: ");
	scanf("%s", nombre);
	printf("\nQue deporte practica?: ");
	scanf("%d", &deporte);
	fflush(stdin);
	
	
	
	if(deporte== tenis){
		
	edadtenis= edadtenis + edad;
	tenis++;	
		
	}
	
	if(deporte== rugby){
		
	edadrugby= edadrugby + edad;
	rugby++;	
		
	}
	
	if(deporte== voley){
		
	edadvoley= edadvoley + edad;
	
	voley++;	
		
	}
	
	if(deporte== futbol){
		
	edadfutbol= edadfutbol + edad;
	futbol++;	
		
	}
	
	if(deporte== hockey){
	
	edadhockey= edadhockey + edad;	
	hockey++;	
		
	}
	
	if(deporte== paddle){

	edadpaddle= edadpaddle + edad;	
	paddle++;	
		
	}
	
	system("cls");
	
	printf("\nDesea continuar?");
	printf("\n\n1:continuar\n2:salir: ");
	fflush(stdin);
	scanf("%d", &salir);
	
	
	}
	
	
	promtenis= edadtenis/ tenis;
    promvoley= edadvoley/ voley;
	promfutbol= edadfutbol/ futbol;
	promhockey= edadhockey/ hockey;
	prompaddle= edadpaddle/ paddle;
	promrugby= edadrugby/ rugby;
	
	
	
	
	printf("Hay %d jugadores de tenis y %d  de paddle", tenis, paddle);
	
	printf("\n\nEl promedio de edad de los socios de tenis es: %d ",promtenis);
	printf("\nEl promedio de edad de los socios de voley es: %d ",promvoley);
	printf("\nEl promedio de edad de los socios de futbol es: %d ",promfutbol);
	printf("\nEl promedio de edad de los socios de hockey es: %d ",promhockey);
	printf("\nEl promedio de edad de los socios de paddle es: %d ",prompaddle);
	printf("\nEl promedio de edad de los socios de rugby es: %d ",promrugby);
	
	
	
	
	return 0;
}
