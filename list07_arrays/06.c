#include<stdio.h>

int scalarProduct(int* u, int* v, int n) {
    if(n <= 0) return(0);

    int sum = 0;
    for(int i = 0; i < n; ++i) {
        sum += u[i] * v[i];
    }

    return(sum);
}

int main() {
    int v[5] = {-1,-2,3};
    int u[5] = {4,0,-8};

    printf("%d", scalarProduct(v, u, 3));

    return(0);
}