#include<stdio.h>
#include<math.h>
#include<stdbool.h>

struct Ponto {
    float x;
    float y;
    
    float distancia(Ponto &p);
    void atribuir(float a, float b);
};

float Ponto::distancia(Ponto &p) {
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
};

void Ponto::atribuir(float a, float b) {
    x = a;
    y = b;
};

struct Triangulo {
    Ponto p1, p2, p3;

    float perimetro();
    float area();
    bool equilatero();
    bool semelhante(Triangulo &t);
};

float Triangulo::perimetro() {
    return p1.distancia(p2) + p1.distancia(p3) + p2.distancia(p3);
};

float Triangulo::area() {
    return abs((p2.x*p3.y)-(p2.y*p3.x)-(p1.x*p3.y)+(p1.y*p3.x)+(p1.x*p2.y)-(p1.y*p2.x))/2;
};

bool Triangulo::equilatero() {
    if(
        p1.distancia(p2) == p1.distancia(p3) && 
        p1.distancia(p2) == p2.distancia(p3)
    ) return true;
    return false;
};

bool Triangulo::semelhante(Triangulo &t) {
    if(
        t.p1.distancia(t.p2)/p1.distancia(p2) == t.p1.distancia(t.p3)/p1.distancia(p3) &&
        t.p1.distancia(t.p2)/p1.distancia(p2) == t.p2.distancia(t.p3)/p2.distancia(p3)
    ) return true;
    return false;
};

/**
 * Considerei um retângulo com os seguintes pontos:
 * p1: superior esquerdo
 * p2: superior direito
 * p3: inferior esquerdo
 * p4: inferior direito
 * p1   p2
 * p3   p4
*/
struct Retangulo {
    Ponto p1, p2, p3, p4;

    bool valido();
    float perimetro();
    float area();
    bool quadrado();
};

bool Retangulo::valido() {
    if(
        p1.y == p2.y &&
        p3.y == p4.y &&
        p1.x == p3.x &&
        p2.x == p4.x
    ) return true;
    return false;
}

float Retangulo::perimetro() {
    if (!valido()) {
        printf("O retangulo nao e valido!");
        return 0;
    }
    return p1.distancia(p2) + p2.distancia(p4) + p4.distancia(p3) + p3.distancia(p1);
}

float Retangulo::area() {
    if (!valido()) {
        printf("O retangulo nao e valido!");
        return 0;
    }
    return p1.distancia(p2) * p1.distancia(p3);
}

bool Retangulo::quadrado() {
    if (!valido()) {
        printf("O retangulo nao e valido!");
        return false;
    }

    if (
        p1.distancia(p2) == p2.distancia(p4) &&
        p2.distancia(p4) == p4.distancia(p3) &&
        p4.distancia(p3) == p3.distancia(p1)
    ) return true;
    return false;
}

struct Circunferencia {
    Ponto centro;
    float raio;

    void atribuir(float n);
    float perimetro();
    float area();
    bool contem(Ponto &p);
    bool contem(Triangulo &t);
    bool contem(Retangulo &r);
    bool pertence(Ponto &r);
    bool circunscrita(Triangulo &t);
    bool circunscrita(Retangulo &r);
};

void Circunferencia::atribuir(float n) {
    raio = n;
}

float Circunferencia::perimetro() {
    return 2*3.14*raio;
}

float Circunferencia::area() {
    return 3.14*pow(raio, 2);
}

bool Circunferencia::contem(Ponto &p) {
    if (centro.distancia(p) <= raio) return true;
    return false;
}

bool Circunferencia::contem(Triangulo &t) {
    if (
        centro.distancia(t.p1) <= raio &&
        centro.distancia(t.p2) <= raio &&
        centro.distancia(t.p3) <= raio
    ) return true;
    return false;
}

bool Circunferencia::contem(Retangulo &r) {
    if (
        centro.distancia(r.p1) <= raio &&
        centro.distancia(r.p2) <= raio &&
        centro.distancia(r.p3) <= raio &&
        centro.distancia(r.p4) <= raio
    ) return true;
    return false;
}

bool Circunferencia::pertence(Ponto &p) {
    if (centro.distancia(p) == raio) return true;
    return false;
}

bool Circunferencia::circunscrita(Triangulo &t) {
    if (
        centro.distancia(t.p1) == raio &&
        centro.distancia(t.p2) == raio &&
        centro.distancia(t.p3) == raio
    ) return true;
    return false;
}

bool Circunferencia::circunscrita(Retangulo &r) {
    if (
        centro.distancia(r.p1) == raio &&
        centro.distancia(r.p2) == raio &&
        centro.distancia(r.p3) == raio &&
        centro.distancia(r.p4) == raio
    ) return true;
    return false;
}


int main () {
    Circunferencia c;
    c.centro.atribuir(0, 5);
    c.atribuir(5);

    Ponto p;
    p.atribuir(-5, 5);

    Triangulo t;
    t.p1.atribuir(0, 1);
    t.p2.atribuir(1, 1);
    t.p3.atribuir(0, 0);

    Retangulo r;
    r.p1.atribuir(-1, 5);
    r.p2.atribuir(0, 5);
    r.p3.atribuir(-1, 11);
    r.p4.atribuir(0, 11);

    printf("%f\n", c.perimetro());
    printf("%f\n", c.area());
    printf("%d\n", c.contem(p));
    printf("%d\n", c.contem(t));
    printf("%d\n", c.contem(r));

    return 0;
}