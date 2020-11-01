#include<stdio.h>

int main() {
    FILE* archive = fopen("numbers.txt", "r+t");
    if(archive == NULL) return(1);

    int numbers[1000];  
    
    fscanf(archive, "%d", &numbers[0]);
    int i = 1;
    while(!feof(archive)) {
        fscanf(archive, "%d", &numbers[i]);
        ++i;
    }
    
    fclose(archive);
    
    return(0);
}