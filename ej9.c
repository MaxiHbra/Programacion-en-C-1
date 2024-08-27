/*Ejercicio 13: Dada una lista de N números enteros y dos valores enteros, A y B. Se pide informar cuántos números naturales de la lista son sólo múltiplo de A y cuántos son múltiplos sólo de B.*/
#include <stdio.h>
int main() {
	int n,a,b,contA,contB,i,aux; /*variables a utilizar*/
	printf("\nPor favor ingresar el valor de N: "); /*Ingreso*/
	scanf("%d",&n);
	printf("\nPor favor ingresar el valor de A: ");
	scanf("%d",&a);
	printf("\nPor favor ingresar el valor de B: ");
	scanf("%d",&b);
	contA=0;contB=0; /*defino los contadores para luego incrementar sin basura de memoria*/
	for(i=1;i<=n;i++){
		printf("\nPor favor ingresar un numero entero: ");
		scanf("%d",&aux);
		if(aux%a==0) /*si el resto de la division entera entre el ingresado y el valor a evaluar es 0, son multiplos*/
			contA++;
		else if(aux%b==0)
			contB++;
	}
	printf("\nDe los numeros ingresados, %d son multiplos de %d y %d son multiplos de %d",contA,a,contB,b);
	return 0;
}

