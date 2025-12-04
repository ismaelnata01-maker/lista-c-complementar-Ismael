
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    int h, min;

    setlocale(LC_ALL, "portuguese");

    printf("Digite um valor em horas: ");
    scanf("%d", &h);

    min = h * 60;

    printf(" %d h = %d min", h, min);

    system("pause");
    return 0;
}