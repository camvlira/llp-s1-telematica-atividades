//1) Imprime a diagonal principal de uma matriz quadrada qualquer.
#include <stdio.h>

int main() {
  int matriz[3][3] = {{5, 2, 3}, {1, 5, 2}, {7, 1, 1}};
  int i;

  printf("Diagonal:\n");
  for (i = 0; i < 3; i++) {
    printf("%i\n", matriz[i][i]);
 } 

  return 0;
}