#include<stdio.h>

float average(float* v, int n) {
    if(n <= 0) return(0);

    float sum = 0;
    for(int i = 0; i < n; ++i) {
        sum += v[i];
    }

    return(sum/n);
}

int main() {
    float v[7] = {1,2,3,4,5,6,7};

    printf("%f", average(v, 7));

    return(0);
}