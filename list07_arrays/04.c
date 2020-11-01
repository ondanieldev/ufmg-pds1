#include<stdio.h>

int max(int* v, int n) {
    if(n <= 0) return(0);

    int actualMax = v[0];
    for(int i = 1; i < n; ++i) {
        if(v[i] > actualMax) actualMax = v[i];
    }

    return(actualMax);
}

int main() {
    int v[5] = {0,0,0,0,0};

    printf("%d", max(v, 5));

    return(0);
}