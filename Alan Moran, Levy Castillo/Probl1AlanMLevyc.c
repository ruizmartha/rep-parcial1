#include<stdio.h>
// Alan Moran 2-743-743, Levy Castillo 8-923-1709
void main()
{
int a,menu;

printf("Introduzca un numero \n");
scanf("%d",&menu);

switch(menu)
{
case 1:
{
	printf("As\n");
	break;
}
case 10:
{
	printf("Sota\n");
	
	}
	break;	
	
case 11:
{
	printf("Caballo\n");
	}
	break;
	
case 12:
{
	printf("Rey\n");
}
break;

case 2 ... 9:{
	
	printf("No es as ni figura\n");	
}
break;
default:
	
printf("Este no es un numero de una carta de baraja espanola\n");
}	


}
