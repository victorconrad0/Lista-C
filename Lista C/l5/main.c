#include <stdio.h>
#include <stdlib.h>

int* somarVetores(int vetor1[], int vetor2[], int tamanho) {
    int* resultado = (int*)malloc(tamanho * sizeof(int));

    if (resultado == NULL) {
        printf("Falha na alocação de memória.");
        exit(1);  
    }

    for (int i = 0; i < tamanho; i++) {
        resultado[i] = vetor1[i] + vetor2[i];
    }

    return resultado;
}

int main() {
    int tamanho = 5;  
    int vetor1[] = {1, 2, 3, 4, 5};
    int vetor2[] = {6, 7, 8, 9, 10};

    int* resultado = somarVetores(vetor1, vetor2, tamanho);

    printf("Resultado da soma dos vetores:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", resultado[i]);
    }

    free(resultado); 

    return 0;
}
