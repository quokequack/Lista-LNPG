#include<stdio.h>

int main()  {

    char entrada[20];
    int x,y;
    int soma_primeiros = 0;
    int soma_segundos = 0;

    printf("Digite as entradas em pares (ex: 12 3, 3 4, 9 3). Digite * para parar. \n");

    while(1){
        scanf("%s", entrada);
    
        if(entrada[0] == '*'){
            break;
        }

        sscanf(entrada, "%d,%d", &x, &y);

        soma_primeiros += x;
        soma_segundos += y;
    }

    printf("Soma dos primeiros: %d\n Soma dos segundos: %d\n", soma_primeiros, soma_segundos);

    

    return 0;
}