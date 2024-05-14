#include <stdio.h>

void imprimeTriangulo(int n) {
    if (n > 0) {
        imprimeTriangulo(n - 1); 
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return 1; 
    }

    imprimeTriangulo(n);

    return 0;
}
