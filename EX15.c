#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    int n, seque= 0, i, total= 0;
   
    setlocale(LC_ALL, "portuguese");
   
    printf("Digite um número: ");
    scanf("%d", &n);
   
    for(i = 1; i <= n; i++){
        seque = 1 + seque;
        total = seque + total;
        printf(" %d \n", seque);
   
    }
       
        printf("total = %d", total);
   
    system("pause");
    return 0;
}