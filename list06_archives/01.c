#include<stdio.h>

int isPrime(int x) {
    if(x == 0 || x == 1) return(0);
    for(int i = 2; i < x; ++i) if(x % i == 0) return(0);
    return(1);
}

int main() {
    int n;
    scanf("%d", &n);

    FILE* archive = fopen("primes.txt", "w+t");
    int primesCount = 0;
    int actualNumber = 2;
    
    while(primesCount < n) {
        if (isPrime(actualNumber)) {
            fprintf(archive, "%d\n", actualNumber);
            ++primesCount;
        }
        ++actualNumber;
    }
    
    fclose(archive);    
    
    return(0);
}