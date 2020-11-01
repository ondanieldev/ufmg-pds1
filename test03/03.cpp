#include<stdio.h>

void F1(int *ptrx, int *ptry) {
    int aux;
    aux = *ptrx;
    *ptrx = *ptry;
    *ptry = aux;
}

int main() {
    int a = 10, b = 100;
    F1(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}