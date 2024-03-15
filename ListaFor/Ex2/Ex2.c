/*Na loja de Sr. Zé compras acima de R$300,00 podem ser parceladas em
até 10 vezes, para tanto são aplicados juros simples de 10% ao mês,
conforme o número de meses. Dado valor da compra, exibir o valor total
e o valor das parcelas. Aplicar for e função.*/

#include <stdio.h>
float calcularJuros(float valor, int meses) { // calculo de juros, levando em conta uma taxa de 10% ao mês
    return valor * 0.1 * meses;
}

void exibirParcelas(float valor, int meses) {
    float juros_total, total, valor_parcela;
    for (int i = 1; i <= meses; i++) { //loop para calcular a parcela com base na quantidade de meses
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

    if (valor_compra > 300 && meses > 0 && meses <= 10) { //verificação que o valor da compra é maior que 300 e que a quantidade de meses é maior que 0 e menor que 10
        exibirParcelas(valor_compra, meses);
    } else { // caso a compra não tenha 300 reais minimo, ele encerra
        printf("Erro: Valor da compra deve ser maior que R$300 e o número de meses deve estar entre 1 e 10.\n");
    }

    return 0;
}
