import java.util.Scanner;

public class ComparaPares {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int menorSoma = 0, maiorSoma = 0;
        int somaDosPares = 0;
        int somaTotal = 0;
        int quantidadePares = 0;
        int quantidadeValores = 0;

        System.out.println("Digite as entradas em pares (ex: 12,3). Digite * para parar.");

        while(true){
            String entrada = scanner.nextLine();

            if(entrada.equals("*")){
                break;
            }

            String[] partes = entrada.split(",");
            if(partes.length != 2){
                System.out.println("Entrada inválida. Use o formato x,y.");
                continue;
            }

            int x = Integer.parseInt(partes[0].trim());
            int y = Integer.parseInt(partes[1].trim());

            int soma = x + y;

            if (quantidadePares == 0){
                menorSoma = soma;
                maiorSoma = soma;
            } else {
                if (soma < menorSoma) menorSoma = soma;
                if (soma > maiorSoma) maiorSoma = soma;
            }

            somaDosPares += soma;
            somaTotal += x + y;
            quantidadePares++;
            quantidadeValores += 2;
        }

        if(quantidadePares > 0){
            double mediaPares = (double) somaDosPares / quantidadePares;
            double mediaTotal = (double) somaTotal / quantidadeValores;

            System.out.println("Menor soma: " + menorSoma);
            System.out.println("Maior soma: " + maiorSoma);
            System.out.printf("Média dos pares: %.2f\n", mediaPares);
            System.out.printf("Média de todos os valores: %.2f\n", mediaTotal);
        } else {
            System.out.println("Nenhum par válido foi inserido.");
        }

        scanner.close();
    }
}