#include <stdio.h>

int main()
{
    int n, restante;
    int nota100, nota50, nota20, nota10;
    int nota5, nota2, nota1;

    scanf("%d", &n);

    restante = n;

    nota100 = restante / 100;
    restante = restante % 100;

    nota50 = restante / 50;
    restante = restante % 50;

    nota20 = restante / 20;
    restante = restante % 20;

    nota10 = restante / 10;
    restante = restante % 10;

    nota5 = restante / 5;
    restante = restante % 5;

    nota2 = restante / 2;
    restante = restante % 2;

    nota1 = restante / 1;

    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d nota(s) de R$ 1,00\n", nota1);

    return 0;
}