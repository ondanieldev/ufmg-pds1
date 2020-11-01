#include<stdio.h>
#include<locale.h>
#include<math.h>

#define PI 3.14

float circlePerimeter(float r) {
    return 2 * PI * r;
}

float circleArea(float r) {
    return PI * pow(r, 2);
}

float cylinderArea(float r, float h) {
    float baseArea = circleArea(r);
    float sideArea = circlePerimeter(r) * h; 
    return baseArea + sideArea;
}

void main() {
    setlocale(LC_ALL, "");

    float r = 0, h = 0;

    printf("\n%ls\n", L"| CALCULAR ÁREA DO CILINDRO |");

    printf("Raio: ");
    scanf("%f", &r);
    printf("Altura: ");
    scanf("%f", &h);

    printf("Resultado: %f\n", cylinderArea(r, h));
}