#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    float b, h, area;

    setlocale(LC_ALL, "portuguese");

    printf("Digite a base do triangulo: ");
    scanf("%f", &b);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &h);

    area = (b * h) / 2;

    printf("AREA = %.2f", area);

    system("pause");
    return 0;
}