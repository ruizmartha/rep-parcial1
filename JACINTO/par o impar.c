#include <stdio.h>
void main(){
	int i;
	printf("introduzca un numero");
	scanf("%d",i);
	if(i%2==0){
		printf("el nuemro es par");
		if(i%3==0){
			printf ("el numero es multiplo de 3");
		}
	}
	else {
		printf("el numero es impar");
	}
	return 0;
}
