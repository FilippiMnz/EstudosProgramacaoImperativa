#include <stdio.h>

int main() {
    int N;
    // Ler o número do user
    printf("Digite um numero de 1 a 40: ");
    scanf("%d", &N);
    // Verificar se o valor de N está dentro do intervalo permitido
    if (N < 1 || N > 40) {
        printf("O valor de N deve estar no intervalo de 1 a 40.\n");
        return 1; // Encerrar o programa com código de erro
    }
    // Loop para as N iterações
    for (int i = 1; i <= N; i++) {
        // Imprimir os números de 1 até o número da iteração atual
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
