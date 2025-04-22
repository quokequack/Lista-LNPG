#include <stdio.h>

int main(){
    char entrada[20];
    int x, y;

    int menor_soma = 0, maior_soma = 0;
    int soma_dos_pares = 0;
    int soma_total = 0;
    int quantidade_pares = 0;
    int quantidade_valores = 0;

    printf("Digite as entradas em pares (ex: 12 3, 3 4, 9 3). Digite * para parar. \n");

    while (1) {
        scanf("%s", entrada);

        if(entrada[0] == '*') {
            break;
        }

        sscanf(entrada, "%d,%d", &x, &y);

        int soma = x + y;

        if(quantidade_pares == 0){
            menor_soma = soma;
            maior_soma = soma;
        } else {
            if(soma < menor_soma) menor_soma = soma;
            if(soma > maior_soma) maior_soma = soma;
        }

        soma_dos_pares += soma;
        soma_total += x + y;
        quantidade_pares++;
        quantidade_valores += 2;
    }

    float media_pares = (float)soma_dos_pares / quantidade_pares;
    float media_total = (float)soma_total / quantidade_valores;

    printf("menor soma: %d\n", menor_soma);
    printf("maior soma: %d\n", maior_soma);
    printf("media dos pares: %.2f\n", media_pares);
    printf("media de todos: %.2f\n", media_total);

    return 0;
}