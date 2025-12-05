#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    float nota;

    setlocale(LC_ALL, "portuguese");

    printf("Digite uma nota: ");
    scanf("%f", &nota);

    if(nota > -1 && nota < 11){
        printf("NOTA VÁLIDA");
    }else{
        printf("NOTA INVÁLIDA");
    }

    system("pause");
    return 0;
}