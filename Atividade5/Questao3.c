#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arq;
    char caract;
    char nomeArq[100];
    int contador = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArq);
    
    arq = fopen(nomeArq, "r");
    if (arq == NULL) {
        printf("Arquivo não encontrado.\nTente novamente.\n");
        return 1;
    }
    
    while ((caract = fgetc(arq)) != EOF) {
        caract = tolower(caract);
        
        if (caract == 'a' || caract == 'e' || caract == 'i' || caract == 'o' || caract == 'u') {
            contador++;
        }
    }
    fclose(arq);
    
    printf("O arquivo contém %i vogais.\n", contador);
    
    return 0;
}