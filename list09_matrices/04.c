#include<stdio.h>

void transposta(int n, float A[][100], float T[][100]) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            T[i][j] = A[j][i];
            printf("%f\t", T[i][j]);
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
    float transposed[100][100];
    transposta(lines, matrice, transposed);
    return(0);
}