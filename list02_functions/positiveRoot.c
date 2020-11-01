#include<stdio.h>
#include<locale.h>
#include<math.h>

float positiveRoot(float a, float b, float c) {
    float delta = pow(b, 2) - 4 * a * c;

    // No caso de delta ser negativo, sai da função e retorna 0
    if(delta < 0) {
        return 0;
    }

    float x1 = (-1 * b + sqrt(delta)) / 2 * a;
    float x2 = (-1 * b - sqrt(delta)) / 2 * a;
    
    // se x1 for positivo, retorna x1
    if(x1 >= 0) {
        return x1;
    }
    // se x2 for positivo, retorna x2
    else if(x2 >= 0) {
        return x2;
    }
    // se nenhuma raiz for positiva, retorna 0
    else {
        return 0;
    }
}

void main() {
    setlocale(LC_ALL, "");

    float a = 0, b = 0, c = 0;

    printf("\n%ls\n", L"| CALCULAR RAIZ POSITIVA DE UMA EQUAÇÃO DO SEGUNDO GRAU |");

    printf("Coeficiente de segunda ordem: ");
    scanf("%f", &a);
    printf("Coeficiente de primeira ordem: ");
    scanf("%f", &b);
    printf("Termo independente: ");
    scanf("%f", &c);

    printf("Resultado: %f\n", positiveRoot(a, b, c));
}