#include <stdio.h>

int main() {
    const double PI = 3.14159;

    double a, b, c;
    double triangulo, circulo, trapezio, quadrado, retangulo;

    scanf("%lf %lf %lf", &a, &b, &c);

    triangulo = (a * c) / 2.0;
    circulo = PI * c * c;
    trapezio = ((a + b) * c) / 2.0;
    quadrado = b * b;
    retangulo = a * b;

    printf("TRIANGULO: %.3f\n", triangulo);
    printf("CIRCULO: %.3f\n", circulo);
    printf("TRAPEZIO: %.3f\n", trapezio);
    printf("QUADRADO: %.3f\n", quadrado);
    printf("RETANGULO: %.3f\n", retangulo);

    return 0;
}