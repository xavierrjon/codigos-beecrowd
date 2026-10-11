#include <stdio.h>

int main()
{
    int idFuncionario, horasTrabalhadas;
    double valorHora, salario;

    scanf("%d %d", &idFuncionario, &horasTrabalhadas);
    scanf("%lf", &valorHora);

    salario = horasTrabalhadas * valorHora;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", idFuncionario, salario);

    return 0;
}