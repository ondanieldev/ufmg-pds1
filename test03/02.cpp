#include<stdio.h>

int getMax(int* numbers, int length) {
    int actualMax = numbers[0];

    for(int i = 1; i < length; ++i) {
        if(numbers[i] > actualMax) actualMax = numbers[i];
    }

    return actualMax;
}

int main() {
    int numbers[5] = { 7, 3, 4, 6, 1 };
    
    printf("%d", getMax(numbers, sizeof(numbers)/sizeof(numbers[0])));
}