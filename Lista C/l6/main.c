#include <stdio.h>
#include <stdlib.h>

int** multiplicarMatrizes(int** matriz1, int** matriz2, int linhas1, int colunas1, int colunas2) {
    if (colunas1 != linhas2) {
        printf("Não é possível multiplicar as matrizes. O número de colunas da primeira matriz deve ser igual ao número de linhas da segunda matriz.\n");
        return NULL;
    }

    int** resultado = (int**)malloc(linhas1 * sizeof(int*));
    for (int i = 0; i < linhas1; i++) {
        resultado[i] = (int*)malloc(colunas2 * sizeof(int));
    }

    if (resultado == NULL) {
        printf("Falha na alocação de memória.");
        exit(1);  
    }

    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < colunas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return resultado;
}

int main() {
    int linhas1 = 2, colunas1 = 3;
    int linhas2 = 3, colunas2 = 2;

    int** matriz1 = (int**)malloc(linhas1 * sizeof(int*));
    int** matriz2 = (int**)malloc(linhas2 * sizeof(int*));

    for (int i = 0; i < linhas1; i++) {
        matriz1[i] = (int*)malloc(colunas1 * sizeof(int));
    }

    for (int i = 0; i < linhas2; i++) {
        matriz2[i] = (int*)malloc(colunas2 * sizeof(int));
    }

  

    int** resultado = multiplicarMatrizes(matriz1, matriz2, linhas1, colunas1, colunas2);

    if (resultado != NULL) {
        printf("Resultado da multiplicação das matrizes:\n");
        for (int i = 0; i < linhas1; i++) {
            for (int j = 0; j < colunas2; j++) {
                printf("%d ", resultado[i][j]);
            }
            printf("\n");
        }
    }


    return 0;
}
