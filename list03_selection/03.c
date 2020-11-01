#include<stdio.h>
typedef enum { false, true } bool;

bool divisivel(int x, int y) {
    if(x % y == 0) return true;
    return false;
}

bool bissexto(int x) {
    if(divisivel(x, 400) || (divisivel(x, 4) && !divisivel(x, 100))) return true;
    return false;
}

void main() {
    int x;

    printf("Insira um ano:\n");
    scanf("%i", &x);

    bissexto(x) ? printf("%i e bissexto.", x) : printf("%i nao e bissexto.", x);
}