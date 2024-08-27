/*Ejercicio 16: Dado un número natural K de dos cifras, se pide mostrar los números naturales primos
que le anteceden. Por ejemplo, si K= 12 la salida será {2, 3, 5, 7, 11).*/
#include <stdio.h>
int main() {
	int i,k,pd,cont,aux;
	printf("\nPor favor ingrese K (RECUERDE QUE DEBE SER UN NATURAL DE DOS CIFRAS)" );
	scanf("%d",&k);
	aux=k;
	cont=0;
	while(aux!=0){ /*contador de cifras*/
		cont++;
		aux=aux/10;
	}
	pd=2;
	if(cont==2){ /*verificacion del contador de cifras*/
		for(i=1;i<=k;i++){ /*ciclo incondicionado hasta el numero dado para recorrer todos los primos antecesores*/
		while(pd<=i/2 && i%pd!=0) /*componente determinacion de primos*/
			pd++;
		if(pd>(i/2) && i!=1) 
			printf("%d ",i); /*imprimir primo*/
		}
	}
	else printf("\nEl numero ingresado no cumple con el requisito de dos cifras.");
	return 0;
}
