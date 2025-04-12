import java.util.Scanner;

public class ConversorDeMedidas{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite o valor em metros: ");
        double metros = scanner.nextDouble();

        double decimetros = metros * 10;
        double centimetros = metros * 100;
        double milimetros = metros * 1000;

        System.out.println("Em decímetros: " + decimetros + " dm");
        System.out.println("Em centímetros: " + centimetros + " cm");
        System.out.println("Em milímetros: " + milimetros + " mm");

        scanner.close();

    }
}