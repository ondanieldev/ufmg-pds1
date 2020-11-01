#include<stdio.h>
#include<locale.h>
#include<math.h>

#define PI 3.14

float circlePerimeter(float r) {
    return 2 * PI * r;
}

void main() {
    setlocale(LC_ALL, "");

    float r = 0;

    printf("\n%ls\n", L"| CALCULAR PERÍMETRO DO CÍRCULO |");

    printf("Raio: ");
    scanf("%f", &r);

    printf("Resultado: %f\n", circlePerimeter(r));
}