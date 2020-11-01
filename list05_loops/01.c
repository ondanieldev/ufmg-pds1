#include<stdio.h>

// a) fat(n): retorna o valor do fatorial de n.
int fat(int n) {
    int product = 1;
    for(int i = 1; i <= n; ++i)
        product *= i;
    return(product);
}

// b) mdc(a,b): retorna o máximo divisor comum entre a e b.
int mdc(int a, int b) {
    int aux = a;
    while(1) {
        if(a % b == 0) return(b);
        aux = a;
        a = b;
        b = aux % b;
    }
}

// c) mdc3(a,b,c): retorna o máximo divisor comum entre a, b e c.
int mdc3(int a, int b, int c) {
    return(mdc(mdc(a, b), c));
}

// d) fib(n): retorna o n-ésimo termo da série de Fibonacci
int fib(int n) {
    int sum = 0;
    int first = 0;
    int second = 1;
    for(int i = 2; i < n; ++i) {
        sum = first + second;
        first = second;
        second = sum;
    }
    return(sum);
}

// e) primo(x): predicado que testa se um número x é primo.
int primo(int x) {
    for(int i = 2; i < x; ++i) if (x % i == 0) return(0);
    return(1);
}

// f) decrescente(x): procedimento que escreve uma seqüência de inteiros menores que x e maiores que 0.
void decrescente(int x) {
    for(int i = x; i > 0; --i) printf("%d\n", i);
}

// g) res(a,b): retorna o resto da divisão entre a e b.
int res(int a, int b) {
    while(a / b != 1)
        b = a / b * b;
    return(a - b);
}

// h) form(n): retorna o valor do somatório de i*i, com i variando de 1 até n.
int form(int n) {
    int sum = 0;
    for(int i = 1; i <= n; ++i)
        sum += i*i;
    return(sum);
} 

// i) mmc(a, b): retorna o menor múltiplo comum de a e b.
int mmc(int a, int b) {
    int aux = a;
    while(1) {
        if (aux % a == 0 && aux % b == 0) return(aux);
        else aux += 1;
    }
}

// j) div(a, b): retorna o resultado da divisão inteira de a por b.
int div(int a, int b) {
    int count = 0;
    while(a >= b) {
        a = a-b;
        ++count;
    }
    return(count);
}

// l) sqrt(n): retorna a raiz quadrada de n (com precisão de 0.001).
int sqrta(int n) {
    return 0;
}

// m) dig(n): retorna a soma dos dígitos de um inteiro positivo n.
int dig(int n) {
    int sum = 0;
    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return(sum);
}

// n) exp(k, n): retorna k^n
int expo(int k, int n) {
    int result = k;
    for(int i = 1; i < n; ++i)
        result *= k;
    return(result);
}

// o) crescente(x): escreve em ordem crescente, todos os inteiros maiores que 0 e menores ou iguais a x.
void crescente(int x) {
    for(int i = 1; i <= x; ++i)
        printf("%d\n", i);
}

int main() {
    crescente(10);
    return 0;
}