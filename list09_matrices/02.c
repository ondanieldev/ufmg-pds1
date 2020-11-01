#include<stdio.h>

float media_matriz(int n, float mat[][100]) {
    float sum = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            sum += mat[i][j];
        }
    }
    return(sum/(n*n));
}

int main() {
    float mat[100][100] = {{1,2},{3,4}}; 
    printf("%f", media_matriz(2, mat));
    return(0);
}