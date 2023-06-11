#include <stdio.h>

int main() {
    float basemaior, basemenor, altura, area;

    printf("Digite o valor da base maior do trapézio: ");
    scanf("%f", &basemaior);

    printf("Digite o valor da base menor do trapézio: ");
    scanf("%f", &basemenor);

  if (basemaior <= basemenor){
   printf ("Erro. A base maior deve ser maior que a base menor. Tente novamente. ");

   return 1;
 
  }
  
printf("Digite o valor da altura do trapézio: ");
    scanf("%f", &altura);

    area = (basemaior + basemenor) * altura / 2;

    printf("A área do trapézio é: %.2f\n", area);
  
    return 0;
}