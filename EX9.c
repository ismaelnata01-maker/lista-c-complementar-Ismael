#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    float nota;

    setlocale(LC_ALL, "portuguese");

    printf("Digite uma nota: ");
    scanf("%f", &nota);

    if(nota >= 7){
        printf("APROVADO");
    }else{
        printf("REPROVADO");      
    }

    system("pause");
    return 0;
}