#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    double diariaVeiculo = 100.0;
    int dias = 0;
    double kmTotalRodados = 0;
    double totalPagar = 0;

    scanf("%d", &dias);
    scanf("%lf", &kmTotalRodados);

    if (kmTotalRodados <= 500) {
        totalPagar = (kmTotalRodados * 1.0) + (diariaVeiculo * dias);
    } else if (kmTotalRodados <= 1000) {
        double km1 = 500;
        double km2 = kmTotalRodados - 500;
        totalPagar = (km1 * 1.0 + km2 * 0.5) + (diariaVeiculo * dias);
    } else {
        double km1 = 500;
        double km2 = 500;
        totalPagar = (km1 * 1.0 + km2 * 0.5) + (diariaVeiculo * dias);
    }

    printf("%.2lf\n", totalPagar);

    return 0;
}
