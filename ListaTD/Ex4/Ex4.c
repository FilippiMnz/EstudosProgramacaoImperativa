/*
Escrever programa para ler o nome de uma pessoa,
composto por nome e sobrenome (entre nome e
sobrenome há um espaço em branco). E exibir,
sobrenome em maiúsculo, seguido de vírgula e do nome
da pessoa. Efetuar essa operação para tantas entradas quantas
o usuário desejar.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para formatar o nome e sobrenome
void formatarNome(char nomeCompleto[]) {
    int tamanho = strlen(nomeCompleto); //strlen, da biblioteca string.h >> retorna o tamanho da string//char

    // Encontrar o índice do espaço que separa o nome do sobrenome
    int indiceEspaco = -1;
    for (int i = 0; i < tamanho; i++) {
        if (nomeCompleto[i] == ' ') {
            indiceEspaco = i;
            break;
        }
    }

    if (indiceEspaco != -1) {
        // Imprimir sobrenome em maiúsculas, seguido de vírgula e espaço
        for (int j = indiceEspaco + 1; j < tamanho; j++) {
            printf("%c", toupper(nomeCompleto[j]));
        }
        printf(", ");

        // Imprimir o nome com a primeira letra em maiúscula e o restante minúscula
        printf("%c", toupper(nomeCompleto[0])); // Primeira letra do nome em maiúscula
        for (int n = 1; n < indiceEspaco; n++) {
            printf("%c", tolower(nomeCompleto[n])); // Restante em minúscula
        }
    }
}

int main() {
    char nomeCompleto[100]; // Tamanho máximo do nome completo
    char continuar;

    do {
        // Solicita ao usuário que insira o nome completo
        printf("Digite o nome completo (nome e sobrenome): ");
        fgets(nomeCompleto, sizeof(nomeCompleto), stdin); // Lê a linha inteira incluindo espaços
        
        // Remover a quebra de linha (\n) inserida pelo fgets
        nomeCompleto[strcspn(nomeCompleto, "\n")] = '\0'; //strcpn retorna o numero de caracteres antes de uma determinada condição, no caso, ate o espaço(caracter nulo)

        // chama a função FormatarNome em cima da entrada do cliente 
        formatarNome(nomeCompleto);

        // Pergunta ao usuário se deseja continuar
        printf("\nDeseja inserir outro nome? (s/n): ");
        scanf(" %c", &continuar);
        getchar(); // Limpa o buffer de entrada
    } while (continuar == 's' || continuar == 'S'); //caso o usuario digitar n, o programa finaliza

    return 0;
}
