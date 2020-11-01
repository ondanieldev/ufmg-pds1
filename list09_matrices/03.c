#include<stdio.h>

void identidade(int n, float A[][100]) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i == j) A[i][j] = 1;
            else A[i][j] = 0;
            printf("%f\t", A[i][j]);
        }
        printf("\n");
    }
}