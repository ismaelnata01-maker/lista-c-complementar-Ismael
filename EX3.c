#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    int km, m;

    setlocale(LC_ALL, "portuguese");

    printf("Digite um valor em Km/h: ");
    scanf("%d", &km);

    m = km / 3.6;

    printf(" %d Km/h = %d m/s", km, m);

    system("pause");
    return 0;
}