/*Ejercicio 12: Dada una lista con las edades de N deportistas, se necesita informar la edad promedio
de los deportistas de la lista; cuál es la menor y mayor edad ingresada*/
#include <stdio.h>
int main() {
	int n,prom,may,men,i,edad; /*Variables necesarioas*/
	may=0;
	men=100;
	prom=0;
	printf("\nPor favor ingresar el valor de N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){ /*ciclo incondicionado porque conozco el valor de N*/
		printf("\nPor favor ingresar la edad del deportista: ");
		scanf("%d",&edad);
		prom=prom+edad; /*guardar en prom las edades*/
		if(edad>may) /*si es mayor que el mayor, asignarlo como referente*/
			may=edad;
		else if(edad<men) men=edad; /*si es menor que el menor, asignarlo como referente*/
	}
	prom=prom/n; /*calculo de promedio */
	printf("\nEl promedio de las edades ingresadas es: %d",prom);/*muestras*/
	printf("\nLa mayor edad ingresada es: %d",may);
	printf("\nLa menor edad ingresada es: %d",men);
	return 0;
}

