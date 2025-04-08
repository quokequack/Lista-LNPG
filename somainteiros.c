#include <stdio.h>

int main() {
    int num1;
    int num2;
    int num3;
    int num4;

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    printf("Digite um número inteiro: ");
    scanf("%d", &num2);

    printf("Digite um número inteiro: ");
    scanf("%d", &num3);

    printf("Digite um número inteiro: ");
    scanf("%d", &num4);

    int soma = num1 + num2 + num3 + num4;

    printf("A soma é: %d\n", soma);

    return 0;


}