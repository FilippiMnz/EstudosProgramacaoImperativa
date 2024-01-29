#include <stdio.h>

int main() {
    int dias, meses, diasRestantes;

    // Ler a quantidade de dias
    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias);

    // Inicializar os contadores
    meses = 0;
    diasRestantes = 0;

    // Loop para lidar com os dias restantes
    while (dias >= 30) {
        dias = dias - 30;
        meses = meses + 1;
    }

    diasRestantes = dias;

    // Exibir o resultado
    if (meses == 0 && diasRestantes == 0) {
        printf("Menos de 1 mês.\n");
    } else {
        if (meses > 0) {
            printf("%d %s", meses, (meses == 1) ? "mês" : "meses");
            if (diasRestantes > 0) {
                printf(" e ");
            }
        }
        if (diasRestantes > 0) {
            printf("%d %s", diasRestantes, (diasRestantes == 1) ? "dia" : "dias");
        }
        printf("\n");
    }

    return 0;
}
