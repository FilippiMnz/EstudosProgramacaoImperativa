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

// Função para contar o número de alunos que ingressaram em um ano específico no curso de gerontologia
int contarAlunosGerontologia(int matriculas[], int totalAlunos, int ano) {
    int count = 0;
    
    for (int i = 0; i < totalAlunos; i++) {
        int anoMatricula = matriculas[i] / 1000000; // Extrai os 4 primeiros dígitos (ano)
        int curso = (matriculas[i] / 10000) % 100; // Extrai os dígitos 5 e 6 (curso)
        
        if (anoMatricula == ano && curso == 99) { // Verifica se o ano da matrícula é igual ao ano especificado e se o curso é gerontologia (99)
            count++;  //caso seja incrementa em 1 o valor do count por cada aluno encontrado 
        }
    }
    
    return count;
}


int main() {
    int num_alunos = 100; // Número de alunos
    int matriculas[num_alunos]; // Array para armazenar as matrículas dos alunos
    int totalAlunos = 0; // Inicialize o total de alunos como zero
    int anoProcurado;


  /* caso queira que o usuario digite manualmente a quantidade de alunos necessaria 
    // Leitura do número de alunos
    printf("Digite o numero de alunos: ");
    scanf("%d", &num_alunos);
*/  

    // Leitura das matrículas dos alunos
    printf("Digite as matriculas dos %d alunos:\n", num_alunos);
    for (int i = 0; i < num_alunos; i++) {
        printf("Matricula do aluno %d: ", i + 1);
        scanf("%d", &matriculas[totalAlunos]);
        totalAlunos++;
    }
    
    // Solicita ao usuário o ano a ser pesquisado
    printf("Digite o ano a ser pesquisado: ");
    scanf("%d", &anoProcurado);

    // Chamada da função para contar alunos de gerontologia no ano especificado
    int alunosGerontologia = contarAlunosGerontologia(matriculas, totalAlunos, anoProcurado);
    
    // Exibe o resultado
    printf("\nNumero de alunos que ingressaram em %d no curso de Gerontologia: %d\n", anoProcurado, alunosGerontologia);
    
    return 0;
    
}
