/*
(Adaptado do 3o Exercício Resolvido – Cap. 5 – Fund.
Da Prog. De Computadores) Faça um programa
para ler N números inteiros e positivos e de cada
um desses apresente o fatorial. O cálculo do fatorial
deve ser efetuado por meio de função elaborada
pelo programador.
*/
#include <stdio.h>

// Função para calcular o fatorial
int calcularFatorial(int n) {
    int fatorial = 1;
    for (int i = 1; i <= n; i++) { // para cada i menor ou igual a n, i será incrementado
        fatorial *= i;              // fatorial será o proprio fatorial * o i. A cada iteração, o valor de fatorial é atualizado multiplicando-se pelo valor atual de i.
    }
    return fatorial;
}

int main() {
    int N;
    printf("Digite a quantidade de números para calcular o fatorial: ");
    scanf("%d", &N);

    // Ler N números inteiros e calcular o fatorial de cada um
    for (int i = 0; i < N; i++) {
        int numero;    //inicialização do numero que receberá o alvo da fatoração
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numero);

        if (numero >= 0) {
            int fatorial = calcularFatorial(numero);
            printf("O fatorial de %d é: %d\n", numero, fatorial);
        } else {                                        //verificação para que o numero não seja negativo
            printf("O número %d não é um número inteiro e positivo.\n", numero);
        }
    }

    return 0;
}
