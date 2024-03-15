#include <stdio.h>

float calcularJuros(float valor, int meses) {
    return valor * 0.1 * meses;
}

void exibirParcelas(float valor, int meses) {
    float juros_total, total, valor_parcela;

    for (int i = 1; i <= meses; i++) {
        juros_total = calcularJuros(valor, i);
        total = valor + juros_total;
        valor_parcela = total / i;
        printf("Pagamento em %d meses - Juros: R$%.2f - Total: R$%.2f - Parcela %d x R$%.2f\n", i, juros_total, total, i, valor_parcela);
    }
}

int main() {
    float valor_compra;
    int meses;

    printf("Digite o valor da compra: R$");
    scanf("%f", &valor_compra);

    printf("Digite a quantidade de meses para parcelamento (máximo 10): ");
    scanf("%d", &meses);

    if (valor_compra > 300 && meses > 0 && meses <= 10) {
        exibirParcelas(valor_compra, meses);
    } else {
        printf("Erro: Valor da compra deve ser maior que R$300 e o número de meses deve estar entre 1 e 10.\n");
    }

    return 0;
}
