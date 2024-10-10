#include<stdio.h>
int main() {
    int  i, n;
    int max, min, num;
    min=0;
    max=0;
    printf("Cuantos numeros desea ingresar? \n");
    scanf("%d", &n);
    if (n <= 0){
        printf ("La cantidad debe ser mayor a 0 payaso \n");
    }
    printf("Escriba los numeros: \n");
    for (i = 0; i < n; i++){
        scanf("%d", &num);
        if (i == 0){
            max = num;
            min = num;
        }
        if (num > max){
            max = num;
        }
        if (num < min){
            min = num;
        }
    }
    printf("El maximo de la lista es: %d\n", max);
    printf("El minimo de la lista es: %d\n", min);
    return 0;
}
