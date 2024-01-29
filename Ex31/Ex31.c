#include <stdio.h>

int main() {
    int acertosPortugues, acertosMatematica, candidatosAprovados = 0;
    float notaRedacao;

    // Loop para processar cada candidato
    while (1) {
        // Ler a quantidade de questões certas em português
        printf("Digite a quantidade de questoes certas em portugues: ");
        scanf("%d", &acertosPortugues);

        // Verificar se o usuário deseja encerrar o programa
        if (acertosPortugues < 0) {
            break;
        }

        // Ler a quantidade de questões certas em matemática
        printf("Digite a quantidade de questoes certas em matematica: ");
        scanf("%d", &acertosMatematica);

        // Ler a nota de redação
        printf("Digite a nota de redacao: ");
        scanf("%f", &notaRedacao);

        // Verificar se o candidato foi aprovado
        if ((acertosPortugues >= 0.8 * 50) && (acertosMatematica >= 0.6 * 35) && (notaRedacao >= 7)) {
            candidatosAprovados++;
        }
    }

    // Exibir o total de candidatos aprovados
    printf("Total de candidatos aprovados: %d\n", candidatosAprovados);

    return 0;
}
