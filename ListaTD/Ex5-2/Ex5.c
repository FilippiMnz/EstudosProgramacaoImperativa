/*
Na universidade “DuSabiTudu” os alunos são identificados por
matrículas compostas por 10 dígitos. Os 4 primeiros dígitos
correspondem ao ano em que o aluno entrou na instituição.
Assim, todos os alunos cujas matriculas iniciam por 2012
ingressaram no curso superior no ano de 2012. Os dígitos 5 e 6 da
matrícula correspondem ao curso; sendo: 97 para agroecologia e
99 para gerontologia. Escrever programa para ler a matricula de
100 alunos inscritos no programa “CienciasAlémDasFronteiras” e
identificar quantos alunos ingressaram num dado ano A no curso
de gerontologia. Aplicar função definida pelo programador.
*/
#include <stdio.h>
#include <stdlib.h>

//caso o usuario deseje procurar pela matricula de outros cursos 
int contarAlunosCurso(int matriculas[], int totalAlunos, int ano, int curso) {
    int count = 0;
    
    for(int i = 0; i <totalAlunos; i++){
        int anoMatricula = matriculas[i] /1000000;
        int numeroCurso = (matriculas[i]/ 10000) % 100;

        if (anoMatricula == ano && numeroCurso == curso){
            count++;
        }
    }
}


int main() {
    int numeroAluno = 10;
    int matriculas[numeroAluno]; // Array para armazenar as matrículas dos alunos
    int totalAlunos = 0; // Inicialize o total de alunos como zero
    int anoProcurado;
    char opcao;
    int cursoPesquisa;
    
    do {
        // Leitura das matrículas dos alunos
        printf("Digite as matriculas dos %d alunos:\n", numeroAluno);
        for (int i = 0; i < numeroAluno; i++) {
            printf("Matricula do aluno %d: ", i + 1);
            scanf("%d", &matriculas[totalAlunos]);
            totalAlunos++;
            
            // Verifica se o limite de alunos foi atingido
            if (totalAlunos == 100) {
                break;
            }
            
            // Pergunta ao usuário se deseja ver o resultado ou continuar adicionando matrículas
            printf("Deseja ver o resultado (V) ou continuar adicionando matriculas (C)? ");
            scanf(" %c", &opcao);
            
            // Se o usuário escolher ver o resultado, chama a função para contar alunos de gerontologia
            if (opcao == 'V' || opcao == 'v') {
                // Solicita ao usuário o ano a ser pesquisado
                printf("\nDigite o ano a ser pesquisado: ");
                scanf("%d", &anoProcurado);

                printf("Digite o curso a ser pesquisado (99 para gerontologia e 97 para agroecologia): ");
                scanf("%d", &cursoPesquisa);
                
                // Chamada da função para contar alunos de gerontologia no ano especificado
                int contarAlunosGeral = contarAlunosCurso(matriculas, totalAlunos, anoProcurado, cursoPesquisa);
                
                // Exibe o resultado
                printf("\nNumero de alunos que ingressaram em %d no curso: %d\n", anoProcurado, contarAlunosGeral);
                // Sai do loop de entrada de matrículas
                break;
            }
        }
        
        // Pergunta ao usuário se deseja encerrar ou continuar
        printf("\nDeseja encerrar (E) ou continuar (C)? ");
        scanf(" %c", &opcao);
        
        // Limpa o buffer de entrada
        while (getchar() != '\n');
        
    } while (opcao != 'E' && opcao != 'e');
    
    return 0;
}
