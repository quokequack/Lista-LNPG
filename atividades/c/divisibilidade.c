#include <stdio.h>

int main(){
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if(numero % 10 == 0){
        printf("Divisível por 10.\n");
    } else if (numero % 5 == 0){
        printf("Divisível por 5.\n");
    } else if (numero % 2 == 0){
        printf("Divisível por 2.\n");
    } else {
        printf("Não é divisível por nenhum!\n");
    }

    return 0;
}