#include<stdio.h>
#include<locale.h>

float boxVolume(float a, float b, float c) {
    return a * b * c;
}

void main() {
    setlocale(LC_ALL, "");

    float a = 0, b = 0, c = 0;

    printf("\n%ls\n", L"| CALCULAR VOLUME DA CAIXA |");

    printf("Primeiro lado: ");
    scanf("%f", &a);
    printf("Segundo lado: ");
    scanf("%f", &b);
    printf("Terceiro lado: ");
    scanf("%f", &c);

    printf("Resultado: %f\n", boxVolume(a, b, c));
}