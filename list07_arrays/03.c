#include<stdio.h>

float average(float* v, int n) {
    if(n <= 0) return(0);

    float sum = 0;
    for(int i = 0; i < n; ++i) {
        sum += v[i];
    }

    return(sum/n);
}

float variance(float* v, int n) {
    if(n <= 0) return(0);

    float avg = average(v, n);

    float sum = 0;
    for(int i = 0; i < n; ++i) {
        sum += (v[i] - avg) * (v[i] - avg);
    }

    return(sum/n);
}

int main() {
    float v[5] = {63,60,59,55,62};

    printf("%f", variance(v, 5));

    return(0);
}