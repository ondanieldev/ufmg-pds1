#include<stdio.h>

int min(int* v, int n) {
    if(n <= 0) return(0);

    int actualMin = v[0];
    for(int i = 1; i < n; ++i) {
        if(v[i] < actualMin) actualMin = v[i];
    }

    return(actualMin);
}

int main() {
    int v[5] = {42,60,-100,-60,-80};

    printf("%d", min(v, 5));

    return(0);
}