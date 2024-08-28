/*Ejercicio 19: Dados N caracteres que representan un párrafo, conformados por letras, dígitos y
espacios en blanco. Se pide informar la cantidad de números naturales que se encuentran en el párrafo.
Nota: Considerar que el ingreso se realiza de a un carácter por vez
*/
#include <stdio.h>
int main() {
	int n,contN,i,b;
	char c;
	printf("\nPor favor ingresar el valor de N: ");
	scanf("%d",&n);
	contN=0; b=0; /*inicializar contador y bandera*/
	for(i=1;i<=n;i++){
		fflush(stdin); /*limpieza de buffer de teclado*/
		printf("\nPor favor ingresar el caracter: ");
		scanf("%c",&c);
		if(c>47 && c<58 && b==0) /*si c es un natural en codigo ACSII*/
			b=1; /*bandera en uno para seguir contando*/
		else if(b==1)
				if(!(c>47 && c<58)){ /*si dejo de ser numero contar como uno solo, de modo que pueda haber un numero ocupando mas de una casilla*/
			contN++;
			b=0;
		}
	}
	if(c>47 && c<58)contN++; /*si el ultimo caracter igual fue numero, contarlo*/
	printf("\nLa cantidad de numeros encontrados es de: %d",contN);
	return 0;
}

