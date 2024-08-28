/*Ejercicio 18: Dados N caracteres que representan un párrafo, conformados solamente por letras y
espacios en blanco. Se pide informar la cantidad de vocales y la cantidad de consonantes que tiene el 
párrafo, también la cantidad de palabras que se encontraron.
Nota: Entre las letras del párrafo no hay vocales acentuadas y las palabras se separan por un solo
espacio en blanco. Considerar que el ingreso se realiza de a un carácter por vez.*/
#include <stdio.h>
int main() {
	char c;
	int contV,contC,contP,n,i;
	printf("\nPor favor ingresar el valor de N: ");
	scanf("%d",&n);
	contV=0;contC=0;contP=0; /*inicializar en 0 contadores*/
	for(i=1;i<=n;i++){
		fflush(stdin); /*funcion para limpiar el buffer del teclado e ingresar de forma correcta los caracteres*/
		printf("\nPor favor ingresar el caracter: ");
		scanf("%c",&c);
		if(c>=065 && c<=122){ /*utilizando codigo acsii del abecedario mayusculas y minusculas*/
			if(c==65 || c==69 || c==73 || c==79 || c==85 || c==97 || c==101 || c==105 || c==111 || c==117 || c==65)contV++; /*identificando vocales*/
			else contC++;
		}
		else if(c==' ')contP++; /*si encuentra espacio, separar palabras*/
	}
	if(c!=' ')contP++; /*si el ultimo caracter no fue un espacio, contar como palabra*/
	printf("\nLa cantidad de vocales ingresadas son: %d \nLa cantidad de consonantes ingresadas es: %d \nLa cantidad de palabras ingresadas es: %d",contV,contC,contP);
	return 0;
}

