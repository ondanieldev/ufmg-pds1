#include<stdio.h>
#include<math.h>
#include<locale.h>
#define PI 3.1416

void main(){
    setlocale(LC_ALL, "");
    float a=0,b=0,c=0;

    printf("%ls", L"\n\nInsira 3 números:\n");
    scanf("%f %f %f", &a, &b, &c);

    float normalAverage = (a+b+c)/3;
    float poundAverage = (a*3+b*4+c*5)/(3+4+5);
    float circlePerimeter = 2*PI*a;
    float circleArea = PI*pow(a, 2);
    float triangleArea = b*c/2;
    float hipotenuse = sqrt(pow(b, 2)+pow(c, 2));
    float squares[2];
    float delta = pow(b, 2)-4*a*c;
    float x1 = 0;
    float x2 = 0;
    if(delta >= 0){
        x1 = (-1*b+sqrt(delta))/(2*a);
        x2 = (-1*b-sqrt(delta))/(2*a);
    }

    printf("\n\n%ls %f", L"Média de :", normalAverage);
    printf("\n\n%ls %f", L"Média ponderada:", poundAverage);
    printf("\n\n%ls %f", L"Perímetro do círculo:", circlePerimeter);
    printf("\n\n%ls %f", L"Área do círculo:", circleArea);
    printf("\n\n%ls %f", L"Área do triângulo:", triangleArea);
    printf("\n\n%ls %f", L"Hipotenusa do triângulo:", hipotenuse);
    if(delta >= 0){
        printf("\n\n%ls %f e %f \n\n", L"Raízes da equação:", x1, x2);
    }else{
        printf("\n\n%ls\n\n", L"Não foi possível calcular a equação, pois delta é negativo!");
    }
}