#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    int n1, n2, n3;

    setlocale(LC_ALL, "portuguese");

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);

    if(n1 > n2 && n1 > n3){
        printf("O primeiro valor é o maior");
    }else if(n2 > n1 && n2 > n3){
        printf("O segundo valor é o maior");
    }else{
        printf("O terceiro valor é o maior");
    }

    system("pause");
    return 0;
}