#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    int peso1, peso2, peso3;

    printf("Qual a primeira nota: ");
    scanf("%f", &nota1);

    printf("Qual o peso da primeira nota: ");
    scanf("%d", &peso1);

    printf("Qual a segunda nota: ");
    scanf("%f", &nota2);

    printf("Qual o peso da segunda nota: ");
    scanf("%d", &peso2);

    printf("Qual a terceira nota: ");
    scanf("%f", &nota3);

    printf("Qual o peso da terceira nota: ");
    scanf("%d", &peso3);

    double mediaPonderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("A média ponderada das notas é: %.2f\n", mediaPonderada);

    return 0;

}