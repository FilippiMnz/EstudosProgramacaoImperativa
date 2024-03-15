/*
D. Maria tem um ônibus que faz diariamente, das 8 as 18
horas, o trajeto Rosa Elze – Atalaia. É feita 1 viagem por
hora e D. Maria registra o número de passageiros de cada
uma para identificar o horário com maior número de
passageiros. Para tanto foi implementado e discutido em
sala um programa em C. Efetuar ajustes nesse de forma
que seja identificado o horário com menor número de
passageiros, exibir o número médio de passageiros, a soma
de passageiros do dia e o montante recebido por D. Maria,
considerando que a passagem custa R$22,00. Aplicar for e
pelo menos 1 função.
*/
#include <stdio.h>

// Função para calcular a média
float calcularMedia(int passageiros[], int tamanho) { 
    int soma = 0;
    for (int i = 0; i < tamanho; i++) { //loop para calculo da media soma = a quantidade de passageiros dentro do array
        soma += passageiros[i];
    }
    return (float)soma / tamanho; ; //retorna a media, a soma, transformada em um float, dividido pelo tamanho(hora final -  a hora inicial)
}

int main() {
    const int HorarioInit = 8;
    const int Horafinal = 18;
    const float PrecoPassagem = 22.00;

    int passageiros[Horafinal - HorarioInit];
    int menorPassageiros = 9999; // Inicializando com um número grande para encontrar o menor
    int horaMenor = 0;
    int somaPassageiros = 0;
    
    // Leitura dos passageiros em cada hora
    for (int i = 0; i < Horafinal - HorarioInit; i++) {
        printf("Digite o número de passageiros na hora %d: ", i + HorarioInit);
        scanf("%d", &passageiros[i]);
        
        // Verifica se é a menor quantidade de passageiros
        if (passageiros[i] < menorPassageiros) {
            menorPassageiros = passageiros[i];
            horaMenor = i + HorarioInit;
        }
        
        somaPassageiros += passageiros[i];
    }
    
    // Cálculo da média
    float media = calcularMedia(passageiros, Horafinal - HorarioInit);
    
    // Exibição dos resultados
    printf("\nHorário com menor número de passageiros: %d\n", horaMenor);
    printf("Número médio de passageiros: %.2f\n", media);
    printf("Soma de passageiros do dia: %d\n", somaPassageiros);
    printf("Montante recebido por D. Maria: R$ %.2f\n", somaPassageiros * PrecoPassagem);
    
    return 0;
}
