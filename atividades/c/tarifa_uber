#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int porcentagemSalario = 30;

    double salarioPedro = 0;
    double valorFixoTarifa = 0;
    double precoKm = 0;
    double kmPercorrer = 0;
    int viajarFds = 0;

    scanf("%lf", &salarioPedro);
    scanf("%lf", &valorFixoTarifa);
    scanf("%lf", &precoKm);
    scanf("%lf", &kmPercorrer);
    scanf("%d", &viajarFds);

    double porcentagemSalarioUber = (30.0 / 100.0) * salarioPedro;
    double tarifa = valorFixoTarifa + (precoKm * kmPercorrer);

    if(viajarFds == 1){
        tarifa *= 1.10;
    } 

        if (tarifa <= porcentagemSalarioUber) {
        double saldo = porcentagemSalarioUber - tarifa;
        printf("Vai poder viajar.\n");
        printf("%.2lf\n", tarifa);
        printf("%.2lf\n", saldo);
    } else {
        double faltando = tarifa - porcentagemSalarioUber;
        printf("N�o vai poder viajar.\n");
        printf("%.2lf\n", faltando);
    }
	return 0;
}
