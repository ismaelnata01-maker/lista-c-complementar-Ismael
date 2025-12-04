#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    int p1, p2;

    setlocale(LC_ALL, "portuguese");

    printf("Digite o primeiro peso: ");
    scanf("%d", &p1);

    printf("Digite o segundo peso: ");
    scanf(" %d", &p2);

    if(p1 > p2){
        printf("A primeira pessoa é a mais pesada");
    }else if(p2 > p1){
        printf("A segunda pessoa é a mais pesada");
    }else{
        printf("As duas tem o mesmo peso.");
    }
    

    system("pause");
    return 0;
}