#include<stdio.h>
#include<locale.h>
#include<math.h>

#define PI 3.14

float circleArea(float r) {
    return PI * pow(r, 2);
}

float cylinderVolume(float r, float h) {
    float baseArea = circleArea(r);
    return baseArea * h;
}

void main() {
    setlocale(LC_ALL, "");

    float r = 0, h = 0;

    printf("\n%ls\n", L"| CALCULAR VOLUME DO CILINDRO |");

    printf("Raio: ");
    scanf("%f", &r);
    printf("Altura: ");
    scanf("%f", &h);

    printf("Resultado: %f\n", cylinderVolume(r, h));
}