#include <stdio.h>
#include <ctype.h> //usar o toupper

int main() {
    int acertosPortugues, acertosMatematica, candidatosAprovados = 0;
    float notaRedacao;
    char resposta;

    do {
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
        // Perguntar ao usuário se deseja continuar
        printf("Deseja avaliar outro candidato? (S para Sim, N para Não): ");
        scanf(" %c", &resposta);
        // Converter a resposta para maiúscula
        resposta = toupper(resposta);

    } while (resposta == 'S');
    // Exibir o total de candidatos aprovados
    printf("Total de candidatos aprovados: %d\n", candidatosAprovados);

    return 0;
}
