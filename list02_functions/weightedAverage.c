#include<stdio.h>
#include<locale.h>

float weightedAverage(float a, float b, float c) {
    return (a * 3 + b * 4 + c * 5) / 12;
}

void main() {
    setlocale(LC_ALL, "");

    float a = 0, b = 0, c = 0;

    printf("\n%ls\n", L"| CALCULAR MÉDIA PONDERADA |");

    printf("Primeiro valor: ");
    scanf("%f", &a);
    printf("Segundo valor: ");
    scanf("%f", &b);
    printf("Terceiro valor: ");
    scanf("%f", &c);

    printf("Resultado: %f\n", weightedAverage(a, b, c));
}