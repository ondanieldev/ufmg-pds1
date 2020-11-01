#include<stdio.h>

int isPrime(int x) {
    if(x == 0 || x == 1) return(0);
    for(int i = 2; i < x; ++i) if(x % i == 0) return(0);
    return(1);
}

int main() {
    FILE* baseArchive = fopen("naturals.txt", "r+t");
    if(baseArchive == NULL) return(1);
    
    FILE* newArchive = fopen("isPrime.txt", "w+t");
    int n;
    
    fscanf(baseArchive, "%d", &n);
    while(!feof(baseArchive)) {
        fprintf(newArchive, "%d %s\n", n, isPrime(n) ? "é primo" : "não é primo");
        fscanf(baseArchive, "%d", &n);
    }

    fclose(baseArchive);
    fclose(newArchive);
    
    return(0);
}