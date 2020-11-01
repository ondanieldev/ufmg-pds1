#include<stdio.h>

int main() {
    int ages[1000];
    float heights[1000];
    int numOfHeights = 0;
    float sumHeights = 0;

    for (int i = 0; i < 1000; ++i) {
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &ages[i]);

        if (ages[i] <= 0) {
            break;
        }

        printf("Digite a altura da pessoa %d: ", i+1);
        scanf("%f", &heights[i]);

        if (ages[i] >= 40 && ages[i] <= 50) {
            numOfHeights += 1;
            sumHeights += heights[i];
        }
    }

    float average = sumHeights/numOfHeights;

    printf("A media das alturas das pessoas entre 40 e 50 anos eh %f: ", average);

    return(0);
}