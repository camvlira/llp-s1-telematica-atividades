//2)Calcula a matriz soma de duas matrizes quadradas.
#include <stdio.h>

int main(void) {
  int mat1[3][3] = {{2,4,1}, {1,5,1}, {1,1,7}}; 
  int mat2[3][3] = {{2,3,1}, {5,1,1}, {1,3,6}}; 

  int Soma[3][3];

  int i, j;
   for(i=0; i<3; i++) {
     for(j=0; j<3; j++){

       Soma[i][j] = mat1[i][j] + mat2[i][j];
       printf("Matriz[%i][%i]: %i\n", i, j, Soma[i][j]);
     }
   }
  
  return 0;
}