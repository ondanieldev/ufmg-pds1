#include<stdio.h>

int isPrime(int x) {
    if(x == 0 || x == 1) return(0);
    for(int i = 2; i < x; ++i) if(x % i == 0) return(0);
    return(1);
}

int main() {
    FILE* baseArchive = fopen("naturals.txt", "r+t");
    if(baseArchive == NULL) return(1);
    
    FILE* primesArchive = fopen("primos.txt", "w+t");
    FILE* othersArchive = fopen("outros.txt", "w+t");
    int n;
    
    fscanf(baseArchive, "%d", &n);
    while(!feof(baseArchive)) {
        if(isPrime(n)) fprintf(primesArchive, "%d\n", n);
        else fprintf(othersArchive, "%d\n", n);
        fscanf(baseArchive, "%d", &n);
    }
    
    fclose(baseArchive);
    fclose(primesArchive);
    fclose(othersArchive);
    
    return(0);
}