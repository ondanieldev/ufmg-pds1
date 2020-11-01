#include<math.h>

#define PI 3.14

// a) Média: calcula a média de a, b e c.
float average(float a, float b, float c) {
    return (a + b + c) / 3;
}

// b) Média ponderada: calcula a média ponderada de a, b e c onde a tem peso 3, b 4 e c 5
float weightedAverage(float a, float b, float c) {
    return (a * 3 + b * 4 + c * 5) / 12;
}

// c) Perímetro: calcula o perímetro de um círculo de raio r.
float circlePerimeter(float r) {
    return 2 * PI * r;
}

// d) Área do círculo: calcula a área de um círculo de raio r.
float circleArea(float r) {
    return PI * pow(r, 2);
}

// e) Área do triângulo: calcula a área de um triângulo de base b e altura c.
float triangleArea(float b, float c) {
    return b * c / 2;
}

// f) Área da caixa: calcula a área de uma caixa de dimensões a, b e c.
float boxArea(float a, float b, float c) {
    return (2 * a * b) + (2 * b * c) + (2 * a * c); 
}

// g) Volume da caixa: calcula o volume de uma caixa de dimensões a, b e c.
float boxVolume(float a, float b, float c) {
    return a * b * c;
}

// h) Área do cilindro: calcula a área de um cilindro de raio r e altura h.
float cylinderArea(float r, float h) {
    float baseArea = circleArea(r);
    float sideArea = circlePerimeter(r) * h; 
    return baseArea + sideArea;
}

// i) Volume do cilindro: calcula o volume de um cilindro de raio r e altura h.
float cylinderVolume(float r, float h) {
    float baseArea = circleArea(r);
    return baseArea * h;
}

// j) Hipotenusa: calcula a hipotenusa de um triângulo retângulo com lados b e c.
float hypotenuse(float b, float c) {
    return sqrt(pow(b, 2) + pow(c, 2));
}

// k) Raiz positiva: calcula a raiz positiva da equação do segundo grau definida por a.x2+b.x+c.
float positiveRoot(float a, float b, float c) {
    float delta = pow(b, 2) - 4 * a * c;

    // No caso de delta ser negativo, sai da função e retorna 0
    if(delta < 0) {
        return 0;
    }

    float x1 = (-1 * b + sqrt(delta)) / 2 * a;
    float x2 = (-1 * b - sqrt(delta)) / 2 * a;
    
    // se x1 for positivo, retorna x1
    if(x1 >= 0) {
        return x1;
    }
    // se x2 for positivo, retorna x2
    else if(x2 >= 0) {
        return x2;
    }
    // se nenhuma raiz for positiva, retorna 0
    else {
        return 0;
    }
}