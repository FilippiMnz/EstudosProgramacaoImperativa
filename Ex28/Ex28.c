#include <stdio.h>
#include <ctype.h>

int main() {
    char resposta;

    do {
        float nota1, nota2, nota3, media;

        // Ler notas do aluno
        printf("Digite a nota 1: ");
        scanf("%f", &nota1);

        printf("Digite a nota 2: ");
        scanf("%f", &nota2);

        printf("Digite a nota 3: ");
        scanf("%f", &nota3);

        // Calcular média
        media = (nota1 + nota2 + nota3) / 3;

        // Verificar se o aluno está aprovado
        if (media >= 7) {
            printf("Aluno aprovado!\n");
        } else if (media > 3) {
            printf("Aluno pode fazer a 4a avaliacao.\n");

            float nota4;
            printf("Digite a nota da 4a avaliacao: ");
            scanf("%f", &nota4);

            // Atualizar a média
            media = (media + nota4) / 2;

            // Verificar se o aluno está aprovado
            if (media >= 5) {
                printf("Aluno aprovado apos a 4a avaliacao!\n");
            } else {
                printf("Aluno reprovado mesmo apos a 4a avaliacao.\n");
            }
        } else {
            printf("Aluno reprovado.\n");
        }

        // Perguntar se deseja verificar outro aluno
        printf("Deseja verificar a situacao de outro aluno? (S para Sim, qualquer outra tecla para Nao): ");
        scanf(" %c", &resposta);
        resposta = toupper(resposta);

    } while (resposta == 'S');

    return 0;
}
