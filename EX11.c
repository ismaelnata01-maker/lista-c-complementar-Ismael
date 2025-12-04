#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    int n, p_ou_i;

    setlocale(LC_ALL, "portuguese");

    printf("Digite um número: ");
    scanf("%d", &n);

    p_ou_i = n % 2;

    if(p_ou_i == 0){
        printf("NÚMERO PAR");
    }else{
        printf("NÚMERO ÍMPAR");
    }

    system("pause");
    return 0;
}