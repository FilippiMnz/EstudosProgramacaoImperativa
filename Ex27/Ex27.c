#include <stdio.h>

int main() {
    float Meta, Doacao, Soma = 0;
    
    printf("Meta da vaquinha: ");
    scanf("%f", &Meta);

    do {
        printf("Valor da Doacao: ");
        scanf("%f", &Doacao);
        
        Soma = Soma + Doacao;
        
        if (Soma >= Meta) {
            printf("Parabens! A meta da vaquinha foi alcancada!\n");
        } else {
            printf("Doacao recebida. Valor parcial alcançado: %.2f R$\n", Soma);
        }

    } while (Soma < Meta);

    return 0;
}
