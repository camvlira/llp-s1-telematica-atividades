#include <stdio.h>

struct Dados {
    int idade;
    char apelido[50];
};

int main() {
    struct Dados dados;

    printf("Digite o apelido: ");
    fgets(dados.apelido, sizeof(dados.apelido), stdin);

    printf("Digite a idade: ");
    scanf("%i", &dados.idade);

    FILE *arquivo = fopen("dados.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    fprintf(arquivo, "Apelido: %s", dados.apelido);
    fprintf(arquivo, "Idade: %i", dados.idade);
    fclose(arquivo);

    printf("Dados gravados com sucesso no arquivo.\n");
    
    return 0;
}