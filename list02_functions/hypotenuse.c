#include<stdio.h>
#include<locale.h>
#include<math.h>

float hypotenuse(float b, float c) {
    return sqrt(pow(b, 2) + pow(c, 2));
}

void main() {
    setlocale(LC_ALL, "");

    float b = 0, c = 0;

    printf("\n%ls\n", L"| CALCULAR HIPOTENUSA DO TRIÂNGULO RETÂNGULO |");

    printf("Primeiro cateto: ");
    scanf("%f", &b);
    printf("Segundo cateto: ");
    scanf("%f", &c);

    printf("Resultado: %f\n", hypotenuse(b, c));
}