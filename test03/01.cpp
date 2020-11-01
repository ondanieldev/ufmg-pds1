#include<stdio.h>
#include <stdlib.h>

struct Person {
    int id;
    int* points = NULL;

    void setValues(int newId, int* newPoints, int numberOfQuestions);
    int sumOfPoints();
};

void Person::setValues(int newId, int* newPoints, int numberOfQuestions) {
    id = newId;

    printf("\n%d\n", sizeof(points));

    // points = (int*) malloc(numberOfQuestions * sizeof(int));
    points = (int*) realloc(points, numberOfQuestions * sizeof(int));
    // realloc(points, numberOfQuestions * sizeof(int));

    printf("\n%d\n", sizeof(points));

    for(int i = 0; i < numberOfQuestions; ++i) points[i] = newPoints[i];
}

int Person::sumOfPoints() {
    int sum = 0;
    
    for(int i = 0; i < sizeof(points)/sizeof(int); ++i) sum += points[i];

    return sum;
}

int main() {
    Person person;
    person.points = (int*) malloc(1 * sizeof(int));
    
    int numberOfQuestions, id;

    printf("Numero de questoes do concurso: ");
    scanf("%d", &numberOfQuestions);

    int points[numberOfQuestions];

    printf("Numero de identificacao do candidato: ");
    scanf("%d", &id);

    for(int i = 0; i < numberOfQuestions; ++i) {
        printf("Pontuacao do candidato na questao numero %d: ", i + 1);
        scanf("%d", &points[i]);
    }

    person.setValues(id, points, numberOfQuestions);

    printf("A soma dos pontos do candidato e: %d", person.sumOfPoints());
}