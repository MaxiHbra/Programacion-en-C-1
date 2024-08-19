/*Dados tres números naturales que representan los ángulos internos de un triángulo, se pide determinar si el triángulo es Rectángulo (tiene un ángulo recto, de 90º), Obtusángulo (tiene un ángulo obtuso, más de 90º) o Acutángulo (tiene tres ángulos agudos, menos de 90º).*/
#include <stdio.h>
int main() {
	float a,b,c,op; /*Tipo de dato flotante*/
	op=0; /*Declaración del auxiliar como 0*/
	while(op==0 || op!=180){
		printf("\nPor favor ingresa el valor de los angulos: "); /*Ingreso de los angulos*/
		scanf("%f",&a);
		scanf("%f",&b);
		scanf("%f",&c);
		op=a+b+c; /*Suma de angulos para ver si cumplen con sumar 180*/
		if(op==180) /*Si no lo hacen se ingresa de nuevo*/
			printf("\nIngreso valido");
		else printf("\nIngreso invalido, intentelo de nuevo");
	}
	if(a==90 || b==90 || c==90) /*Alternativa para angulo recto*/
		printf("\nEs un triangulo rectangulo");
	else 
		if(a>90 || b>90 || c>90) /*Alternativa para angulo menor a 90*/
			printf("\nEs un triangulo obstusangulo");
		else printf("\nEs un triangulo acutangulo"); /*Si no existe angulo mayor a 90*/
	return 0;
}

