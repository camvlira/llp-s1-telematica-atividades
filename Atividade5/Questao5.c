#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    char nomeArq[100];
    char letra;
    int add = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArq);

    printf("Digite a letra que procura: ");
    scanf(" %c", &letra);

    arq = fopen(nomeArq, "r");

    if (arq == NULL) {
        printf("Arquivo não encontrado.\nTente novamente.\n");
        return 1;
    }

    while (!feof(arq)) {
        char c = fgetc(arq);

        if (c == letra) {
            add++;
        }
    }

    fclose(arq);

    printf("A letra '%c' aparece %i vezes no arquivo.\n", letra, add);

    return 0;
}