#include<stdio.h>
void main(){
	char letra;
	printf("escriba una letra: ");
	scanf("%c",&letra);
	if(letra>='A'&&letra<='Z')
	printf("la letra es mayuscula");
    else if(letra>='a'&&letra<='z')
	printf("la letra es minuscula");
	else
	printf("no pertenece al alfabeto");
}
