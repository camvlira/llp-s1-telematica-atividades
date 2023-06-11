#include <stdio.h>

int main() {
    float prova1, prova2, prova3;
    float media;

    printf("Digite a nota da primeira prova: \n");
    scanf("%f", &prova1);

    printf("Digite a nota da segunda prova: \n");
    scanf("%f", &prova2);

    printf("Digite a nota da terceira prova: \n");
    scanf("%f", &prova3);

  media = (prova1 + prova2 + (prova3 * 2)) / 4;

    printf("Média: %.2f\n", media);

  if(media >= 60) {
    printf("Aluno aprovado!\n");
  } else {
    printf("Aluno reprovado!\n");
  }
  
  return 0;
}