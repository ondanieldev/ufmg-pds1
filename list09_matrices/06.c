#include<stdio.h>

void soma_matriz(int n, float A[][100], float B[][100], float S[][100]) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            S[i][j] = A[i][j] + B[i][j];
            printf("%f\t", S[i][j]);
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
    soma_matriz(lines, matrice, matrice, matrice);
    return(0);
}