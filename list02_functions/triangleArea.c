#include<stdio.h>
#include<locale.h>

float triangleArea(float b, float c) {
    return b * c / 2;
}

void main() {
    setlocale(LC_ALL, "");

    float b = 0, h = 0;

    printf("\n%ls\n", L"| CALCULAR ÁREA DO TRIÂNGULO |");

    printf("Base: ");
    scanf("%f", &b);
    printf("Altura: ");
    scanf("%f", &h);

    printf("Resultado: %f\n", triangleArea(b, h));
}