#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    char nome[50];
    int idade;

    setlocale(LC_ALL, "portuguese");

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Olá %s voce tem %d anos", nome, idade);

    system("pause");
    return 0;
}