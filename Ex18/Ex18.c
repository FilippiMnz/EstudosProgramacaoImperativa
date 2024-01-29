#include <stdio.h>

int main() {
    int numGatosCapturados;
    // Solicita o número de gatos capturados ao usuário
    printf("Digite o número de gatos capturados: ");
    scanf("%d", &numGatosCapturados);
    // Verifica se o número de gatos capturados é 4 ou menos
    if (numGatosCapturados <= 4) {
        printf("Todos os veterinários participarão da castração dos gatos.\n");
    } else {
        // Calcula o número de castrações por veterinário experiente
        int castracoesExperientes = numGatosCapturados / 4;
        // Calcula o número de castrações para o veterinário recém formado
        int castracoesRecemFormado = numGatosCapturados % 4;
        // Exibe a distribuição das castrações
        printf("Cada veterinário experiente realizará %d castrações.\n", castracoesExperientes);
        printf("O veterinário recém formado realizará %d castrações.\n", castracoesRecemFormado);
    }
    return 0;
}
