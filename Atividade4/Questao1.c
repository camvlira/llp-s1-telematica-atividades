#include <stdio.h>
#include <math.h>

int main() {
    int numero;

printf("Digite um número inteiro: ");
scanf("%i", &numero);

    if(numero <= 0) {
        printf("\nNúmero inválido. \n");
} else{
    double logaritmo = log10(numero);
        printf("\nO logaritmo do número digitado é %.2f. \n",  logaritmo);
}
    return 0;
}