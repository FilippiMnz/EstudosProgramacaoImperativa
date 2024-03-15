/*
Escrever programa para ler uma palavra P qualquer
com até 20 caracteres e identificar quantas vogais P
apresenta. Aplicar função definida pelo programador
Efetuar essa operação para tantas strings quantas o usuário
desejar.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para contar vogais em uma palavra
int contarVogais(char palavra[]) {
    int vogais = 0;
    int tamanho = strlen(palavra);
    
    for (int i = 0; i < tamanho; i++) {
        char c = tolower(palavra[i]); // Converte para minúscula 
        
        // Verifica se o caractere é uma vogal
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        }
    }
    
    return vogais; // retorna a quantidade de vogais
}

int main() {
    char palavra[21]; // 20 caracteres + '\0'
    char opcao[10];
    
    do {
        // Solicita que o usuário que insira a palavra
        printf("Digite uma palavra com no máximo 20 caracteres (ou 'sair' para sair): ");
        scanf("%20s", palavra); // Lê a palavra com no máximo 20 caracteres
        
        // Verifica se o usuário deseja sair
        if (strcmp(palavra, "sair") == 0 || strcmp(palavra, "SAIR") == 0) {
            printf("Encerrando o programa...\n");
            break; // Sai do loop se o usuário digitar 'sair'
        }
        
        // Chama a função contarVogais para contar as vogais 
        int numVogais = contarVogais(palavra);
        
        // imprime o resultado para o usuario
        printf("A palavra '%s' possui %d vogais.\n", palavra, numVogais);
        
    } while (1); // Continua o loop até que o usuário digite 'sair'
    
    return 0;
}
