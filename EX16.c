#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int n, quadrado;

    printf("Digite um número: ");
    scanf("%d", &n);

    quadrado = n * n;

    printf("O quadrado de %d é %d", n, quadrado);

    system("pause");
    return 0;
}