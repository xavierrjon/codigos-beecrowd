#include <stdio.h>
 
int main() {
 
    int idPeca1, qtdPecas1, idPeca2, qtdPecas2;
    double valorPeca1, valorPeca2, valorPagar;

    scanf("%d %d %lf", &idPeca1, &qtdPecas1, &valorPeca1);
    scanf("%d %d %lf", &idPeca2, &qtdPecas2, &valorPeca2);

    valorPagar = (qtdPecas1 * valorPeca1) + (qtdPecas2 * valorPeca2);

    printf("VALOR A PAGAR: R$ %.2f\n", valorPagar);
 
    return 0;
}