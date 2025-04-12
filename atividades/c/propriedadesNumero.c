#include <stdio.h>
#include <math.h>

int main() {
    double numero;

    printf("Digite um número positivo e maior que zero: ");
    scanf("%lf", &numero);

    if (numero <= 0) {
        printf("Número inválido! Deve ser positivo e maior que zero.\n");
    } else {
        double aoQuadrado = pow(numero, 2);
        double aoCubo = numero * numero * numero;
        double raizQuadrada = sqrt(numero);
        double raizCubica = pow(numero, 1.0 / 3.0);

        printf("\nResultados:\n");
        printf("a) Ao quadrado: %.2f\n", aoQuadrado);
        printf("b) Ao cubo: %.2f\n", aoCubo);
        printf("c) Raiz quadrada: %.2f\n", raizQuadrada);
        printf("d) Raiz cúbica: %.2f\n", raizCubica);
    }

    return 0;
}
