//crear un programa que calcule el indice de masa corporal (IMC)
#include <stdio.h>
#include <math.h>
void imc (float xa, float xp){
	float ximc;
	ximc=xp/(pow(xa,2));
	printf ("su indice de masa corporal es de:%f",ximc);
}
int main () //algoritmo principal
{
	float altura, peso;
	printf ("ingrese su altura:");
	scanf ("%f",&altura);
	printf ("ingrese su peso:");
	scanf ("%f",&peso);
	imc (altura, peso);
}
