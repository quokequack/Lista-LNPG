#include <stdio.h>

int main() {
    int A, B, C, menor, meio, maior;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    // Verificando a ordem
    if (A <= B && A <= C) {
        menor = A;
        if (B <= C) {
            meio = B;
            maior = C;
        } else {
            meio = C;
            maior = B;
        }
    } else if (B <= A && B <= C) {
        menor = B;
        if (A <= C) {
            meio = A;
            maior = C;
        } else {
            meio = C;
            maior = A;
        }
    } else {
        menor = C;
        if (A <= B) {
            meio = A;
            maior = B;
        } else {
            meio = B;
            maior = A;
        }
    }

    printf("Valores em ordem crescente: %d, %d, %d\n", menor, meio, maior);

    return 0;
}
