#include <stdio.h>

void main (){
	int v;
	
	printf ("\n DIGITE UN NUMERO PARA DETERMINAR SI ES PAR O IMPAR = ");
	scanf ("%d", &v);
	
	if (v%2==0){
		printf ("\n EL VALOR %d ES PAR",v);
		if (v%3==0){
			printf ("\n Y DIVICIBLE POR 3");	
			
		}
	}
	else if (v%2!=0) {
	printf ("\n EL VALOR ES IMPAR");	
		
	}
	
	
	
}
