#include <stdio.h>

int main() {

    float nota1, nota2, nota3;

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);

    float media = (nota1 + nota2 + nota3) / 3;

    printf("A média das notas é: %.2f\n", media);

    return 0;
}