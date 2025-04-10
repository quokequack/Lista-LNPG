#include <stdio.h>

int main(){

    double largura;
    double altura;

    printf("Digite a largura em cm: ");
    scanf("%lf", &largura);

    printf("Digite a altura em cm: ");
    scanf("%lf", &altura);

    double area = largura * altura;

    printf("A área do retângulo é %.2f", area);
    return 0;
}