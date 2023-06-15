#include <stdio.h>
#include <stdlib.h>

int** criarMatriz(int linhas, int colunas) {
    int** matriz = (int**)malloc(linhas * sizeof(int*));
    if (matriz == NULL) {
        printf("Erro.\nTente novamente.\n");
        exit(1);
    }
    
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memória para a matriz.\n");
            exit(1);
        }
    }
    return matriz;
}

void preencherMatriz(int** matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void somarMatrizes(int** matrizA, int** matrizB, int** matrizSoma, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void exibirMatriz(int** matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }
}

void liberarMatriz(int** matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas das matrizes: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas das matrizes: ");
    scanf("%d", &colunas);

    int** matrizA = criarMatriz(linhas, colunas);
    int** matrizB = criarMatriz(linhas, colunas);
    int** matrizSoma = criarMatriz(linhas, colunas);

    printf("Preencha a matriz A:\n");
    preencherMatriz(matrizA, linhas, colunas);

    printf("Preencha a matriz B:\n");
    preencherMatriz(matrizB, linhas, colunas);

    somarMatrizes(matrizA, matrizB, matrizSoma, linhas, colunas);

    printf("Matriz A:\n");
    exibirMatriz(matrizA, linhas, colunas);

    printf("Matriz B:\n");
    exibirMatriz(matrizB, linhas, colunas);

    printf("Soma das matrizes:\n");
    exibirMatriz(matrizSoma, linhas, colunas);

    liberarMatriz(matrizA, linhas);
    liberarMatriz(matrizB, linhas);
    liberarMatriz(matrizSoma, linhas);

    return 0;
}