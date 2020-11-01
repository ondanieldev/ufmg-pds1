#include<stdio.h>
#include<locale.h>

float average(float a, float b, float c) {
    return (a + b + c) / 3;
}

void main() {
    setlocale(LC_ALL, "");

    float a = 0, b = 0, c = 0;

    printf("\n%ls\n", L"| CALCULAR MÉDIA |");

    printf("Primeiro valor: ");
    scanf("%f", &a);
    printf("Segundo valor: ");
    scanf("%f", &b);
    printf("Terceiro valor: ");
    scanf("%f", &c);

    printf("Resultado: %f\n", average(a, b, c));
}