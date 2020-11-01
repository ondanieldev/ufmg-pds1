#include<stdio.h>

void main() {
	int numberOfDays;

    // 1. Receber o número de dias a serem analisados;
	while(scanf("%i", &numberOfDays)) {
        
		int gainPerDay[numberOfDays], costPerDay, maxGain = 0;

        // 2. Receber o custo por dia para manter o circo;
		scanf("%i", &costPerDay);

        // 3. Receber o lucro estimado de cada dia;
		for(int i = 0; i < numberOfDays; ++i) {
            scanf("%i", &gainPerDay[i]);
		}

        // 4. Calcular o lucro em todas as sequências possíveis;
        for(int i = 0; i < numberOfDays; ++i) {
	
            int actualGain = 0;
 
            for(int j = i; j < numberOfDays; ++j){
                actualGain += gainPerDay[j] - costPerDay;

                if(actualGain > maxGain) {
                    maxGain = actualGain;
                }
            }
        }
    
        // 5. Apresentar, a partir dos lucros calculados, o maior dentre eles (lucro máximo).
        printf("\n%i\n\n", maxGain);
    }
}