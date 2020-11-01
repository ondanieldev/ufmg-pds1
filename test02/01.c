#include<stdio.h>

int main() {
    int numbers[5];
    char filename[1000];

    printf("Digite o nome do arquivo %s: ", filename);
    scanf("%s", filename);

    for (int i = 0; i < 5; ++i) {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    FILE* archive = fopen(filename, "w+t");
    if(archive == NULL) {
        printf("Erro ao criar arquivo");
        return(1);
    };

    for (int i = 0; i < 5; ++i) {
        fprintf(archive, "%d\n", numbers[i]);
    }

    fclose(archive);

    archive = fopen(filename, "r+t");
    if(archive == NULL) {
        printf("Erro ao abrir arquivo");
        return(1);
    };

    int actualNumber = 0;
    fscanf(archive, "%d", &actualNumber);
    while(!feof(archive)) {
        printf("%d\n", actualNumber);
        fscanf(archive, "%d", &actualNumber);
    }

    fclose(archive);    
    
    return(0);
}