#include<stdio.h>

// a) max(a,b,c): Retorna o maior dentre três números.
float max(float a, float b, float c) {
    if(a >= b && a >= c) {
        return a;
    }
    else if(b >= a && b >= c) {
        return b;
    }
    else if(c >= a && c >= b) {
        return c;
    }
}

// b) min(a,b,c): Retorna o menor dentre três números.
float min(float a, float b, float c) {
    if(a <= b && a <= c) {
        return a;
    }
    else if(b <= a && b <= c) {
        return b;
    }
    else if(c <= a && c <= b) {
        return c;
    }
}

void main() {
    float a, b, c;

    printf("Insira 03 numeros separados por espaco:\n");
    scanf("%f%f%f", &a, &b, &c);

    printf("\nO maior e: %f", max(a, b, c));
    printf("\nO menor e: %f", min(a, b, c));
}