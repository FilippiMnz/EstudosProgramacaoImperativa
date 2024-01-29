#include <stdio.h>

int main() {
    int numeroLido, numeroGerado = 0;
    // Solicita um número inteiro de três dígitos ao usuário
    printf("Digite um numero inteiro de tres digitos: ");
    scanf("%d", &numeroLido);
    // Verifica se o número possui três dígitos
    if (numeroLido < 100 || numeroLido > 999) {
        printf("Por favor, digite um numero inteiro de tres digitos.\n");
        return 1; // Encerra o programa com código de erro
    }
    // Calcula o número invertido
    int digito1 = numeroLido % 10;
    int digito2 = (numeroLido / 10) % 10;
    int digito3 = numeroLido / 100;
    numeroGerado = digito1 * 100 + digito2 * 10 + digito3;
    // Compara os números e informa a relação entre eles
    if (numeroGerado > numeroLido) {
        printf("Numero Gerado MAIOR que Numero Lido.\n");
    } else if (numeroGerado < numeroLido) {
        printf("Numero Lido MAIOR que Numero Gerado.\n");
    } else {
        printf("Numero Gerado IGUAL ao Numero Lido.\n");
    }
    // Imprime o número gerado
    printf("Numero Gerado: %d\n", numeroGerado);
    return 0;
}
