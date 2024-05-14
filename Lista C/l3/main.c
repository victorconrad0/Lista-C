#include <stdio.h>
#include <math.h>

double calcularPi(int n) {
    double pi = 0.0;
    for (int i = 1; i <= n; i++) {
        int sinal = (i % 2 == 0) ? -1 : 1;
        double termo = (double)sinal * 4 / (2 * i - 1);
        pi += termo;
    }
    return pi;
}

int main() {
    int n;
    printf("Digite o número de termos para calcular π: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Por favor, insira um número natural maior ou igual a 1.\n");
        return 1; // Saída com erro
    }

    double resultado = calcularPi(n);
    printf("π calculado com os primeiros %d termos é aproximadamente %.15f\n", n, resultado);

    return 0;
}
