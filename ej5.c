/*Ejercicio 9: Se desea calcular el importe que debe pagar un automovilista al estacionar su vehículo
en la playa, si es motocicleta, paga el importe correspondiente a la tarifa básica según cantidad de
horas que estacionó en la playa; si es automóvil paga el doble de la tarifa básica y si es camioneta
paga el triple Dada la hora de entrada y de salida de un vehículo indicar el importe a pagar. La fracción
de hora se paga como hora entera. Considerar que las horas de entrada y salida son del mismo día.*/
#include <stdio.h>
int main() {
	int entrada, horaF; 		/*variables enteras, entarda para el ingreso del vehiculo y horaF/hora final para el calculo de horas*/
	float horaE, horaS, aux; 		/*variables flotantes para el ingreso de horas y variable auxiliar para el calculo de decimal*/
	const int tarifaB=10; 		/*tarifa constante*/
	printf("\nIngresar 1 si usted deja una motocicleta. \nIngresar 2 si usted deja un vehiculo. \nIngresar 3 si usted deja una camioneta. \n"); /*mostrar y pedir datos*/
	scanf("%d",&entrada);
	printf("Por favor ingresa la hora de entrada: ");
	scanf("%f",&horaE);
	printf("Por favor ingresa la hora de salida: ");
	scanf("%f",&horaS);
	horaE=horaS-horaE; /*obtener las horas de estancia*/
	if(horaE>0 && (entrada==1 || entrada==2 || entrada==3)){ /*si el resultado de horas es positivo y ademas si se ingreso bien el vehiculo, realizar el trabajo*/
		aux=horaE-(int)horaE; /*restar el flotante por su casteo en entero para obtenerr los decimales de horas*/
		if (aux>0) 			/*si existen tales decimales contarlos como si fuera una hora mas como aclara la consigna*/
			horaE=(int)horaE+1;
		horaF=horaE; 			/*se guarda en un entero el valor final para empezar a imprimir*/
		switch(entrada){ 		/*estructura de control switch por ser mas eficaz en este enunciado*/
			case 1 : printf("\nEl monto a pagar por una moticleta es: $%d", tarifaB*horaF); break; 
			case 2 : printf("\nEl monto a pagar por un automovil es: $%d", tarifaB*2*horaF); break; 
			case 3 : printf("\nEl sonto a pagar por una camioneta es: $%d",tarifaB*3*horaF); break;
		}
	}
	else printf("\nIngreso invalido"); /*si las horas fueron mal ingresadas o el vehiculo, imprimir mensaje*/
	return 0;
}
/*Se puede remplazar la verificacion del vehiculo por otro if exclusivo para los operadores logicos para tener una lectura mas sencilla del programa*/

