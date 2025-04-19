#include <stdio.h>

int main() {

    int matriz[4][4] = {0};

    char movimentos[21];
    int x = 0, y = 0;
    int minX = 0, minY = 0;

    printf("Digite os movimentos: ");
    scanf("%s", movimentos);

    matriz[x][y]++;

    for (int i = 0; i < 20; i++){
        if(movimentos[i] == 'c' && x > 0) x--;
        else if(movimentos[i] == 'b' && x < 3) x++;
        else if(movimentos[i] == 'e' && y > 0) y--;
        else if(movimentos[i] == 'd'&& y < 3) y++;

        matriz[x][y]++;

    }

    int min = matriz[0][0];

        for(int i = 0; i < 4; i++){
            for (int j = 0; j <4; j++){
                if(matriz[i][j] < min){
                    min = matriz[i][j];
                    minX = i;
                    minY = j;
                }
            }
        }

    printf("Coordenada X: %d, Y: %d\n", minX, minY);
    return 0;
}