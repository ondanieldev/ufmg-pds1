#include<stdio.h>
#include<math.h>

void main(){
    float a=0, b=0, c=0, d=0;
    printf("%s", "Insira 4 números:\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    printf("a) %f\n", a + b);
    printf("b) %f\n", a/c);
    printf("c) %f\n", pow(a, 2));
    printf("d) %f\n", b * c);
    printf("e) %f\n", a * b - c);
    printf("f) %f\n", a + b * c);
    printf("g) %f\n", (a + b) * c);
    printf("h) %f\n", sin(a));
    printf("i) %f\n", sqrt(b));
    printf("j) %f\n", a + b + c);
    printf("k) %f\n", a * b * c);
    printf("l) %f\n", (a + b + c) / d);
    printf("m) %f\n", (a + b) * (a - d));
    printf("n) %f\n", (b / c) + (a * d));
    printf("o) %f\n", sin(b) + cos(c));
    printf("p) %f\n", log(a) - log(c));
}