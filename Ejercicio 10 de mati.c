#include<stdio.h>
int main() {
	char letra;
	int i, la=0, le=0, li=0;
	int lo=0, lu=0;
	
    for(i= 0; i< 20; i++)
	{
	
	fflush(stdin);
	printf("Ingrese una letra: ");
	scanf("%c", &letra);

    if(letra == 'a'){
    
	la++;}
		
    else if( letra =='e') {
    
    le++;}
		
		
		
	else if(letra =='i' ){
		
	li++;}	
		
	else if (letra== 'o'){
		
	lo++;}
	
	else if( letra == 'u'){
		
	lu++;	
		
	}
	
	}
	
	printf("\n\n\t**RESULTADO**");
	
	printf("\n\nnumero de a = %d", la);
	printf("\nnumero de e = %d", le);
	printf("\nnumero de i = %d", li);
	printf("\nnumero de o = %d", lo);
	printf("\nnumero de u = %d", lu);
	
	
	
	
	
	return 0;
}
