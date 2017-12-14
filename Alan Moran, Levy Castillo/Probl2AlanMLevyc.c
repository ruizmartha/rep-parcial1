#include<stdio.h>
// Alan Moran 2-743-743, Levy Castillo 8-923-1709
void main()
{
	char letra;
	printf("Introduzca una letra\n");
	scanf("%c",&letra);
	
	if(letra>='A' && letra<='Z')
{
	printf("La letra %c es mayuscula",letra);
}
else if(letra>='a' && letra <='z'){
printf("La letra %c es minuscula\n",letra);
}
else
printf("Este caracter no pertenece al alfabeto\n");
}
