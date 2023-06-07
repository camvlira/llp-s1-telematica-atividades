#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arq;
    char nomeArq[100];
    char caract;
    int Vogais = 0;
    int Conso = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArq);

    arq = fopen(nomeArq, "r");

    if (arq == NULL) {
        printf("Arquivo não encontrado.\nTente novamente.\n");
        return 1;
    }

    while ((caract = fgetc(arq)) != EOF) {
        caract = tolower(caract);

        if (caract >= 'a' && caract <= 'z'){
            if (caract == 'a' || caract == 'e' || caract == 'i' || caract == 'o' || caract == 'u') {
                Vogais++;
            } else {
                Conso++;
            }
        }
    }
    fclose(arq);

    printf("O arquivo possui %i vogais e %i consoantes.\n", Vogais, Conso);

    return 0;
}