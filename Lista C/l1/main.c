#include <stdio.h>

int ehPar(int valor) {
    if (valor % 2 == 0) {
        return 1;  
    } else {
        return 0; 
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int resultado = ehPar(numero);

    if (resultado) {
        printf("%d é um número par.\n", numero);
    } else {
        printf("%d é um número ímpar.\n", numero);
    }

    return 0;
}
