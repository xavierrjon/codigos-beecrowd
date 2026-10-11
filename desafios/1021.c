#include <stdio.h>
#include <math.h>

int main() {
    double valor;
    int restante;

    int nota100, nota50, nota20, nota10, nota5, nota2;
    int moeda1, moeda50, moeda25, moeda10, moeda5, moeda01;

    scanf("%lf", &valor);

    restante = (int) round(valor * 100);

    nota100 = restante / 10000;
    restante = restante % 10000;

    nota50 = restante / 5000;
    restante = restante % 5000;

    nota20 = restante / 2000;
    restante = restante % 2000;

    nota10 = restante / 1000;
    restante = restante % 1000;

    nota5 = restante / 500;
    restante = restante % 500;

    nota2 = restante / 200;
    restante = restante % 200;

    moeda1 = restante / 100;
    restante = restante % 100;

    moeda50 = restante / 50;
    restante = restante % 50;

    moeda25 = restante / 25;
    restante = restante % 25;

    moeda10 = restante / 10;
    restante = restante % 10;

    moeda5 = restante / 5;
    restante = restante % 5;

    moeda01 = restante;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    printf("%d moeda(s) de R$ 0.01\n", moeda01);

    return 0;
}