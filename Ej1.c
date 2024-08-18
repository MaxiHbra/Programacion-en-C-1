/*Ejercicio 5: Calcular la cantidad de horas, minutos y segundos que existen en una cantidad de segundos ingresada por el usuario.*/
#include <stdio.h>

int main() {
	int seg,hs,min; /*Variable entera para el ingreso de segundos, hora y minutos*/
	printf("Bienvenido, por favor ingresa la cantidad de segundos a calcular ->");
	scanf("%d",&seg); /*Ingreso de segundos*/
	hs=seg/3600; /*Divide los segundos ingresados por la equivalencia en hora*/
	min=(seg%3600)/60; /*El resto de las horas lo transforrma en minutos ya que es division entera*/
	seg=(seg%3600)%60; /*El resto de los minutos lo transforma a segundos*/
	printf("\n %d %d %d",hs,min,seg); /*salida*/
	return 0;
}

