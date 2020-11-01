#include<stdio.h>
#include<locale.h>

float boxArea(float a, float b, float c) {
    return (2 * a * b) + (2 * b * c) + (2 * a * c); 
}

void main() {
    setlocale(LC_ALL, "");

    float a = 0, b = 0, c = 0;

    printf("\n%ls\n", L"| CALCULAR ÁREA DA CAIXA |");

    printf("Primeiro lado: ");
    scanf("%f", &a);
    printf("Segundo lado: ");
    scanf("%f", &b);
    printf("Terceiro lado: ");
    scanf("%f", &c);

    printf("Resultado: %f\n", boxArea(a, b, c));
}