#include <stdio.h>
void main(){
	char letra;
	printf("introduzca una letra:");
	scanf("%c",&letra);
	switch (letra) {
	
		case 'A':
		printf("la letra es vocal",letra);
		break;
		case'e':
		printf("la letra es vocal",letra);
		break;
		case'i':
		printf("la letra es vocal",letra);
		break;
		case'o':
		printf("la letra es vocal",letra);
		break;
		case'u':
		printf("la letra es vocal",letra);
		break;
		default:
		printf("la letra no es vocal",letra);
	}
}
