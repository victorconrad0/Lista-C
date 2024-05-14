#include <stdio.h>

void imprimeFibonacci(int n) {
    int termo1 = 0, termo2 = 1, proximoTermo;

    if (n >= 1)
        printf("%d ", termo1);

    if (n >= 2)
        printf("%d ", termo2);

    for (int i = 3; i <= n; i++) {
        proximoTermo = termo1 + termo2;
        printf("%d ", proximoTermo);
        termo1 = termo2;
        termo2 = proximoTermo;
    }
}

int main() {
    int n;
    printf("Digite o número de termos da série de Fibonacci a serem impressos: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Por favor, insira um número natural maior ou igual a 1.\n");
        return 1;
    }

    printf("Série de Fibonacci com os primeiros %d termos:\n", n);
    imprimeFibonacci(n);

    return 0;
}
