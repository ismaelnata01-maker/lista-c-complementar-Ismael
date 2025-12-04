#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    float r, C, pi = 3.14;

    setlocale(LC_ALL, "portuguese");

    printf("Digite o raio de um círculo: ");
    scanf("%f", &r);

    C = 2 * pi * r;

    printf("comprimento da circunferência = %.2f", C);

    system("pause");
    return 0;
}