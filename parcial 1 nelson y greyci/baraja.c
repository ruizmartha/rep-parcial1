#include <stdio.h>
void main ()
{
int a;
printf ("Introduzca un numero: ");
scanf ("%d",&a);
switch (a)
{
case 1:
		printf ("La baraja es As");
	break;
	case 2 ... 9:
		printf ("no es as ni figura");
	break;
	case 10:
		printf (" La baraja es Sota");
	break;
	case 11 :
		printf ("La baraja es Caballo");
	break;
	case 12:
		printf (" La baraja es Rey");
	break;
	 default:
	 printf ("Este no es un numero de una carta de la baraja española");
}
}

	


