#include<stdio.h>

typedef int bool;
enum { false, true };

bool simetrica(int n, float A[][100]) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(A[i][j] != A[j][i]) return(false);
        }
    }
    return(true);
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
    printf("%d", simetrica(lines, matrice));
    return(0);
}