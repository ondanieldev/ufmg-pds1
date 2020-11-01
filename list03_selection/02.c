#include<stdio.h>

//a) par(x): testa se um número é par;
void par(int x) {
    if(x % 2 == 0) {
        printf("%i e par\n", x);
    }
}

//b) dentro(x,y,z): testa se o número x está dentro do intervalo [y z];
void dentro(int x, int y, int z) {
    if(x >= y && x <= z) {
        printf("%i esta dentro do intervalo [%i %i]\n", x, y, z);
    }
}

//c) fora(x,y,z): testa se o número x está fora do intervalo [y z];
void fora(int x, int y, int z) {
    if(!(x >= y && x <= z)) {
        printf("%i nao esta dentro do intervalo [%i %i]\n", x, y, z);
    }
}

void main() {
    int x, y, z;

    printf("Insira 03 numeros separados por espaco:\n");
    scanf("%i%i%i", &x, &y, &z);

    par(x);
    dentro(x, y, z);
    fora(x, y, z);
}