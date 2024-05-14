#include <stdio.h>

void somarVetores(int vetor1[], int vetor2[], int resultado[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = vetor1[i] + vetor2[i];
    }
}

int main() {
    int tamanho = 5; 
    int vetor1[tamanho];
    int vetor2[tamanho];
    int resultado[tamanho];

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor2[i]);
    }

    somarVetores(vetor1, vetor2, resultado, tamanho);

    printf("Resultado da soma dos vetores:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", resultado[i]);
    }

    return 0;
}
