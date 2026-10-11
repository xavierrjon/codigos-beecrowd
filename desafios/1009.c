#include <stdio.h>
 
int main() {
    char nome[20];
    double salarioFixo, totalVendas, comissao, totalReceber;

    scanf("%19s", nome);
    scanf("%lf %lf", &salarioFixo, &totalVendas);

    comissao = totalVendas * 0.15;
    totalReceber = salarioFixo + comissao;

    printf("TOTAL = R$ %.2f", totalReceber);

    return 0;
}