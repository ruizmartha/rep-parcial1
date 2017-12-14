#include<stdio.h>
void main(){
	char letra, vocal;
	printf("introduzca la letra\n");
	scanf(" %c", &letra);
	switch (letra){
	case 'a':
		printf("es una vocal");
	break;
	case 'e':
		printf("es una vocal");
	break;
		case 'i':
		printf("es una vocal");
	break;
		case 'o':
		printf("es una vocal");
	break;
		case 'u':
		printf("es una vocal");
	break;
default:
	printf("no es vocal\n");	
} 
}
