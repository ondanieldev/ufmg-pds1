#include<stdio.h>

float function(float x) {
    return(x*x - 5*x + 1);
}

int main() {
    FILE* baseArchive = fopen("reals.txt", "r+t");
    if(baseArchive == NULL) return(1);
    
    FILE* newArchive = fopen("realsAfterFunction.txt", "w+t");
    float n;
    
    fscanf(baseArchive, "%f", &n);
    while(!feof(baseArchive)) {
        fprintf(newArchive, "%f\n", function(n));
        fscanf(baseArchive, "%f", &n);
    }

    fclose(baseArchive);
    fclose(newArchive);
    
    return(0);
}