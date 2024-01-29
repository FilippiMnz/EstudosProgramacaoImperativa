#include <stdio.h>

int main() {
    int dias, meses;

    // Ler a quantidade de dias
    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias);

    // Inicializar o contador de meses
    meses = 0;

    // Subtrair 30 dias até que não seja mais possível
    while (dias >= 30) {
        dias -= 30;
        meses++;
    }

    // Exibir o resultado
    printf("A quantidade de meses contidos é %d meses.\n", meses);

    return 0;
}
