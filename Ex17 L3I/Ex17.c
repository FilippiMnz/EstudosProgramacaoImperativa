#include <stdio.h>

int main() {
    int NumeroPassageiros;
   // Solicita o número de passageiros ao user
    printf("Digite o número de passageiros: ");
    scanf("%d", &NumeroPassageiros);
   // Verifica se a Kombi é suficiente para todos os passageiros
    if (NumeroPassageiros <= 11) {
        printf("Sr. Zé levará todos os passageiros de Kombi.\n");
    } else {
        // Calcula o número de viagens necessárias
        int numViagens = (NumeroPassageiros / 11) + (NumeroPassageiros % 11 != 0);
        // Calcula o número de passageiros que irão de coletivo
        int numPassagensColetivo = NumeroPassageiros % 11;
        // Exibe o resultado
        printf("Seu Zé fará %d viagens de Kombi e %d passageiros irão de coletivo.\n", numViagens, numPassagensColetivo);
    }
    return 0;
}
