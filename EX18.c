#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    float dolar, real;

    setlocale(LC_ALL, "portuguese");

    printf("Digite um valor em dólares: ");
    scanf("%f", &dolar);

    real = dolar * 5.42;

    printf(" %.2f US$ = %.2f R$", dolar, real);

    system("pause");
    return 0;
}