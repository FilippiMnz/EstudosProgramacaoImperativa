/*
Escrever programa para ler um nome e, independente
de como este foi escrito, exibir a inicial maiúscula e o
restante minúscula. Sendo:
● Cadeia[P] = toupper(Cadeia[P]);
Converte a letra da posição P da string
Cadeia para maiúscula, da biblioteca
ctype.h.
● Cadeia[P] = tolower(Cadeia[P]);
Converte a letra da posição P da string
Cadeia para minúscula, da biblioteca
ctype.h.
*/
#include <stdio.h>
#include <ctype.h>

// Função para converter a primeira letra para maiúscula e o restante para minúscula
void primeiraMaiuscula(char nome[]) {
    int i = 0;
    // Converte o primeiro caractere para maiúscula
    nome[i] = toupper(nome[i]); //i começa sendo o indice 0, logo, o primeiro caracter 
    i++;
    // Converte os caracteres restantes para minúscula
    while (nome[i] != '\0') { //enquanto não chegar no caracter nulo ele vai transformando em minuscula
        nome[i] = tolower(nome[i]);
        i++;
    }
}

int main() {
    char nomeUser[50];

    while (1) {
        printf("Digite o nome ou 'sair' para encerrar: ");
        fgets(nomeUser, sizeof(nomeUser), stdin);

        // Verifica se o usuário deseja sair
        if (strcmp(nomeUser, "sair\n") == 0) {
            printf("Programa Encerrado");
            break;
        }
        // Extrai o nome e converte a primeira letra para maiúscula e o restante para minúscula
        primeiraMaiuscula(nomeUser);
        printf("%s", nomeUser);
    }

    return 0;
}
