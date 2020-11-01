#include<stdio.h>
#include<math.h>

float function(float a, float b, float c, float d, float x) {
    return(a*pow(x,3) + b*pow(x,2) + c*x + d);
}

int main() {
    float a, b, c, d;
    scanf("%f%f%f%f", &a, &b, &c, &d);
    
    FILE* baseArchive = fopen("reals.txt", "r+t");
    if(baseArchive == NULL) return(1);
    
    FILE* newArchive = fopen("realsAfterFunction.txt", "w+t");
    float x;
    
    fscanf(baseArchive, "%f", &x);
    while(!feof(baseArchive)) {
        fprintf(newArchive, "%f\n", function(a, b, c, d, x));
        fscanf(baseArchive, "%f", &x);
    }
    
    fclose(baseArchive);
    fclose(newArchive);
    
    return(0);
}