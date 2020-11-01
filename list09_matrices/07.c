#include<stdio.h>

typedef int bool;
enum { false, true };

void mult_matriz(int n, float A[][100], float B[][100], float P[][100]) {
    for(int i = 0; i < n; ++i) {
        float sum = 0;
        for(int j = 0; j < n; ++j) {
            for(int k = 0; k < n; ++k) {
                P[i][j] += A[i][k] * B[k][j];
            }
            printf("%f\t", P[i][j]);
        }
        printf("\n");
    }
}

int main() {
    FILE* archive = fopen("matrices.txt", "r+t");
    if(archive==NULL) {
        printf("Nao foi possivel abrir o arquivo!");
        return(1);
    }
    int lines, columns;
    fscanf(archive, "%d %d", &lines, &columns);
    float matrice[100][100];
    for(int i = 0; i < lines; ++i) {
        for(int j = 0; j < columns; ++j) {
            fscanf(archive, "%f", &matrice[i][j]);
        }
    }
    fclose(archive);
    float matrice2[100][100] = {
        {1, -2, 2},
        {0, 5, 7},
        {4, 1, 6}
    };
    float product[100][100];
    mult_matriz(lines, matrice, matrice2, product);
    return(0);
}