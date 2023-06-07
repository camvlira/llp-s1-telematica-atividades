#include <stdio.h>
#include <ctype.h>

void contarAparenciaDeLetras(const char *nomeArq, int *aparencias) {
    FILE *arq;
    char caract;

    arq = fopen(nomeArq, "r");
    if (arq == NULL) {
        printf("Arquivo não encontrado.\nTente novamente.\n");
        return;
    }

    while ((caract = fgetc(arq)) != EOF) {
        caract = tolower(caract); 

        if (caract >= 'a' && caract <= 'z') {
            aparencias[caract - 'a']++;
        }
    }
    fclose(arq);
}
int main() {
    char nomeArq[100];
    int aparencias[26] = {0};

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArq);

    contarAparenciaDeLetras(nomeArq, aparencias);

    printf("As letras do alfabeto aparecem nessa quantidade:\n");
    for (int i = 0; i < 26; i++) {
        char letra = 'A' + i;
        printf("%c: %i\n", letra, aparencias[i]);
    }
    return 0;
}