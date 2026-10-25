
#include <stdio.h>
#include <stdlib.h>

int calcularMDC(int a, int b)
{
    a = abs(a);
    b = abs(b);

    while (b != 0)
    {
        int resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int N1, D1, N2, D2;
        int numerador, denominador;
        int numeradorSimplificado, denominadorSimplificado;
        char operador, barra1, barra2;

        scanf("%d %c %d %c %d %c %d",
              &N1, &barra1, &D1, &operador,
              &N2, &barra2, &D2);

        switch (operador)
        {
        case '+':
            numerador = (N1 * D2) + (N2 * D1);
            denominador = D1 * D2;
            break;

        case '-':
            numerador = (N1 * D2) - (N2 * D1);
            denominador = D1 * D2;
            break;

        case '*':
            numerador = N1 * N2;
            denominador = D1 * D2;
            break;

        case '/':
            numerador = N1 * D2;
            denominador = D1 * N2;
            break;
        }

        int mdc = calcularMDC(numerador, denominador);

        numeradorSimplificado = numerador / mdc;
        denominadorSimplificado = denominador / mdc;

        printf("%d/%d = %d/%d\n",
               numerador, denominador,
               numeradorSimplificado, denominadorSimplificado);
    }

    return 0;
}
