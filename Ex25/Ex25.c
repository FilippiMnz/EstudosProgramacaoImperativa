#include <stdio.h>
#include <ctype.h>  

// Função para identificar e exibir a posição do dígito
void identificarPosicao(char opcao, int numero) {
    switch (opcao) {
        case 'U':
            printf("Unidade: %d\n", numero % 10);
            break;
        case 'D':
            printf("Dezena: %d\n", (numero / 10) % 10);
            break;
        case 'C':
            printf("Centena: %d\n", (numero / 100) % 10);
            break;
        case 'M':
            printf("Unidade de Milhar: %d\n", (numero / 1000) % 10);
            break;
        case 'Z':
            printf("Dezena de Milhar: %d\n", (numero / 10000) % 10);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
}

int main() {
    char opcao;
    int numero;
   // Exibir menu
    printf("Menu:\n");
    printf("U - Identificar Unidade\n");
    printf("D - Identificar Dezena\n");
    printf("C - Identificar Centena\n");
    printf("M - Identificar Unidade de Milhar\n");
    printf("Z - Identificar Dezena de Milhar\n");
    printf("Escolha uma opcao U/D/C/M/Z: ");
    scanf(" %c", &opcao);  

    // Converte a opção para maiúsculas
    opcao = toupper(opcao);

    // Verifica qual a opção que foi escolhida
    switch (opcao) {
        case 'U':
        case 'D':
        case 'C':
        case 'M':
        case 'Z':
            // Ler um número de 0 a 99.999
            printf("Digite um numero de 0 a 99999: ");
            scanf("%d", &numero);

            // Chamada da função para identificar e exibir a posição do dígito
            identificarPosicao(opcao, numero);
            break;
        default:
            // Mensagem de erro para opção inválida
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
