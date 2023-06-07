#include <stdio.h>

int main() {
    char nomeArq[100];
    int Linhas = 0;
    FILE *arq;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArq);

    arq = fopen(nomeArq, "r");
    if (arq == NULL) {
        printf("Arquivo não encontrado.\nTente novamente.\n");
        return 1;
    }

    while (!feof(arq)) {
        char c = fgetc(arq);
        if (c == '\n') {
            Linhas++;
        }
    }

    fclose(arq);

    printf("O arquivo possui %i linhas.\n", Linhas);

    return 0;
}