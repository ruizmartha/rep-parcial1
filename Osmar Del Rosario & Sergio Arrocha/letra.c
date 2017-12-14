#include<stdio.h>
void main(){
	char letra;
	printf("introduzca un letra\t");
	scanf("%c",&letra);
	if ('a'<=letra && letra <='z'){
		printf("la letra es minuscula");
	}else
		if('A'<=letra && letra<='Z'){	
		printf("la letra es mayuscula");
			}else
			printf("no pertenece al alfabeto");			
}
