#include<stdio.h>
#include<string.h>

int main(){

    char nome[100];
    fgets(nome, 100, stdin);

    int count = 0;
    for(int i = 0; i < strlen(nome); i++){
        if(nome[i] != ' ' && nome[i] !='\n'){
            count++;
        }
        
    }

    printf("Seu nome tem %d caracteres", count);

    return 0;
}