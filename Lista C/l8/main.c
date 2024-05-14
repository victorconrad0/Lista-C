#include <stdio.h>

void imprimirTriangulo(int n) {
    if (n == 0) {
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");


    imprimirTriangulo(n - 1);
}

int main() {
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("O número deve ser positivo.\n");
    } else {
        imprimirTriangulo(n);
    }

    return 0;
}
