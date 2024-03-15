/*
Na disciplina “Programação Imperativa” há 50 alunos e 12
avaliações. Para obtenção de aprovação o aluno deve ter no
mínimo 5 notas maior ou igual a 7. Escrever programa para
ler notas de cada um dos 50 alunos e identificar se foi
aprovado.
*/
#include <stdio.h>

int main() {
    const int Alunos = 3;
    const int Avalicoes = 12;
    const float NotaMinima = 7.0;
    const int NotaMinimaAprovacao = 5;

    float notas[Alunos][Avalicoes];
    int aprovados = 0;

    // Ler as notas de cada aluno
    for (int i = 0; i < Alunos; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);
        for (int j = 0; j < Avalicoes; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }

        // Verificar se o aluno foi aprovado
        int notas_acima_de_sete = 0;
        for (int j = 0; j < Avalicoes; j++) {
            if (notas[i][j] >= NotaMinima) {
                notas_acima_de_sete++;
            }
        }
        if (notas_acima_de_sete >= NotaMinimaAprovacao) {
            printf("Aluno %d foi aprovado!\n", i + 1);
            aprovados++;
        } else {
            printf("Aluno %d foi reprovado.\n", i + 1);
        }
    }

    printf("Número de alunos aprovados: %d\n", aprovados);

    return 0;
}
