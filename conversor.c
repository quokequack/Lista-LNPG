#include <stdio.h>

int main() {
    int metros;

    printf("Digite um valor em metros: ");
    scanf("%d", &metros);

    double decimetros = metros * 10.0;
    double centimetros = metros * 100.0;
    double milimetros = metros * 1000.0;

    printf("O valor: %d\n", metros);
    printf("O valor em decimetros é: %.2f\n", decimetros);
    printf("O valor em centimetros é: %.2f\n", centimetros);
    printf("O valor em milimetros é: %.2f\n", milimetros);

    return 0;

}