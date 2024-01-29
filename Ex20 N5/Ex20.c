#include <stdio.h>

int main() {
    int numeroN, divisorA, divisorB;
    //Solicita ao usuário os valores de N, A e B
    printf("Digite o valor de N: ");
    scanf("%d", &numeroN); //entrada de dado A
    printf("Digite o valor de A: ");
    scanf("%d", &divisorA); //Entrada de dados B
    printf("Digite o valor de B: ");
    scanf("%d", &divisorB); // Entrada de Dados C 
    // Verifica se N é divisível por A ou B, mas não pelos dois simultaneamente
    if ((numeroN % divisorA == 0 && numeroN % divisorB != 0) ||
        (numeroN % divisorB == 0 && numeroN % divisorA != 0)) {
        printf("ATENDE CONDICAO\n");
    } else {
        printf("NAO ATENDE CONDICAO\n");
    }
    return 0;
}
