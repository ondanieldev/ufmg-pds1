#include<stdio.h>

// int main() {
//     int a = 10, b, c;
//     double f = 2.5;
//     float f2 = 3.141592;
//     unsigned int u1;
//     b = a + f;
//     printf("%i", b);
//     // a + b = a + c;
//     return 0;
// }

// int main() {
//     int i, a = -1, b = -1, c = 0, d, e=0;
//     scanf("%d", &d);
//     if(a == -1 || d > a)
//     a = d;
//     if(b== -1 || d < b)
//     b = d;
//     e = e + 1;
//     c = c + d;
//     printf("%d %d %f", a, b, (float) c/e);
//     return 0;
// }

int main() {
    int n, a1, r, an;
    scanf("%d %d %d", &n, &a1, &r);
    if (n <= 0) { 
        printf("Nao ha termos nessa PA!");
        return 0;
    }
    an = a1 + (n - 1) * r;
    printf("%d", an);
    return 0;
}