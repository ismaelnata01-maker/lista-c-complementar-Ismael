#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int n, dobro;

    printf("Digite um número: ");
    scanf("%d", &n);

    dobro = n * 2;

    printf("O dobro de %d é %d", n, dobro);

    system("pause");
    return 0;
}