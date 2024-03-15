#include <stdio.h>
#include <stdlib.h>

int main() {
    const int NumVendedor = 300; //declaração da quantidade de vendedores/chamadas que precisam ser feitas, pode ser modificado a criteiro do cliente
    int vendas[NumVendedor]; //declaração de Array de tamanho igual a quantidade de Vendedores
    int totalVendedores = NumVendedor;

    // Função para calcular a média de vendas do grupo de vendedores
    float calcularMedia(int vendas[], int totalVendedores) {
        int soma = 0;
        for (int i = 0; i < totalVendedores; i++) { //for para dar um valor da soma total que vai ser o valor da soma + o valor de cada venda
            soma += vendas[i];
        }
        return (float)soma / totalVendedores;  //retorna a media 
    }

    // Leitura das vendas dos vendedores
    printf("Digite o total de vendas de cada vendedor da Matura:\n");
    for (int i = 0; i < NumVendedor; i++) {
        printf("Total de vendas do vendedor %d: ", i + 1); //numero do vendedor sempre será incrementado 
        scanf("%d", &vendas[i]); // irá guardar o valor das vendas no array vendas que possui o mesmo tamanho da quantidade maxima de vendedores
    }

    // Calcula a média de vendas do grupo de vendedores
    float media = calcularMedia(vendas, totalVendedores);

    // Conta quantos vendedores tiveram desempenho abaixo da média
    int abaixoMedia = 0;
    for (int i = 0; i < totalVendedores; i++) {
        if (vendas[i] < media) {
            abaixoMedia++;
        }
    }

    // Exibe os resultados
    printf("\nMédia de vendas do grupo de vendedores da Matura: %.2f\n", media);
    printf("Número de vendedores da Matura com desempenho abaixo da média: %d\n", abaixoMedia);

    return 0;
}
