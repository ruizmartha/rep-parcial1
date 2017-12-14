#include <stdio.h>

void main (){
	
	char v;
	
	printf ("\n INTRODUZCA UN CARACTER = ");
	scanf ("%c", &v);
	
	switch (v){
			case 'a':
			case 'A':
				printf ("EL CARACTER (%c) ES UNA VOCAL ", v);
				break;

			case 'e':
			case 'E':
				printf ("EL CARACTER (%c) ES UNA VOCAL ", v);
				break;
				
			case 'i':
			case 'I':
				printf ("EL CARACTER (%c) ES UNA VOCAL ", v);
				break;
				
			case 'o':
			case 'O':
				printf ("EL CARACTER (%c) ES UNA VOCAL ", v);
				break;	
				
			case 'u':
			case 'U':
				printf ("EL CARACTER (%c) ES UNA VOCAL ", v);
				break;
				
			default :
				printf ("EL CARACTER INGRESADO (%c) NO ES UNA VOCAL", v);			
				
				
	}
}
