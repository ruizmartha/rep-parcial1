#include<stdio.h> 
void main(){
	int opc;
	
	printf("Introduzca un numero de la baraja \n");
	scanf("%d", &opc);
	switch(opc){
		case 1:
			printf("AS");
			break;
		case 2 ... 9:
			printf("No es figura");
			break;
	
		case 10:
			printf("SOTA");
			break;
		case 11:
			printf("CABALLO");
			break;
		case 12:
			printf("REY");
			break;
	default: printf("Este no es un numero de una carta de la baraja espanola");
	}
}
