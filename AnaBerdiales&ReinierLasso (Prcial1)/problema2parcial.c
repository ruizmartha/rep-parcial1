//Escriba un programa en C que lea un caracer y utilizando la instruccion switch determine si es o no una vocal
//(ya sea escrita en mayuscula o en minuscula debe aceptarla si es vocal). Si no es vocal debe imprimir no es vocal.
#include<stdio.h>
void main()
{
	char vocal[1];
	printf("Introduzca una vocal\n");
	scanf("%s",vocal);
	switch (vocal[0])
	{
		case 'a': 	case 'A':
		printf ("la letra es vocal \n");
		break;
	    case 'e':   case 'E':
		printf ("la letra es vocal \n");
		break;
		case 'i':	case 'I':
		printf ("la letra es vocal \n");
		break;
	    case 'o':   case 'O':
		printf ("la letra es vocal \n");
		break;
		case 'u':   case 'U':
		printf ("la letra es vocal \n");
		break;
		default:
		printf("La letra no es vocal \n");
	}
}
