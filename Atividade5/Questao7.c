#include <stdio.h>
#include <ctype.h>

typedef struct {
    char primeiroarq[100];
    char segundoarq[100];
} Arquivos;

void asterisco(Arquivos arquivos) {
    FILE *arquivo1, *arquivo2;
    char caract;

    arquivo1 = fopen(arquivos.primeiroarq, "r");
    if (arquivo1 == NULL) {
        printf("Arquivo não encontrado.\nTente novamente.\n");
        return;
    }
    arquivo2 = fopen(arquivos.segundoarq, "w");
    if (arquivo2 == NULL) {
        printf("Arquivo não encontrado.\nTente novamente.\n");
        fclose(arquivo1);
        return;
    }
    while ((caract = fgetc(arquivo1)) != EOF) {
        caract = tolower(caract);

 
        if (caract == 'a' || caract == 'e' || caract == 'i' || caract == 'o' || caract == 'u') {
            caract = '*';
        }

        fputc(caract, arquivo2);
    }
    fclose(arquivo1);
    fclose(arquivo2);

    printf("Segundo arquivo criado com sucesso!\n");
}

int main() {
    Arquivos arquivos;

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", arquivos.primeiroarq);

    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", arquivos.segundoarq);

    asterisco(arquivos);

    return 0;
}