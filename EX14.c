#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    int n, i;

    setlocale(LC_ALL, "portuguese");

    printf("Digite um número: ");
    scanf("%d", &n);

    for(i = 0; i >= n; i++){
        i = 1 + i;
        printf("%d", i);
    }

    system("pause");
    return 0;
}