/*Ejercicio 7: Escribir la cabecera e implementar módulos que realicen las siguientes operaciones:
a) Calcular la cantidad de divisores naturales de un número natural X.
b) Determinar si un número natural X es primo.
c) Comparar dos números reales A y B, devolviendo 1 si A>B; 0 si A=B o -1 si A<B.
d) Invertir un número entero X.
Probar los módulos mediante un programa que presente un menú con las cuatro operaciones implementadas. */
#include <stdio.h>

int menu();
int div_nat(int);
void primo(int);
int comparar(float,float);
int invertir(int);
void ingreso_ent(int*);
void ingreso_real(float*);

int main() {
	int x,opc;
	float a,b;
	do{
		opc=menu();
		switch(opc){ 
		case 1 : ingreso_ent(&x);
			if
			printf("\nLa cantidad de divisores naturales de %d es: %d",x,div_nat(x)); 
			break;
		case 2 : ingreso_ent(&x);
			primo(x);
			break;
		case 3 : ingreso_real(&a);
			ingreso_real(&b);
			if(comparar(a,b) == 1) 
			printf("\n%f > %f",a,b);
			else if(a==b) printf("\n%f = %f",a,b);
			else printf("\n%f < %f",a,b);
			break;
		case 4 : ingreso_ent(&x);
		printf("\n%d invertido es: %d",x,invertir(x)); break;
		default : printf("\nUsted salio del programa."); break;
		}
	}while(opc != 0);
	return 0;
}
int menu(){ 
	int opc;
	printf("\nIngresar 1 para calcular la cantidad de divisores naturales de un número natural X.");
	printf("\nIngresar 2 para determinar si un número natural X es primo.");
	printf("\nIngresar 3 para comparar dos números reales.");
	printf("\nIngresar 4 para invertir un número entero X.");
	printf("\nIngresar 0 para salir.\n ");
	scanf("%d",&opc);
	return opc;
}
int div_nat(int x){
	int cont,i;
	cont=1;
	for(i=2;i<=x;i++){
		if(x%i==0)cont++;
	}
	return cont;
}
void primo(int x){
	int pd=2;
	while(pd<=(x/2) && x%pd != 0) pd++;
	if(pd>(x/2) && x!=1)printf("\n%d es primo",x);
	else printf("\n%d no es primo",x);
}
int comparar(float a,float b){
	int band;
	if(a>b) band=1;
	else if(a==b) band=-1;
		 else band=0; 
	return band;
}
int invertir(int x){
	int inv,aux,dig;
	dig=0;
	inv=0;
	aux=x;
	while(aux!=0){
		dig=aux%10;
		inv=inv*10+dig;
		aux=aux/10;
	}
	return inv;
}
void ingreso_ent(int* x){
	printf("\nPor favor ingrese un entero: ");
	scanf("%d",x);
}
void ingreso_real(float* x){
	printf("\nPor favor ingrese un real: ");
	scanf("%f",x);
}
