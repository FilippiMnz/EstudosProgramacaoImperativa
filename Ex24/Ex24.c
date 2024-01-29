#include <stdio.h>
#include <math.h>
// Função para calcular a área de um quadrado
float calcularArea(float lado) {
    return lado * lado;
}
// Função para calcular o perímetro de um quadrado
float calcularPerimetro(float lado) {
    return 4 * lado;
}
// Função para calcular a diagonal de um quadrado
float calcularDiagonal(float lado) {
    return sqrt(2) * lado;
}
// Função principal para exibir o menu e interagir com o usuário
void exibirMenu() {
    int opcao;
    float lado;

    // Exibir menu
    printf("Menu:\n");
    printf("1 - Calcular Area\n");
    printf("2 - Calcular Perimetro\n");
    printf("3 - Calcular Diagonal\n");
    printf("Escolha uma opcao 1/2/3: ");
    scanf("%d", &opcao);
    // Verificar a opção escolhida
    switch (opcao) {
        case 1:
        case 2:
        case 3:
            // Ler a medida do lado do quadrado
            printf("Digite a medida do lado do quadrado: ");
            scanf("%f", &lado);
            // Realizar o cálculo conforme a opção escolhida
            if (opcao == 1) {
                printf("Area do quadrado: %.2f\n", calcularArea(lado));
            } else if (opcao == 2) {
                printf("Perimetro do quadrado: %.2f\n", calcularPerimetro(lado));
            } else {
                printf("Diagonal do quadrado: %.2f\n", calcularDiagonal(lado));
            }
            break;
        default:
            // Mensagem de erro para opção inválida
            printf("Opcao invalida!\n");
            break;
    }
}
int main() {
    // Chamada da função principal para exibir o menu e realizar cálculos
    exibirMenu();
       return 0;
}
