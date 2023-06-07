#include <stdio.h>

int main() {
    FILE *arq;
    char caract;


    arq = fopen("arq.txt", "w");

   
    printf("Digite os caracteres a serem gravados no arquivo e digite '0' para finalizar: \n");
    while (1) {
        scanf(" %c", &caract);
        if (caract == '0') {
            break;
        }
        fputc(caract, arq);
    }
    
    fclose(arq);
    
    arq = fopen("arq.txt", "r");
    printf("Caracteres armazenados:\n");
    while ((caract = fgetc(arq)) != EOF) {
        printf("%c", caract);
    }
    fclose(arq);

    return 0;
}