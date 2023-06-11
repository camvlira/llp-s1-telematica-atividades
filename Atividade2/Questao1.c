#include <stdio.h>

void matrizSum(int n, int MatA[][n], int MatB[][n], int MatC[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            MatC[i][j] = MatA[i][j] + MatB[i][j];
        }}}
int main() {
    int tamMatriz = 3;
    int Mat1[3][3] = {{1, 5, 3}, {2, 5, 1}, {7, 1, 3}};
    int Mat2[3][3] = {{1, 3, 3}, {1, 6, 3}, {3, 4, 1}};
    int MatSum[3][3];

    matrizSum(tamMatriz, Mat1, Mat2, MatSum);
    
    printf("Matriz A:\n");
    for (int i = 0; i < tamMatriz; i++) {
        for (int j = 0; j < tamMatriz; j++) {
          printf("%i ", Mat1[i][j]);
        } printf("\n");}

        printf("Matriz B:\n");
    for (int i = 0; i < tamMatriz; i++) {
        for (int j = 0; j < tamMatriz; j++) {
          printf("%i ", Mat2[i][j]);
        } printf("\n");}

        printf("Soma da matrizes:\n");
    for (int i = 0; i < tamMatriz; i++) {
        for (int j = 0; j < tamMatriz; j++) {
          printf("%i ", MatSum[i][j]);
        } printf("\n");}
    
    return 0;
}