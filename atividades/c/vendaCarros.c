#include <stdio.h>

int main(){

    double salario = 500.00;
    double comissao = 50.00;
    int porcentagemSegundaComissao = 5;

    char nomeVendedor[50];
    int carrosVendidos;
    double valorTotalVendas;

    printf("Digite o nome do vendedor: ");
    scanf("%s", nomeVendedor);

    printf("Digite a quantidade de carros vendidos: ");
    scanf("%d", &carrosVendidos);

    printf("Digite o valor total das vendas: "); 
    scanf("%lf", &valorTotalVendas);

    double porcentagemTotalVendas = (porcentagemSegundaComissao / 100.0) * valorTotalVendas;
    double comissaoPorCarro = comissao * carrosVendidos;
    double salarioFinal = salario + porcentagemTotalVendas + comissaoPorCarro;

    printf("A porcentagem ficou em %.2f.\n", porcentagemTotalVendas);
    printf("A comissão por carro ficou em %.2f.\n", comissaoPorCarro);
    printf("O salário ficou em %.2f.\n", salarioFinal);

    return 0;
}