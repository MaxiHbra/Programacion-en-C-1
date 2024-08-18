/*Ejercicio 7: Dadas las estaturas de tres personas, calcular la estatura promedio. No utilizar ciclos*/
#include <stdio.h>
int main() {
	float med1; /*Variables flotantes para el ingreso de estatura*/
	float op; /*Variable flotante para guardarr datos*/
	printf("Por favor ingresar la primera estatura en cm-> ");
	scanf("%f",&med1);
	op=med1; /*Auxiliar para suma*/
	printf("\nPor favor ingresar la segunda estatura en cm-> ");
	scanf("%f",&med1);
	op+=med1;
	printf("\nPor favor ingresar la tercera estatura en cm -> ");
	scanf("%f",&med1);
	op=(op+med1)/3; /*Divide en 3 para sacar promedio*/
	printf("\nEl promedio de las estaturas ingresadas es -> %f cm",op);
	return 0;
}

