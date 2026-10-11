#include <stdio.h>
 
int main() {
 
    int produtoA, produtoB, produtoC, produtoD, diferenca;
    scanf("%d %d %d %d", &produtoA, &produtoB, &produtoC, &produtoD);

    diferenca = (produtoA * produtoB) - (produtoC * produtoD);

    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}