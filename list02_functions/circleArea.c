#include<stdio.h>
#include<locale.h>
#include<math.h>

#define PI 3.14

float circleArea(float r) {
    return PI * pow(r, 2);
}

void main() {
    setlocale(LC_ALL, "");

    float r = 0;

    printf("\n%ls\n", L"| CALCULAR ÁREA DO CÍRCULO |");

    printf("Raio: ");
    scanf("%f", &r);

    printf("Resultado: %f\n", circleArea(r));
}