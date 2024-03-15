/*
Sabendo-se que Y=toupper(X) corresponde a
função em C (biblioteca ctype.h) que atribui à
variável Y do tipo char o valor da variável X
(também do tipo char) em maiúsculo.

Escrever programa para ler uma palavra com até 20
caracteres e exibi-la com letras maiúsculas.
Exemplos: dado brasileiro, retorna BRASILEIRO.
Dado Nordeste, retorna NORDESTE
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char palavra[21]; // 20 caracteres + '\0'
    
    // Solicita ao usuário que insira a palavra
    printf("Digite uma palavra com no máximo 20 caracteres: ");
    scanf("%20s", palavra); // recebe a palavra 
    
    // Converte cada caractere da palavra para maiúsculo usando toupper()
    for(int i = 0; palavra[i] != '\0'; i++) {
        palavra[i] = toupper(palavra[i]);
    }
    
    // Exibe a palavra convertida para maiúsculo 
    printf("Palavra em maiúsculo: %s\n", palavra);
    
    return 0;
}
