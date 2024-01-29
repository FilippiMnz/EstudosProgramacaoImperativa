#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float media;
    // Solicita as notas ao usuário
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    // Calcula a média ponderada
    media = (nota1 * 1 + nota2 * 2 + nota3 * 3) / 6;
    // Determina a situação do aluno
    if (media >= 7) {
        printf("APROVADO\n");
    } else if (media >= 5) {
        printf("EM RECUPERACAO\n");
    } else {
        printf("REPROVADO\n");
    }
    return 0;
}
