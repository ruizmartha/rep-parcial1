#include<stdio.h>
void main()
{
	int a;
	printf("Introduzca un numero: \n");
	scanf("%d",&a);
	if(a %2 ==0){
		printf("El numero %d es par \n",a);
	}else{
		printf("El numero %d es impar \n",a);
	}
	if(a %3 ==0){
		printf("El numero es multiplo de 3 \n");
	}else{
		printf(" %d No es multiplo de 3 \n",a);
	}
}

