#include <stdio.h>

int main() {
    int n, restante;
    int anos, meses, dias;

    scanf("%d", &n);

    restante = n;

    anos = restante / 365;
    restante = restante % 365;

    meses = restante / 30;
    restante = restante % 30;

    dias = restante;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}