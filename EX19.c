#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    int idade;

    setlocale(LC_ALL, "portuguese");

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade <= 12){
        printf("criança (0–12)");
    }else if(idade > 12 && idade < 18){
        printf("adolescente (13–17)");
    }else if(idade > 17 && idade < 60){
        printf("adulto (18–59)");
    }else{
        printf("idoso (60+)");
    }

    system("pause");
    return 0;
}