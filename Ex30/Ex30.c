#include <stdio.h>

int main() {
    float pH;
    // Loop para receber sequência de números até -1
    while (1) {
        // Ler o valor de pH
        printf("Digite o valor de pH: ");
        scanf("%f", &pH);
        // Verificar se o usuário deseja encerrar o programa
        if (pH == -1) {
            break;
        }
        // Determinar a acidez
        if (pH < 7) {
            printf("Acidez: ACIDA\n");
        } else if (pH > 7) {
            printf("Acidez: BASICA\n");
        } else {
            printf("Acidez: NEUTRA\n");
        }
    }

    printf("Programa encerrado.\n");
    return 0;
}
