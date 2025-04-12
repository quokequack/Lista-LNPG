#include <stdio.h>

int main() {
    int totalSegundos, horas, minutos, segundos;

    printf("Digite o total de segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("%d segundos são %d horas, %d minutos e %d segundos.\n",
           totalSegundos, horas, minutos, segundos);

    return 0;
}
