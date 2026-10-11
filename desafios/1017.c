#include <stdio.h>

int main() {
    const double CONSUMO = 12.0;

    int tempo, velocidade;
    double distancia, litros;

    scanf("%d %d", &tempo, &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / CONSUMO;

    printf("%.3f\n", litros);

    return 0;
}