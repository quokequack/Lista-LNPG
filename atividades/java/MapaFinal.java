import java.io.*;
import java.util.*;

public class MapaFinal {
  public static void main(String args[]) {
            Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();

        int[][] mapa = new int[N][M];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                mapa[i][j] = sc.nextInt();
            }
        }

        System.out.println(simularCaminho(sc, mapa, N, M));
        System.out.println(simularCaminho(sc, mapa, N, M));
  }
  
  private static String simularCaminho(Scanner sc, int[][] mapa, int N, int M) {
        int T = sc.nextInt();
        int x = 0, y = 0;
        StringBuilder caminho = new StringBuilder();

        caminho.append((char) mapa[x][y]);

        for (int i = 0; i < T; i++) {
            int comando = sc.nextInt();
            int novoX = x, novoY = y;

            if (comando == 0) novoX++;
            else if (comando == 1) novoX--;
            else if (comando == 2) novoY++;
            else if (comando == 3) novoY--;

            if (novoX >= 0 && novoX < N && novoY >= 0 && novoY < M && mapa[novoX][novoY] != 35) {
                x = novoX;
                y = novoY;
                caminho.append((char) mapa[x][y]);
            }
        }

        return caminho.toString();
    }
}
