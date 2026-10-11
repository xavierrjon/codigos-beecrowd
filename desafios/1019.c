#include <stdio.h>

int main() {
    int n, restante;
    int horas, minutos, segundos;

    scanf("%d", &n);

    restante = n;

    horas = restante / 3600;
    restante = restante % 3600;

    minutos = restante / 60;
    restante = restante % 60;

    segundos = restante / 1;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}