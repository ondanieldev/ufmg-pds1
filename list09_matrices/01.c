#include<stdio.h>

int main() {
    FILE* archive = fopen("matrices.txt", "r+t");
    if(archive==NULL) {
        printf("Nao foi possivel abrir o arquivo!");
        return(1);
    }
    int lines, columns;
    fscanf(archive, "%d %d", &lines, &columns);
    float matrice[lines][columns];
    for(int i = 0; i < lines; ++i) {
        for(int j = 0; j < columns; ++j) {
            fscanf(archive, "%f", &matrice[i][j]);
        }
    }
    fclose(archive);
    for(int i = 0; i < lines; ++i) {
        for(int j = 0; j < columns; ++j) {
            printf("%f\t", matrice[i][j]);
        }
        printf("\n");
    }
    return(0);
}