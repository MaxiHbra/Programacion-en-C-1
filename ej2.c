/*Ejercicio 6: Dados tres números naturales correspondientes a día, mes y año de una fecha, indicar si dicha fecha es válida.*/
#include <stdio.h>
int main() {
	int dia,mes,anio; /*Enteros para el ingreso*/
	printf("Por favor ingresar el dia en numero -> ");
	scanf("%d",&dia);
	printf("\nPor favor ingresar el mes en numero -> ");
	scanf("%d",&mes);
	printf("\nPor favor ingresar el anio en numero -> ");
	scanf("%d",&anio);
	if(anio>1900 && anio<=2024) /*Alternativa para filtrar año*/
		if(mes>0 && mes<13) /*Alternativa para filtrar mes*/
			if(dia>0 && dia<31) /*Alternativa para filtrar dia*/
				printf("\nLa fecha ingresada es valida");
			else printf("\nFecha no valida");
		else printf("\nFecha no valida");
	else printf("\nFecha no valida");
	return 0;
}


