#include<stdio.h>

// a) fat(n): retorna o valor do fatorial de n.
long int fat(int n) {
    if(n==0) return(1);
    return(n*fat(n-1));
}

// b) mdc(a,b): retorna o máximo divisor comum entre a e b.
int mdc(int a, int b) {
    if(a%b==0) return(b);
    return(mdc(b, a%b));
}

// c) mdc3(a,b,c): retorna o máximo divisor comum entre a, b e c.
int mdc3(int a, int b, int c) {
    return(mdc(mdc(a, b), c));
}

// d) fib(n): retorna o n-ésimo termo da série de Fibonacci
int fib(int n) {
    if(n==1) return(1);
    else if(n==2) return(1);
    return(fib(n-1)+fib(n-2));
}

// e) primo(x): predicado que testa se um número x é primo.
int primo(int x, int y) {
    if(y==1) return(1);
    if(x==1) return(0);
    if(x%y==0) return(0);
    return(primo(x, y-1));
}

// f) decrescente(x): procedimento que escreve uma seqüência de inteiros menores que x e maiores que 0.
int decrescente(int x) {
    printf("%i\n", x);
    if(x==1) return(1);
    return(decrescente(x-1));
}

// g) res(a,b): retorna o resto da divisão entre a e b.
int res(int a, int b) {
    if(a/b==1) return(a-b);
    return(res(a, (a/b)*b));
}

// h) form(n): retorna o valor do somatório de i*i, com i variando de 1 até n.
int form(int n) {
    if(n==1) return(1);
    return((n*n)+form(n-1));
}

// i) mmc(a, b): retorna o menor múltiplo comum de a e b.
int mmc(int a, int b) {
    return((a*b)/mdc(a, b));
}

// j) div(a, b): retorna o resultado da divisão inteira de a por b.
int div(int a, int b) {
    if(a < b) return(0);
    return(1+div(a-b, b));
}

// l) sqrt(n): retorna a raiz quadrada de n (com precisão de 0.001).
float raiz(float n, float chute) {
    if(chute*chute <= n+0.1 && chute*chute >= n-0.1) return(chute);
    if(chute*chute > n) return(raiz(n, chute/2));
    if(chute*chute < n) return(raiz(n, 3*chute/2));
}

// m) dig(n): retorna a soma dos dígitos de um inteiro positivo n. A soma dos dígitos de 132, por exemplo, é 6.
int dig(unsigned int n) {
    if(n<10) return(n);
    printf("%d %d ", n, n/10);
    return(n%10+dig(n/10));
}

// n) exp(k, n): retorna k^n
int expo(int k, int n) {
    if(n==0) return 1;
    return(k*expo(k, n-1));
}

// o) crescente(x): escreve em ordem crescente, todos os inteiros maiores que 0 e menores ou iguais a x.
int crescente(int x, int y) {
    printf("%i\n", y);
    if(x==y) return x;
    return(crescente(x, y+1));
}

// int main() {
//     int a, b, c;
//     printf("Insira a, b e c: ");
//     scanf("%i %i %i", &a, &b, &c);
//     printf("O mdc de %i, %i e %i eh %i", a, b, c, mdc3(a, b, c));
//     return 0;
// }


int main() {
    int x;
    printf("Insira x: ");
    scanf("%d", &x);
    printf("%d", dig(x));
    return 0;
}