
#include <stdio.h>


int main() {
	
	int num;
	
	
	printf("Escriba un numero(1-7)para saber el dia \n\n(0)para salir");
	
	scanf("%d",&num);
	
	while(num!= 0){
		
		num++;
		
		printf("\n\nIngrese otro numero: ");
		
		scanf("%d",&num);
	    
	
		
		if(num == 1)
		
		
		{ printf("\nDia lunes"); }
	                         	
	
	 
			if(num == 2)
		
			{ printf("\nDia martes"); }
		
		
	
		
		if(num == 3)
		
			{ printf("\nDia miercoles"); }
		
		
		
		if(num == 4)
			
			{ printf("\nDia jueves"); }
		
		
		if(num == 5)
		
			{ printf("\nDia viernes"); }
		
		
		
		if(num == 6)
			
			{ printf("\nDia sabado"); } 
		
		
		
		if(num== 7)
		
		{ printf("\nDia domingo"); }
		
		
	
	}	
		
			
	return 0;
}
