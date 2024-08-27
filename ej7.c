/*Ejercicio 11: Dado un dígito, mostrar su nombre, ej 0 mostrar “cero”, 1 mostrar “uno”, 2 mostrar “dos”, etc*/
#include <stdio.h>
int main() {
	int n;
	printf("\nPor favor ingresar un numero de un digito: ");
	scanf("%d",&n);
	switch(n){
	case 0 : printf("\ncero.");break;
	case 1 : printf("\nuno.");break;
	case 2 : printf("\ndos.");break;
	case 3 : printf("\ntrres.");break;
	case 4 : printf("\ncuatro.");break;
	case 5 : printf("\ncinco.");break;
	case 6 : printf("\nseis.");break;
	case 7 : printf("\nsiete.");break;
	case 8 : printf("\nocho.");break;
	case 9 : printf("\nnueve.");break;
	default : printf("\nInvalido.");break;
	}
	return 0;
}

