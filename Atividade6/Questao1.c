#include <stdio.h>
#include <stdlib.h>

int** criarmat(int linhas, int colunas) {
    int** mat = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        mat[i] = (int*)malloc(colunas * sizeof(int));
    }
    return mat;
}

void inicializarmat(int** mat, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            mat[i][j] = i + j;
        }
    }
}

void calcularmat(int** matA, int** matB, int** matC, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matA[i][j] = matB[i][j] + matC[i][j];
        }
    }
}

void mostrarmat(int** mat, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas = 3;
    int colunas = 3;

    int** matA = criarmat(linhas, colunas);
    int** matB = criarmat(linhas, colunas);
    int** matC = criarmat(linhas, colunas);

    inicializarmat(matB, linhas, colunas);
    inicializarmat(matC, linhas, colunas);

    calcularmat(matrizA, matB, matC, linhas, colunas);

    printf("Matriz A:\n");
    mostrarmat(matA, linhas, colunas);

    printf("\nMatriz B:\n");
    mostrarmat(matB, linhas, colunas);

    printf("\nMatriz C:\n");
    mostrarmat(matC, linhas, colunas);

    
    for (int i = 0; i < linhas; i++) {
        free(matA[i]);
        free(matB[i]);
        free(matC[i]);
    }
    free(matA);
    free(matB);
    free(matC);

    return 0;
}