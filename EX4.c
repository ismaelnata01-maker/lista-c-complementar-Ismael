#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float preco, aumento, f_preco;

    printf("Digite o valor de um produto: ");
    scanf("%f", &preco);

    aumento = (preco / 100) * 15;
    f_preco = preco + aumento;

    printf("Preco final = %.2f", f_preco);

    system("pause");
    return 0;
}